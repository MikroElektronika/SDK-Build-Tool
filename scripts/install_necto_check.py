#!/usr/bin/env python3
import os
import sys
import stat
import subprocess
import urllib.request
from typing import Optional, Tuple

# -----------------------------
# Platform-specific parameters
# -----------------------------
if sys.platform.startswith("win"):
    installer = {
        "root_path": r"C:\Users\runner",
        "necto_path": r"C:\Users\runner\MikroElektronika",
        "necto_path_app_data": r"C:\Users\runner\AppData\Local\NECTOStudio7",
        "necto_link": "https://software-update.mikroe.com/NECTOStudio7/live/necto/win/NECTOInstaller.zip",
        "archive_name": "NECTOInstaller.zip",
        "runner_hint": "NECTOInstaller",
    }
    use_zip = True
elif sys.platform.startswith("linux"):
    installer = {
        "root_path": "/home/runner",
        "necto_path": "/home/runner/MikroElektronika",
        "necto_path_app_data": "/home/runner/.MIKROE/NECTOStudio7",
        "necto_link": "https://software-update.mikroe.com/NECTOStudio7/live/necto/linux/NECTOInstaller.zip",
        "archive_name": "NECTOInstaller.zip",
        "runner_hint": "NECTOInstaller",
    }
    use_zip = True
elif sys.platform.startswith("darwin"):
    installer = {
        "root_path": "/Users/runner",
        "necto_path": "/Users/runner/MikroElektronika",
        "necto_path_app_data": "/Users/runner/.MIKROE/NECTOStudio7",
        "necto_link": "https://software-update.mikroe.com/NECTOStudio7/live/necto/macos/NECTOInstaller.dmg",
        "archive_name": "NECTOInstaller.dmg",
        "runner_hint": "NECTOInstaller",
    }
    use_zip = False
else:
    raise RuntimeError(f"Unsupported platform: {sys.platform}")

# -----------------------------
# Utilities
# -----------------------------
def run_command(cmd: str, env: Optional[dict] = None) -> int:
    """Run shell command, stream stdout+stderr live, fail on nonzero exit."""
    print(f"Running: {cmd}")
    proc = subprocess.Popen(
        cmd,
        shell=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True,
        env=(env or os.environ),
    )
    for line in proc.stdout:
        print(line, end="")
    proc.wait()
    if proc.returncode != 0:
        raise RuntimeError(f"Command failed with exit code {proc.returncode}: {cmd}")
    return proc.returncode

def make_executable(path: str):
    try:
        mode = os.stat(path).st_mode
        os.chmod(path, mode | stat.S_IXUSR | stat.S_IXGRP | stat.S_IXOTH)
    except Exception as e:
        print(f"Warning: chmod +x failed for {path}: {e}")

def download(url: str, dest: str) -> str:
    print(f"Downloading: {url}\n  -> {dest}")
    os.makedirs(os.path.dirname(dest), exist_ok=True)
    saved, _ = urllib.request.urlretrieve(url, dest)
    if not os.path.exists(saved):
        raise FileNotFoundError(f"Download failed: {saved} does not exist")
    print(f"Downloaded file: {saved} ({os.path.getsize(saved)} bytes)")
    return saved

def extract_zip(zip_path: str, target_dir: str):
    import zipfile
    print(f"Extracting ZIP: {zip_path} -> {target_dir}")
    with zipfile.ZipFile(zip_path, "r") as z:
        z.extractall(target_dir)

def find_file_by_prefix(root: str, prefix: str) -> Optional[str]:
    for dirpath, _, files in os.walk(root):
        for f in files:
            if f.startswith(prefix):
                return os.path.join(dirpath, f)
    return None

def find_any_installer(root: str) -> Optional[str]:
    for dirpath, _, files in os.walk(root):
        for f in files:
            name = f.lower()
            if "necto" in name:
                return os.path.join(dirpath, f)
    return None

# -----------------------------
# macOS DMG handling
# -----------------------------
def mount_dmg(dmg_path: str, mount_point: str) -> None:
    run_command(f"hdiutil attach '{dmg_path}' -mountpoint '{mount_point}' -nobrowse -quiet")

def unmount_dmg(mount_point: str) -> None:
    try:
        run_command(f"hdiutil detach '{mount_point}' -quiet")
    except RuntimeError:
        run_command(f"hdiutil detach '{mount_point}' -force -quiet")

def find_pkg_or_app(mount_point: str) -> Tuple[Optional[str], Optional[str]]:
    """
    Returns (pkg_path, app_path) where either can be None.
    """
    pkg_path = None
    app_path = None
    for root, dirs, files in os.walk(mount_point):
        for f in files:
            if f.lower().endswith(".pkg") and pkg_path is None:
                pkg_path = os.path.join(root, f)
        for d in dirs:
            if d.lower().endswith(".app") and app_path is None:
                app_path = os.path.join(root, d)
    return pkg_path, app_path

