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
        "root_path": "C:/Users/runner",
        "necto_path": "C:/Users/runner/MikroElektronika",
        "necto_path_app_data": "C:/Users/runner/AppData/Local/NECTOStudio7",
        "necto_link": "https://software-update.mikroe.com/NECTOStudio7/live/necto/win/NECTOInstaller.zip",
        "archive_name": "NECTOInstaller.zip",
        "installer_path": "C:/Users/runner/NECTOInstaller.exe",
        "operating_system": "Windows"
    }
    use_zip = True
elif sys.platform.startswith("linux"):
    installer = {
        "root_path": "/home/runner",
        "necto_path": "/home/runner/MikroElektronika",
        "necto_path_app_data": "/home/runner/.MIKROE/NECTOStudio7",
        "necto_link": "https://software-update.mikroe.com/NECTOStudio7/live/necto/linux/NECTOInstaller.zip",
        "archive_name": "NECTOInstaller.zip",
        "installer_path": "/home/runner/NECTOInstaller",
        "operating_system": "Ubutnu"
    }
    use_zip = True
elif sys.platform.startswith("darwin"):
    installer = {
        "root_path": "/Users/runner",
        "necto_path": "/Users/runner/MikroElektronika",
        "necto_path_app_data": "/Users/runner/.MIKROE/NECTOStudio7",
        "necto_link": "https://software-update.mikroe.com/NECTOStudio7/live/necto/macos/NECTOInstaller.dmg",
        "archive_name": "NECTOInstaller.dmg",
        "installer_path": "/Users/runner/NECTO Installer.app/Contents/MacOS/installer",
        "operating_system": "Mac"
    }
    use_zip = False
else:
    raise RuntimeError(f"Unsupported platform: {sys.platform}")

# -----------------------------
# Utilities
# -----------------------------
def run_command(cmd):
    print(f"\033[36mRunning: {cmd}\033[36m")
    proc = subprocess.Popen(
        cmd,
        shell=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True,
    )
    for line in proc.stdout:
        print(line, end="")
    proc.wait()
    if proc.returncode != 0:
        raise RuntimeError(f"\033[31mCommand failed with exit code {proc.returncode}: {cmd}.\033[31m")
    return proc.returncode

def make_executable(path: str):
    try:
        mode = os.stat(path).st_mode
        os.chmod(path, mode | stat.S_IXUSR | stat.S_IXGRP | stat.S_IXOTH)
    except Exception as e:
        print(f"Warning: chmod +x failed for {path}: {e}")

def download(url, dest):
    # Download NECTO installer archive/disk image.
    print(f'\033[34mDownloading {installer['operating_system']} NECTO Installer\033[34m')
    os.makedirs(os.path.dirname(dest), exist_ok=True)

    # Check if it is downloaded.
    downloaded_location, _ = urllib.request.urlretrieve(url, dest)
    if not os.path.exists(downloaded_location):
        raise FileNotFoundError(f'\033[31mDownload failed: {downloaded_location} does not exist\033[31m')
    print(f'\033[32mNECTO installer is downloaded successfully: {downloaded_location}\033[32m ({os.path.getsize(downloaded_location)} bytes)')
    return downloaded_location

def extract_zip(zip_path, target_dir):
    # Extract zip archive.
    import zipfile
    print(f"Extracting ZIP: {zip_path} -> {target_dir}")
    with zipfile.ZipFile(zip_path, "r") as z:
        z.extractall(target_dir)

    # Locate runner
    if not installer['installer_path']:
        raise FileNotFoundError(f"\033[31mCould not locate NECTO installer binary after extracting {zip_path}\033[31m")

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
    app_path = None
    for root, dirs, files in os.walk(mount_point):
        for d in dirs:
            if d.lower().endswith(".app") and app_path is None:
                app_path = os.path.join(root, d)
    return app_path

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

    # NECTO installer archive/disk image path.
    archive_path = os.path.join(root, installer["archive_name"])

    # Download installer archive/image.
    download(installer["necto_link"], archive_path)

    # Windows/Linux option.
    if use_zip:
        extract_zip(archive_path, root)

        if not sys.platform.startswith("win"):
            make_executable(installer['installer_path'])

        cmd = (
            f"\"{installer['installer_path']}\" installer "
            f"--install-packages "
            f"necto_installer necto_application database clocks schemas mikroe_utils_common preinit unit_test_lib mikrosdk "
            f"\"{installer['necto_path']}\" \"{installer['necto_path_app_data']}\""
        )
        run_command(cmd)
        print("\033[32mNECTO installation completed successfully.\033[32m")

    # MacOS option.
    else:
        # macOS DMG flow
        mount_point = "/Volumes/NECTOInstaller"
        print(f"Mounting DMG: {archive_path}")
        mount_dmg(archive_path, mount_point)

        app_path = '/Volumes/NECTOInstaller/NECTO Installer.app'

        # Copy the .app out of the mounted volume first
        dest_app = os.path.join(root, os.path.basename(app_path))
        print(f"Copying app: '{app_path}' -> '{dest_app}'")
        run_command(f"cp -R '{app_path}' '{dest_app}'")

        # Find a runnable inside the copied app and run it
        make_executable(installer['installer_path'])

        cmd = (
            f"\"{installer['installer_path']}\" installer "
            f"--install-packages "
            f"necto_installer necto_application database clocks schemas mikroe_utils_common preinit unit_test_lib mikrosdk "
            f"\"{installer['necto_path']}\" \"{installer['necto_path_app_data']}\""
        )
        run_command(cmd)
        print("\033[32mNECTO installation completed successfully.\033[32m")
        return

if __name__ == "__main__":
    main()
