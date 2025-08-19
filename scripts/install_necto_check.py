#!/usr/bin/env python3
import os
import sys
import stat
import subprocess
import urllib.request

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
        # We'll discover the exact runner after extraction
        "runner_hint": "NECTOInstaller",  # base prefix to look for
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
def run_command(cmd: str) -> int:
    """Run shell command, stream stdout+stderr live, fail on nonzero exit."""
    print(f"Running: {cmd}")
    proc = subprocess.Popen(
        cmd,
        shell=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True,
        env={**os.environ},  # inherit env; override if needed
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


def find_file_by_prefix(root: str, prefix: str) -> str | None:
    """Find first file starting with prefix (case-sensitive) anywhere under root."""
    for dirpath, _, files in os.walk(root):
        for f in files:
            if f.startswith(prefix):
                return os.path.join(dirpath, f)
    return None


def find_any_installer(root: str) -> str | None:
    """Fallback: find any likely runner containing 'NECTO' in name."""
    for dirpath, _, files in os.walk(root):
        for f in files:
            name = f.lower()
            if ("necto" in name) and (name.endswith(".exe") or not sys.platform.startswith("win")):
                return os.path.join(dirpath, f)
    return None


# -----------------------------
# macOS DMG handling
# -----------------------------
def mount_dmg(dmg_path: str, mount_point: str) -> None:
    run_command(f"hdiutil attach '{dmg_path}' -mountpoint '{mount_point}' -nobrowse -quiet")


def unmount_dmg(mount_point: str) -> None:
    # Try a polite detach first; if busy, try forcing (helps in CI sometimes)
    try:
        run_command(f"hdiutil detach '{mount_point}' -quiet")
    except RuntimeError:
        run_command(f"hdiutil detach '{mount_point}' -force -quiet")


def find_runner_in_mounted_dmg(mount_point: str) -> tuple[str, str]:
    """
    Return (kind, path):
      kind = 'pkg'  -> system installer package
      kind = 'app'  -> runnable binary inside .app/Contents/MacOS
    """
    pkg_candidates = []
    app_candidates = []

    for root, dirs, files in os.walk(mount_point):
        for f in files:
            if f.lower().endswith(".pkg"):
                pkg_candidates.append(os.path.join(root, f))
        for d in dirs:
            if d.lower().endswith(".app"):
                app_candidates.append(os.path.join(root, d))

    if pkg_candidates:
        print(f"Found PKG: {pkg_candidates[0]}")
        return ("pkg", pkg_candidates[0])

    if app_candidates:
        app_path = app_candidates[0]
        macos_dir = os.path.join(app_path, "Contents", "MacOS")
        if os.path.isdir(macos_dir):
            for f in os.listdir(macos_dir):
                candidate = os.path.join(macos_dir, f)
                if os.path.isfile(candidate) and os.access(candidate, os.X_OK):
                    print(f"Found app runner: {candidate}")
                    return ("app", candidate)

    raise FileNotFoundError("No .pkg or runnable .app found inside DMG")


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
    runner_path = None

    if use_zip:
        extract_zip(archive_path, root)
        # Try to find an installer binary
        # Prefer exact prefix, then fallback
        runner_path = find_file_by_prefix(root, installer["runner_hint"])
        if not runner_path:
            runner_path = find_any_installer(root)
        if not runner_path:
            raise FileNotFoundError(f"Could not locate NECTO installer binary after extracting {archive_path}")

        if not sys.platform.startswith("win"):
            make_executable(runner_path)

        # Build command to run the binary
        cmd = (
            f"\"{runner_path}\" installer "
            f"--install-packages "
            f"necto_installer necto_application database clocks schemas mikroe_utils_common preinit unit_test_lib mikrosdk "
            f"\"{installer['necto_path']}\" \"{installer['necto_path_app_data']}\""
        )

        # On headless Linux CI, Qt can try to pick a GUI backend; keep it quiet
        if sys.platform.startswith("linux"):
            os.environ.setdefault("QT_QPA_PLATFORM", "offscreen")

        run_command(cmd)

    else:
        # macOS DMG flow
        mount_point = "/Volumes/NECTOInstaller"
        try:
            print(f"Mounting DMG: {archive_path}")
            mount_dmg(archive_path, mount_point)
            kind, found = find_runner_in_mounted_dmg(mount_point)
        finally:
            print("Unmounting DMG…")
            try:
                unmount_dmg(mount_point)
            except Exception as e:
                print(f"Warning: DMG unmount issue: {e}")

        if kind == "pkg":
            # Must use the system installer for .pkg
            # GitHub macOS runners allow passwordless sudo for installer
            cmd = f"sudo /usr/sbin/installer -pkg '{found}' -target /"
            run_command(cmd)
        else:
            # app runner binary (CLI-capable)
            runner_path = found
            make_executable(runner_path)
            cmd = (
                f"\"{runner_path}\" installer "
                f"--install-packages "
                f"necto_installer necto_application database clocks schemas mikroe_utils_common preinit unit_test_lib mikrosdk "
                f"\"{installer['necto_path']}\" \"{installer['necto_path_app_data']}\""
            )
            run_command(cmd)

    print("NECTO installation completed successfully.")


if __name__ == "__main__":
    main()
