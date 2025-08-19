import subprocess, os, sys, shutil, urllib.request

if sys.platform.startswith('win'):
    import zipfile
    installer_handler = {
        'root_path': 'C:runner',
        'necto_path': 'C:runner/MikroElektronika',
        'necto_path_app_data': 'C:runner/appdata/NECTOStudio7',
        'necto_link': 'https://software-update.mikroe.com/NECTOStudio7/live/necto/win/NECTOInstaller.zip'
    }
    installer_arcive = 'NECTOInstaller.zip'
elif sys.platform.startswith('linux'):
    installer_handler = {
        'root_path': '/home/runner',
        'necto_path': '/home/runner/MikroElektronika',
        'necto_path_app_data': '/home/runner/.MIKROE/NECTOStudio7',
        'necto_link': 'https://software-update.mikroe.com/NECTOStudio7/live/necto/linux/NECTOInstaller.zip'
    }
    installer_arcive = 'NECTOInstaller.zip'
elif sys.platform.startswith('darwin'):
    installer_handler = {
        'root_path': '/Users/runner',
        'necto_path': '/Users/runner/MikroElektronika',
        'necto_path_app_data': '/Users/runner/.MIKROE/NECTOStudio7',
        'necto_link': 'https://software-update.mikroe.com/NECTOStudio7/live/necto/macos/NECTOInstaller.dmg'
    }
    installer_arcive = 'NECTOInstaller.dmg'

# Runs a shell command and prints the output.
def run_command(command):
    print(f"Running: {command}")
    process = subprocess.Popen(
        command,
        shell=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True
    )

    # Print output line by line as it comes
    for line in process.stdout:
        print(line, end="")

    process.wait()

    if process.returncode != 0:
        raise RuntimeError(f"Command failed with exit code {process.returncode}: {command}")

    return process.returncode

def main():
    print("Step 1: Download installer")
    print("Downloading NECTOInstaller")
    installer_runner = os.path.join(installer_handler['root_path'], 'NECTOInstaller.exe')
    urllib.request.urlretrieve(installer_handler['necto_link'])

    print("Step 2. Extract NECTOInstaller")
    installer_zip = os.path.join(installer_handler['root_path'], installer_arcive)
    if sys.platform.startswith('win'):
        with zipfile.ZipFile(installer_zip, 'r') as zip_ref:
            zip_ref.extractall(installer_handler['root_path'])
    elif sys.platform.startswith('linux'):
        run_command(f"7za x {installer_zip} -o{installer_handler['root_path']}")
    elif sys.platform.startswith('darwin'):
        # Mount the DMG
        print(f"Mounting {installer_zip}...")
        run_command(f"hdiutil attach {installer_zip} -mountpoint /Volumes/NECTOInstaller -nobrowse -quiet")
        # Copy app bundle or installer from the DMG
        run_command(f"cp -R /Volumes/NECTOInstaller/* {installer_zip}")

    print("Step 3: Install NECTO")
    run_command(f'{installer_runner} installer --install-packages necto_installer necto_application database clocks schemas mikroe_utils_common preinit unit_test_lib mikrosdk {installer_handler['necto_path']} {installer_handler['necto_path_app_data']}')

if __name__ == "__main__":
    main()