def pick_app_runner(app_path: str) -> str:
    """
    Pick a runnable binary inside .app/Contents/MacOS.
    Prefer names containing 'NECTO' or 'Installer', else largest executable.
    """
    macos_dir = os.path.join(app_path, "Contents", "MacOS")
    if not os.path.isdir(macos_dir):
        raise FileNotFoundError(f"{macos_dir} not found inside app")

    candidates = []
    for f in os.listdir(macos_dir):
        p = os.path.join(macos_dir, f)
        if os.path.isfile(p) and os.access(p, os.X_OK):
            candidates.append(p)

    if not candidates:
        # Some apps ship non-exec files; make all +x and retry
        for f in os.listdir(macos_dir):
            p = os.path.join(macos_dir, f)
            if os.path.isfile(p):
                make_executable(p)
        candidates = [os.path.join(macos_dir, f) for f in os.listdir(macos_dir)
                      if os.path.isfile(os.path.join(macos_dir, f)) and os.access(os.path.join(macos_dir, f), os.X_OK)]

    if not candidates:
        raise FileNotFoundError("No executable found in Contents/MacOS")

    # Prefer sensible names
    pref = [p for p in candidates if ("necto" in os.path.basename(p).lower() or "installer" in os.path.basename(p).lower())]
    if pref:
        return pref[0]

    # Fallback: pick largest
    candidates.sort(key=lambda p: os.path.getsize(p), reverse=True)
    return candidates[0]

# -----------------------------
# Main
# -----------------------------
def main():
    root = installer["root_path"]
    os.makedirs(root, exist_ok=True)

    archive_path = os.path.join(root, installer["archive_name"])

    # 1) Download installer archive/image
    download(installer["necto_link"], archive_path)

    # 2) Extract or Mount & locate runner
    if use_zip:
        # Windows / Linux
        extract_zip(archive_path, root)

        # Locate runner
        runner_path = find_file_by_prefix(root, installer["runner_hint"]) or find_any_installer(root)
        if not runner_path:
            raise FileNotFoundError(f"Could not locate NECTO installer binary after extracting {archive_path}")

        if not sys.platform.startswith("win"):
            make_executable(runner_path)

        # Linux headless tip
        env = dict(os.environ)
        if sys.platform.startswith("linux"):
            env.setdefault("QT_QPA_PLATFORM", "offscreen")

        cmd = (
            f"\"{runner_path}\" installer "
            f"--install-packages "
            f"necto_installer necto_application database clocks schemas mikroe_utils_common preinit unit_test_lib mikrosdk "
            f"\"{installer['necto_path']}\" \"{installer['necto_path_app_data']}\""
        )
        run_command(cmd, env=env)
        print("NECTO installation completed successfully.")
        return

    # macOS DMG flow
    mount_point = "/Volumes/NECTOInstaller"
    print(f"Mounting DMG: {archive_path}")
    mount_dmg(archive_path, mount_point)

    try:
        pkg_path, app_path = find_pkg_or_app(mount_point)

        if pkg_path:
            # Run the pkg directly while the volume is mounted
            cmd = f"sudo /usr/sbin/installer -pkg '{pkg_path}' -target /"
            run_command(cmd)
            print("NECTO installation completed successfully (pkg).")
            return

        if app_path:
            # Copy the .app out of the mounted volume first
            dest_app = os.path.join(root, os.path.basename(app_path))
            print(f"Copying app: '{app_path}' -> '{dest_app}'")
            run_command(f"cp -R '{app_path}' '{dest_app}'")

            # Now we can unmount the DMG safely
            print("Detaching DMG…")
            unmount_dmg(mount_point)

            # Find a runnable inside the copied app and run it
            runner_path = pick_app_runner(dest_app)
            make_executable(runner_path)

            cmd = (
                f"\"{runner_path}\" installer "
                f"--install-packages "
                f"necto_installer necto_application database clocks schemas mikroe_utils_common preinit unit_test_lib mikrosdk "
                f"\"{installer['necto_path']}\" \"{installer['necto_path_app_data']}\""
            )
            run_command(cmd)
            print("NECTO installation completed successfully (app).")
            return

        raise FileNotFoundError("No .pkg or .app found inside DMG")

    finally:
        # Ensure DMG is not left mounted (ok if already detached)
        try:
            unmount_dmg(mount_point)
        except Exception as e:
            print(f"Note: DMG unmount attempt: {e}")

if __name__ == "__main__":
    main()
