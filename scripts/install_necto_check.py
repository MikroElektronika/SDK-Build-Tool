#!/usr/bin/env python3
import os
import sys
import stat
import subprocess
import json
import urllib.request

# Platform-specific parameters.
if sys.platform.startswith('win'):
    installer = {
        'root_path':            'C:/Users/runner',
        'necto_path':           'C:/Users/runner/MikroElektronika',
        'necto_path_app_data':  'C:/Users/runner/AppData/Local/MIKROE/NECTOStudio7',
        'necto_link':           'https://software-update.mikroe.com/NECTOStudio7/live/necto/win/NECTOInstaller.zip',
        'archive_name':         'NECTOInstaller.zip',
        'installer_path':       'C:/Users/runner/NECTOInstaller.exe'
    }

elif sys.platform.startswith('linux'):
    installer = {
        'root_path':            '/home/runner',
        'necto_path':           '/home/runner/MikroElektronika',
        'necto_path_app_data':  '/home/runner/.MIKROE/NECTOStudio7',
        'necto_link':           'https://software-update.mikroe.com/NECTOStudio7/live/necto/linux/NECTOInstaller.zip',
        'archive_name':         'NECTOInstaller.zip',
        'installer_path':       '/home/runner/NECTOInstaller'
    }

elif sys.platform.startswith('darwin'):
    installer = {
        'root_path':            '/Users/runner',
        'necto_path':           '/Users/runner/MikroElektronika',
        'necto_path_app_data':  '/Users/runner/.MIKROE/NECTOStudio7',
        'necto_link':           'https://software-update.mikroe.com/NECTOStudio7/live/necto/macos/NECTOInstaller.dmg',
        'archive_name':         'NECTOInstaller.dmg',
        'installer_path':       '/Users/runner/NECTO Installer.app/Contents/MacOS/installer'
    }

# Dictionary for checking if all the packages were installed.
package_installation_validation = {
    'clang_format': False,
    'clangd': False,
    'cmake': False,
    'codegrip_gdb_server': False,
    'database': False,
    'images': False,
    'images_sdk': False,
    'mikroe_utils_common': False,
    'mikrosdk': False,
    'necto_application': False,
    'necto_config': False,
    'necto_data': False,
    'necto_installer': False,
    'preinit': False,
    'srecord': False,
    'tabnine': False,
    'templates': False,
    'unit_test_lib': False,
    'clocks': False,
    'schemas': False
}

# Counter for main NECTO packages installation.
previous_prog = 101
installation_unpacking = 'installation'

# Function for printing only the installation progress information.
def parse_and_print_progress(line):
    global previous_prog

    try:
        # Fetch the installation progress info from the stdout line.
        # Example of the stdout line:
        # {"jsonrpc": "2.0", "method": "install_progress", "params": {"status": "overall_progress", "package": "clang_format", "progress": 33}, "id": 675}Content-Length: 142
        obj = json.loads(line.split('Content-Length:')[0])
        if obj.get('method') == 'install_progress':
            params = obj.get('params', {})
            pkg = params.get('package')
            prog = params.get('progress')
            if pkg is not None and prog is not None and previous_prog != prog:
                previous_prog = prog
                if prog == 100:
                    print(f'\033[32m[{pkg}] {installation_unpacking} progress: {prog}%\033[32m')
                    if installation_unpacking == 'installation':
                        installation_unpacking = 'unpacking'
                    else:
                        installation_unpacking = 'installation'
                    package_installation_validation[pkg] = True
    except json.JSONDecodeError:
        # Not a JSON line, just print raw.
        print(line.strip())

# Function for executing the commands.
def run_command(cmd):
    print(f'\033[36mRunning: {cmd}\033[36m')
    proc = subprocess.Popen(
        cmd,
        shell=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True
    )

    # Parse the line to display the installation progress.
    for line in proc.stdout:
        parse_and_print_progress(line)
    proc.wait()

    # Display the error if something fails.
    if proc.returncode != 0:
        raise RuntimeError(f'\033[31mCommand failed with exit code {proc.returncode}: {cmd}.\033[31m')

def main():
    # Make sure to create the root folder for NECTO installation.
    os.makedirs(installer['root_path'], exist_ok=True)

    # Step 1 - Download NECTO installer archive/disk image.
    print(f'Downloading NECTO Installer.')
    archive_path = os.path.join(installer['root_path'], installer['archive_name'])
    downloaded_location, _ = urllib.request.urlretrieve(installer['necto_link'], archive_path)

    # Step 2 - Check if NECTO installer archive/disk image is downloaded.
    if not os.path.exists(downloaded_location):
        raise FileNotFoundError(f'\033[31mDownload failed: {downloaded_location} does not exist\033[31m')
    print(f'\033[32mNECTO installer is downloaded successfully: {downloaded_location}\033[32m ({os.path.getsize(downloaded_location)} bytes)')

    # Step 3 - extract runner for the installer.
    if sys.platform.startswith('darwin'):
        # MacOS Disk Image mounting.
        mount_point = '/Volumes/NECTOInstaller'
        print(f'Mounting DMG: {archive_path}')
        run_command(f'hdiutil attach "{archive_path}" -mountpoint "{mount_point}" -nobrowse -quiet')

        app_path = '/Volumes/NECTOInstaller/NECTO Installer.app'

        # Copy the .app (runner) out of the mounted volume first.
        dest_app = os.path.join(installer['root_path'], os.path.basename(app_path))
        print(f'Copying app: "{app_path}" -> "{dest_app}"')
        run_command(f'cp -R "{app_path}" "{dest_app}"')

    else:
        # Extract zip archive.
        import zipfile
        print(f'Extracting ZIP: {archive_path} -> {installer['root_path']}')
        with zipfile.ZipFile(archive_path, 'r') as z:
            z.extractall(installer['root_path'])

        # Make the installer file executable on linux.
        if sys.platform.startswith('linux'):
            mode = os.stat(installer['installer_path']).st_mode
            os.chmod(installer['installer_path'], mode | stat.S_IXUSR | stat.S_IXGRP | stat.S_IXOTH)

    # Step 4 - Run the NECTO installer.
    cmd = (
        f'"{installer['installer_path']}" installer '
        f'--install-packages '
        f'necto_installer necto_application database clocks schemas mikroe_utils_common preinit unit_test_lib mikrosdk '
        f'"{installer['necto_path']}" "{installer['necto_path_app_data']}"'
    )
    print('\n\nRunning NECTO installation command.\n')
    run_command(cmd)
    print('\033[32mNECTO installation completed successfully.\033[32m')

    print(package_installation_validation)

if __name__ == '__main__':
    main()
