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
    process = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    for line in process.stdout:
        print(line.strip())
    process.wait()
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

    print("Step 4: Move installer to root NECTO")
    if os.path.isfile(f"{installer_handler['necto_path']}/installer_tmp"):
        shutil.move(f"{installer_handler['necto_path']}/installer_tmp", f"{installer_handler['necto_path']}/installer")

    print("Step 5: Move instance_uuid.txt to root NECTO")
    if os.path.isfile(f"{installer_handler['root_path']}/instance_uuid.txt"):
        shutil.move(f"{installer_handler['root_path']}/instance_uuid.txt", f"{installer_handler['necto_path']}/instance_uuid.txt")

    print("Step 6: Read hash from instance_uuid.txt")
    with open(f"{installer_handler['necto_path']}/instance_uuid.txt", "r") as f:
        line = f.readline().strip()

    print("Step 7: Copy NECTOStudio.conf to current directory")
    shutil.copy(f"{installer_handler['root_path']}/.config/MikroElektronika/NECTOStudio.conf", f"{installer_handler['root_path']}/NECTOStudio.conf")

    print("Step 8: Add the read hash to it")
    with open(f"{installer_handler['root_path']}/NECTOStudio.conf", "r+") as f:
        content = f.read()
        f.seek(0, 0)
        f.write(f"[{line}]\n" + content)

    print("Step 9: Copy it back to .config/MikroElektronika")
    shutil.copy(f"{installer_handler['root_path']}/NECTOStudio.conf", f"{installer_handler['root_path']}/.config/MikroElektronika/NECTOStudio.conf")

    print("Step 10: Move installed_packages.json to NECTO root")
    if os.path.isfile(f"{installer_handler['root_path']}/installed_packages.json"):
        shutil.move(f"{installer_handler['root_path']}/installed_packages.json", f"{installer_handler['necto_path']}/MikroElektronika/installed_packages.json")

    print("Step 11: Remove NECTOInstaller.zip")
    os.remove(f"{installer_handler['root_path']}/NECTOInstaller.zip")

    print("Step 12: Remove NECTOStudio.conf")
    os.remove(f"{installer_handler['root_path']}/NECTOStudio.conf")

if __name__ == "__main__":
    main()
