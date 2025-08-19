#!/usr/bin/env python3
import os
import sys
import stat
import subprocess
import urllib.request
from typing import Optional, Tuple

# -----------------------------
# Platform-specific parameters.
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

def main():
    root = installer["root_path"]
    os.makedirs(root, exist_ok=True)

    # NECTO installer archive/disk image path.
    archive_path = os.path.join(root, installer["archive_name"])

    # Download NECTO installer archive/disk image.
    print(f'\033[34mDownloading {installer['operating_system']} NECTO Installer\033[34m')
    os.makedirs(os.path.dirname(archive_path), exist_ok=True)

    # Check if it is downloaded.
    downloaded_location, _ = urllib.request.urlretrieve(installer["necto_link"], archive_path)
    if not os.path.exists(downloaded_location):
        raise FileNotFoundError(f'\033[31mDownload failed: {downloaded_location} does not exist\033[31m')
    print(f'\033[32mNECTO installer is downloaded successfully: {downloaded_location}\033[32m ({os.path.getsize(downloaded_location)} bytes)')

    # Windows/Linux option.
    if use_zip:
        # Extract zip archive.
        import zipfile
        print(f"Extracting ZIP: {archive_path} -> {root}")
        with zipfile.ZipFile(archive_path, "r") as z:
            z.extractall(root)

        # Locate runner
        if not installer['installer_path']:
            raise FileNotFoundError(f"\033[31mCould not locate NECTO installer binary after extracting {archive_path}\033[31m")

        # if not sys.platform.startswith("win"):
            # make_executable(installer['installer_path'])

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
        run_command(f"hdiutil attach '{archive_path}' -mountpoint '{mount_point}' -nobrowse -quiet")

        app_path = '/Volumes/NECTOInstaller/NECTO Installer.app'

        # Copy the .app out of the mounted volume first
        dest_app = os.path.join(root, os.path.basename(app_path))
        print(f"Copying app: '{app_path}' -> '{dest_app}'")
        run_command(f"cp -R '{app_path}' '{dest_app}'")

        # Find a runnable inside the copied app and run it
        # make_executable(installer['installer_path'])

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
