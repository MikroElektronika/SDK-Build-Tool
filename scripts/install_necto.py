import os, sys, subprocess, shutil, urllib.request

if sys.platform.startswith('win'):
    import zipfile
    installer = {
        'root_path': 'C:/Users/runner',
        'necto_path': 'C:/Users/runner/MikroElektronika',
        'necto_path_app_data': 'C:/Users/runner/AppData/Local/NECTOStudio7',
        'necto_link': 'https://software-update.mikroe.com/NECTOStudio7/live/necto/win/NECTOInstaller.zip',
        'archive': 'NECTOInstaller.zip',
        'runner_name': 'NECTOInstaller.exe',
    }
elif sys.platform.startswith('linux'):
    import zipfile
    installer = {
        'root_path': '/home/runner',
        'necto_path': '/home/runner/MikroElektronika',
        'necto_path_app_data': '/home/runner/.MIKROE/NECTOStudio7',
        'necto_link': 'https://software-update.mikroe.com/NECTOStudio7/live/necto/linux/NECTOInstaller.zip',
        'archive': 'NECTOInstaller.zip',
        'runner_name': 'NECTOInstaller',  # likely no .exe on Linux
    }
elif sys.platform.startswith('darwin'):
    installer = {
        'root_path': '/Users/runner',
        'necto_path': '/Users/runner/MikroElektronika',
        'necto_path_app_data': '/Users/runner/.MIKROE/NECTOStudio7',
        'necto_link': 'https://software-update.mikroe.com/NECTOStudio7/live/necto/macos/NECTOInstaller.dmg',
        'archive': 'NECTOInstaller.dmg',
        'runner_name': 'NECTOInstaller',  # adjust after inspecting DMG contents
    }
else:
    raise RuntimeError(f"Unsupported platform: {sys.platform}")

def run_command(cmd):
    print(f"Running: {cmd}")
    p = subprocess.Popen(cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
    for line in p.stdout:
        print(line, end="")
    p.wait()
    if p.returncode != 0:
        raise RuntimeError(f"Command failed with exit code {p.returncode}: {cmd}")
    return p.returncode

def extract_zip(zip_path, target_dir):
    import zipfile
    print(f"Extracting {zip_path} -> {target_dir}")
    with zipfile.ZipFile(zip_path, 'r') as z:
        z.extractall(target_dir)

def extract_dmg(dmg_path, target_dir):
    mount_point = "/Volumes/NECTOInstaller"
    try:
        print(f"Mounting DMG: {dmg_path}")
        run_command(f"hdiutil attach '{dmg_path}' -mountpoint '{mount_point}' -nobrowse -quiet")
        print(f"Copying contents from {mount_point} -> {target_dir}")
        run_command(f"cp -R '{mount_point}/'* '{target_dir}/'")
    finally:
        print("Unmounting DMG…")
        # don’t crash if already detached
        try:
            run_command(f"hdiutil detach '{mount_point}' -quiet")
        except RuntimeError:
            pass

def main():
    os.makedirs(installer['root_path'], exist_ok=True)

    # 1) Download
    installer_path = os.path.join(installer['root_path'], installer['archive'])
    print(f"Downloading to: {installer_path}")
    saved_path, _ = urllib.request.urlretrieve(installer['necto_link'], installer_path)
    print(f"Downloaded file: {saved_path}")
    if not os.path.exists(saved_path):
        raise FileNotFoundError(f"Download failed: {saved_path} does not exist")

    # 2) Extract
    if saved_path.lower().endswith('.zip'):
        extract_zip(saved_path, installer['root_path'])
    elif saved_path.lower().endswith('.dmg'):
        extract_dmg(saved_path, installer['root_path'])
    else:
        raise RuntimeError(f"Unknown archive type: {saved_path}")

    # 3) Find the installer runner (adjust if names differ)
    installer_runner = os.path.join(installer['root_path'], installer['runner_name'])
    if not os.path.exists(installer_runner):
        # try to locate it if the archive unpacked into a subfolder
        for root, dirs, files in os.walk(installer['root_path']):
            candidates = [f for f in files if f.startswith('NECTOInstaller')]
            if candidates:
                installer_runner = os.path.join(root, candidates[0])
                break

    if not os.path.exists(installer_runner):
        raise FileNotFoundError(f"Could not locate installer runner near {installer['root_path']}")

    # Make executable on Unix
    if not sys.platform.startswith('win'):
        try:
            os.chmod(installer_runner, 0o755)
        except Exception as e:
            print(f"Warning: chmod failed: {e}")

    # 4) Run installation
    print("Installing NECTO…")
    cmd = (
        f"\"{installer_runner}\" installer "
        f"--install-packages necto_installer necto_application database clocks schemas mikroe_utils_common preinit unit_test_lib mikrosdk "
        f"\"{installer['necto_path']}\" \"{installer['necto_path_app_data']}\""
    )
    run_command(cmd)

if __name__ == "__main__":
    main()
