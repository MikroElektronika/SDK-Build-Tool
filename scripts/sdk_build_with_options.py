import subprocess, argparse
import requests
import os, shutil
import sqlite3
import json, urllib
import zipfile
import time, re

linux_build = True

if linux_build:
    cache_folder = '/home/runner'
else:
    cache_folder = 'c:/MikroElektronikaDev'

# Path to the necto_db.db file.
if linux_build:
    dbPath = f'{cache_folder}/.MIKROE/NECTOStudio7_Development/databases/necto_db.db'
else:
    dbPath = f'{cache_folder}/MIKROE/NECTOStudio7/databases/necto_db.db'

# Path to the released SDK folder.
if linux_build:
    sdkPath = f'{cache_folder}/.MIKROE/NECTOStudio7_Development/packages/sdk/mikroSDK_v2/src'
else:
    sdkPath = f'{cache_folder}/MIKROE/NECTOStudio7/packages/sdk/mikroSDK_v2/src'

# Path for storing artifacts.
if linux_build:
    testPath = '/home/runner/recursive_test_results'
else:
    testPath = 'D:/recursive_test_results'

# Path to sdk_build_automation tool.
if linux_build:
    toolPath = f'{cache_folder}/MikroElektronika/NECTOStudio/bin'
else:
    toolPath = f'{cache_folder}/NECTOStudio/bin'

# Global variable to trace failed tests.
build_failed = False

# Extracts the SDK version from the manifest.json file.
def get_sdk_version(manifest_path):
    with open(manifest_path, 'r') as f:
        manifest = json.load(f)

        return manifest.get("sdk-version", "")

# Runs the bash command.
def run_cmd(cmd, changes_dict, status_key):
    global build_failed
    num_of_retries = 1
    # Blue color for build tool command command.
    print(f"\033[94m{cmd}\033[0m")
    # shutil.copyfile(os.path.join(testPath, 'necto_db.db'), os.path.join(local_app_data_path, 'databases', 'necto_db.db'))
    # shutil.copytree(os.path.join(testPath, 'packages'), os.path.join(local_app_data_path, 'packages'), dirs_exist_ok=True)
    # shutil.copyfile(os.path.join(testPath, 'mikroeUtilsCommon.cmake'), os.path.join(local_app_data_path, 'cmake', 'mikroeUtilsCommon.cmake'))
    # shutil.copy(os.path.join(testPath, 'clocks.json'), os.path.join(local_app_data_path, 'clocks.json'))

    # Store all the output lines to print only important ones.
    # output = subprocess.check_output(cmd, shell=True, text=True)
    # Store all the output lines to print only important ones.
    result = subprocess.run(cmd, shell=True, text=True, capture_output=True)
    changes_dict['build_status'][status_key] = 'UNDEFINED'
    changes_dict['build_status'][status_key] += result.stdout
    # print(output)
    changes_dict['build_status'][status_key] += result.stderr
    # print(output)
    if 'Building:' in result.stdout:
        output = result.stdout
        # print(output)
    else:
        output = result.stderr
        # print(output)
    while num_of_retries <= 5:
        current_build_failed = False
        total_ouput = ''
        for line in output.splitlines():
            if line.startswith("Building:"):
                # White color for the current setup build.
                total_ouput += line + '\n'
            elif "Build success!" in line:
                changes_dict['build_status'][status_key] = 'SUCCESS'
                # Green color for success.
                total_ouput += "\033[92m{}\n\033[0m".format(line)
            elif "Build failed" in line:
                # Red color for failure.
                changes_dict['build_status'][status_key] = 'FAIL'
                total_ouput += "\033[91m{}\n\033[0m".format(line)
                current_build_failed = True
        if current_build_failed == False:
            print(total_ouput)
            return
        print(f'Build attempt number {num_of_retries} failed. Trying again.')
        # result = subprocess.run(cmd, shell=True, text=True, capture_output=True)
        # shutil.copyfile(os.path.join(testPath, 'necto_db.db'), os.path.join(local_app_data_path, 'databases', 'necto_db.db'))
        # shutil.copytree(os.path.join(testPath, 'packages'), os.path.join(local_app_data_path, 'packages'), dirs_exist_ok=True)
        # shutil.copyfile(os.path.join(testPath, 'mikroeUtilsCommon.cmake'), os.path.join(local_app_data_path, 'cmake', 'mikroeUtilsCommon.cmake'))
        # shutil.copy(os.path.join(testPath, 'clocks.json'), os.path.join(local_app_data_path, 'clocks.json'))
        num_of_retries += 1

    build_failed = True
    print(total_ouput)

# Runs the build commands for each member of mcu_list, board_list, and mcu_card_list.
def run_builds(changes_dict, build_type, build_components):
    # Get the SDK version from manifest.json file.
    sdk_version = get_sdk_version(os.path.join(sdkPath, 'manifest.json')).replace(".", "")

    if (build_type == 'Bare Metal'):
        bare_metal_flag = '--isBareMetal "1"'
    else:
        bare_metal_flag = '--isBareMetal "0"'

    for compiler in changes_dict['compiler_list']:
        print(f"\033[93mProcessing {compiler} compiler\033[0m")
        if build_components == 'MCUs only':
            print(f"\033[93mRunning build for {len(changes_dict[compiler])} Devices\033[0m")
            for mcu in changes_dict[compiler]:
                if linux_build:
                    cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation {bare_metal_flag} --compiler "{compiler}" --sdk "mikrosdk_v{sdk_version}" --board "{changes_dict['board_list'][0]}" --mcu "{mcu}" --installPrefix "{testPath}/mcu_build/{compiler}"'
                else:
                    cmd = f'{toolPath}/sdk_build_automation.exe {bare_metal_flag} --compiler "{compiler}" --sdk "mikrosdk_v{sdk_version}" --board "{changes_dict['board_list'][0]}" --mcu "{mcu}" --installPrefix "{testPath}/mcu_build/{compiler}"'
                # Delay for 2 seconds
                time.sleep(2)
                run_cmd(cmd, changes_dict, mcu + ' ' + compiler)

        elif build_components == 'Cards only':
            for board in changes_dict[compiler]:
                print(f"\033[93mRunning build for {len(changes_dict[compiler][board])} Cards with {board}\033[0m")
                for card in changes_dict[compiler][board]:
                    if linux_build:
                        cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation {bare_metal_flag} --compiler "{compiler}" --sdk "mikrosdk_v{sdk_version}" --board "{board}" --mcu "{card}" --installPrefix "{testPath}/card_build/{compiler}"'
                    else:
                        cmd = f'{toolPath}/sdk_build_automation.exe {bare_metal_flag} --compiler "{compiler}" --sdk "mikrosdk_v{sdk_version}" --board "{board}" --mcu "{card}" --installPrefix "{testPath}/card_build/{compiler}"'
                    # Delay for 2 seconds
                    time.sleep(2)
                    run_cmd(cmd, changes_dict, card + ' ' + compiler)

        elif build_components == 'Boards only' or build_components == 'Boards + Displays':
            print(f"\033[93mRunning build for {len(changes_dict[compiler])} Boards\033[0m")
            for board in changes_dict[compiler]:
                if linux_build:
                    cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation {bare_metal_flag} --compiler "{compiler}" --sdk "mikrosdk_v{sdk_version}" --board "{board}" --installPrefix "{testPath}/board_build/{compiler}"'
                else:
                    cmd = f'{toolPath}/sdk_build_automation.exe --isBareMetal "0" --compiler "{compiler}" --sdk "mikrosdk_v{sdk_version}" --board "{board}" --installPrefix "{testPath}/board_build/{compiler}"'
                # Delay for 2 seconds
                time.sleep(2)
                run_cmd(cmd, changes_dict, board + ' ' + compiler)

# Fetches the two latest releases from the GitHub repository.
def get_latest_releases():
    try:
        # GitHub API URL to fetch tags
        tags_url = f"https://api.github.com/repos/MikroElektronika/mikrosdk_v2/tags"

        # Send request to GitHub API
        response = requests.get(tags_url)
        response.raise_for_status()
        tags = response.json()

        # Return the two most recent tags
        return [tag['name'] for tag in tags[:2]]
    except requests.RequestException as e:
        print(f"Error fetching tags: {e}")
        return None, None

# Queries the database to update mcu_card_list, board_list, and mcu_list.
def query_database(changes_dict, build_components, build_type):
    # Get the SDK version from the manifest.json file.
    sdk_version = get_sdk_version(os.path.join(sdkPath, 'manifest.json')).replace(".", "")
    if build_type == 'Bare Metal':
        sdk_support = ''
    else:
        sdk_support = 'AND Devices.sdk_support = "1"'

    # Connect to the database.
    conn = sqlite3.connect(dbPath)
    cursor = conn.cursor()

    for compiler in changes_dict['compiler_list']:
        if build_components == 'MCUs only':
            changes_dict[compiler] = []
            cursor.execute(f"""
                SELECT DISTINCT Devices.uid, Devices.installer_package FROM Devices
                INNER JOIN CompilerToDevice ON Devices.uid = CompilerToDevice.device_uid
                INNER JOIN SDKToDevice ON Devices.uid = SDKToDevice.device_uid
                WHERE SDKToDevice.sdk_uid = 'mikrosdk_v{sdk_version}'
                {sdk_support}
                AND CompilerToDevice.compiler_uid = '{compiler}'
                AND SDKToDevice.device_uid NOT LIKE '%\\_%' ESCAPE '\\';
            """)
            rows = cursor.fetchall()
            if rows:
                for row in rows:
                    if row[0] not in changes_dict[compiler]:
                        changes_dict[compiler].append(row[0])
                    installer_package = json.loads(row[1])
                    if compiler in installer_package and installer_package[compiler] not in changes_dict['install_packages']:
                        changes_dict['install_packages'].append(installer_package[compiler])


            cursor.execute(f"""
                SELECT board_uid FROM BoardToDevice
                WHERE device_uid = '{changes_dict[compiler][0]}'
                AND board_uid LIKE '%GENERIC%'
            """)
            row = cursor.fetchone()
            if row[0] not in changes_dict['board_list']:
                changes_dict['board_list'].append(row[0])

        elif build_components == 'Cards only':
            changes_dict[compiler] = {}
            cursor.execute(f"""
                SELECT Devices.uid, Devices.installer_package, BoardToDevice.board_uid, Boards.installer_package
                FROM Devices
                INNER JOIN CompilerToDevice ON Devices.uid = CompilerToDevice.device_uid
                INNER JOIN SDKToDevice ON Devices.uid = SDKToDevice.device_uid
                INNER JOIN BoardToDevice ON Devices.uid = BoardToDevice.device_uid
                INNER JOIN Boards ON BoardToDevice.board_uid = Boards.uid
                WHERE SDKToDevice.sdk_uid = 'mikrosdk_v{sdk_version}'
                AND CompilerToDevice.compiler_uid = '{compiler}'
                AND SDKToDevice.device_uid LIKE '%\\_%' ESCAPE '\\';
            """)
            rows = cursor.fetchall()
            if rows:
                for row in rows:
                    if row[2] not in changes_dict[compiler]:
                        changes_dict[compiler][row[2]] = []
                    if row[0] not in changes_dict[compiler][row[2]]:
                        changes_dict[compiler][row[2]].append(row[0])
                    # As tool doesn't install mcu card packages we need to install them manually
                    if row[1].split('"')[3] not in changes_dict['install_packages']:
                        changes_dict['install_packages'].append(row[1].split('"')[3])
                    if row[3].split('"')[3] not in changes_dict['install_packages']:
                        changes_dict['install_packages'].append(row[3].split('"')[3])

        elif build_components == 'Boards only':
            changes_dict[compiler] = []
            cursor.execute(f"""
                SELECT DISTINCT BoardToDevice.board_uid, Boards.installer_package
                FROM BoardToDevice
                INNER JOIN Boards ON BoardToDevice.board_uid = Boards.uid
                INNER JOIN SDKToBoard ON BoardToDevice.board_uid = SDKToBoard.board_uid
                INNER JOIN CompilerToDevice ON BoardToDevice.device_uid = CompilerToDevice.device_uid
                WHERE SDKToBoard.sdk_uid = 'mikrosdk_v{sdk_version}'
                AND CompilerToDevice.compiler_uid = '{compiler}'
            """)
            rows = cursor.fetchall()
            if rows:
                for row in rows:
                    if row[0] not in changes_dict[compiler]:
                        changes_dict[compiler].append(row[0])
                    if row[1].split('"')[3] not in changes_dict['install_packages']:
                        changes_dict['install_packages'].append(row[1].split('"')[3])

        elif build_components == 'Boards + Displays':
            changes_dict[compiler] = []
            cursor.execute(f"""
                SELECT DISTINCT BoardToDevice.board_uid, Boards.installer_package FROM BoardToDevice
                INNER JOIN SDKToBoard ON BoardToDevice.board_uid = SDKToBoard.board_uid
                INNER JOIN CompilerToDevice ON BoardToDevice.device_uid = CompilerToDevice.device_uid
                INNER JOIN Boards ON BoardToDevice.board_uid = Boards.uid
                WHERE SDKToBoard.sdk_uid = 'mikrosdk_v{sdk_version}'
                AND CompilerToDevice.compiler_uid = '{compiler}'
                AND Boards.display_socket IS NOT 'NO_DISPLAY'
            """)
            rows = cursor.fetchall()
            if rows:
                for row in rows:
                    if row[0] not in changes_dict[compiler]:
                        changes_dict[compiler].append(row[0])
                    if row[1].split('"')[3] not in changes_dict['install_packages']:
                        changes_dict['install_packages'].append(row[1].split('"')[3])

    conn.close()

# Writes the result dictionary to a JSON file and ensures testPath exists.
def write_results_to_file(changes_dict):
    with open(f'{testPath}/built_changes.json', 'w+') as json_file:
        json.dump(changes_dict, json_file, indent=4)

    print(f"All the data for build has been written to {testPath}/built_changes.json")

def clear_directory(dir_path):
    """
    Clears the contents of a directory, removing all files and subdirectories.
    """
    if os.path.exists(dir_path):
        # Iterate over the directory contents and remove files and subdirectories
        for filename in os.listdir(dir_path):
            file_path = os.path.join(dir_path, filename)
            try:
                if os.path.isdir(file_path) and filename != 'thirdparty' and filename != 'bsp':
                    shutil.rmtree(file_path)  # Remove directory and its contents
                else:
                    continue
            except Exception as e:
                print(f"Error deleting {file_path}: {e}")

# Define the target directory
target_directory = "targets/arm/mikroe/common/include"

# Define the prefixes to search for
prefixes = [
    "TQFP", "SOT-23", "DFN", "PDIP", "SOIJ", "DFN-S", "SOIC", "MSOP", "UDFN", "SPDIP",
    "SSOP", "MQFP", "PLCC", "TSSOP", "QFN", "UQFN", "LQFP", "VQFN", "QFN-S", "CSP",
    "NFBGA", "LFBGA", "VFBGA", "VFQFN", "QFM", "WLCSP", "UFQFPN", "UFBGA", "TFBGA",
    "VFQFPN", "EWLCSP", "WLCSP", "VTLA", "SQFN", "LBGA", "TLLGA", "XFLGA", "WFBGA",
    "SO", "BGA", "HVQFN", "XFBGA", "HUQFN", "VDFN", "WQFN", "QFP"
]

def copy_files(src_dir, dest_dir):
    """
    Copies files from the source directory to the destination directory,
    overwriting existing files.
    """
    if not os.path.exists(dest_dir):
        os.makedirs(dest_dir)
    # Recursively search for folders and rename - workaround as build tool doesn't use pin_name for packages
    for root, dirs, files in os.walk(os.path.join(src_dir, target_directory)):
        for dir_name in dirs:
            for prefix in prefixes:
                if dir_name.startswith(prefix):
                    # If a match is found, add the full folder path
                    full_path_orig = os.path.join(root, dir_name)
                    full_path_new = os.path.join(root, prefix)
                    os.rename(full_path_orig, full_path_new)
                    print(f"Changed the name from {full_path_orig} to {full_path_new}")
                    break
    for filename in os.listdir(src_dir):
        if filename == 'bsp' or filename == 'thirdparty' or filename == '.git' or filename == '.gitignore' or filename == 'manifest.json':
            continue
        src_path = os.path.join(src_dir, filename)
        dest_path = os.path.join(dest_dir, filename)
        try:
            if os.path.isdir(src_path):
                shutil.copytree(src_path, dest_path)
            else:
                shutil.copy2(src_path, dest_path)
            print(f"Successfully copied {src_path} to {dest_path}")
        except Exception as e:
            print(f"Error copying {src_path} to {dest_path}: {e}")

def clone_repo_and_switch(repo_url, branch_name, clone_dir):
    """
    Clones the Git repository from `repo_url` and switches to `branch_name`.
    :param repo_url: The URL of the Git repository.
    :param branch_name: The branch to switch to after cloning.
    :param clone_dir: The directory where the repository will be cloned.
    """
    # Clone the repository
    if not os.path.exists(clone_dir):
        print(f"Cloning repository from {repo_url} into {clone_dir}...")
        subprocess.run(['git', 'clone', repo_url, clone_dir], check=True)
    else:
        print(f"Repository already cloned in {clone_dir}. Pulling latest changes...")
        subprocess.run(['git', '-C', clone_dir, 'pull'], check=True)

    # Switch to the desired branch
    print(f"Switching to branch {branch_name}...")
    subprocess.run(['git', '-C', clone_dir, 'checkout', branch_name], check=True)
    print(f"Successfully switched to branch {branch_name}.")

def run_command(command):
    process = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    stdout, stderr = process.communicate()
    if process.returncode != 0:
        print("Error:", stderr.strip())
    else:
        print(stdout.strip())
    return process.returncode

def download_metadata(repo_name, updated_name):
    # URL to fetch the latest release
    latest_release_url = f"https://api.github.com/repos/MikroElektronika/{repo_name}/releases/latest"

    try:
        # Get the latest release data
        response = requests.get(latest_release_url)
        response.raise_for_status()
        release_data = response.json()

        # Find the download URL for the specific asset
        asset_url = None
        for asset in release_data["assets"]:
            if asset["name"] == 'metadata.json':
                asset_url = asset["browser_download_url"]
                break

        if asset_url:
            # Download the asset
            print(f"Downloading 'metadata.json' from {asset_url}...")
            asset_response = requests.get(asset_url, stream=True)
            asset_response.raise_for_status()

            # Save the file locally
            with open(updated_name, "wb") as file:
                for chunk in asset_response.iter_content(chunk_size=8192):
                    file.write(chunk)
            print(f"File downloaded successfully and saved as '{updated_name}'")
        else:
            print(f"Asset 'metadata.json' not found in the latest release.")
    except requests.exceptions.RequestException as e:
        print(f"Failed to fetch the latest release or download the file: {e}")

def install_packages(install_packages):
    print("Downloading Development NECTOStudio version")
    url = os.getenv('NECTO_DOWNLOAD_URL')
    urllib.request.urlretrieve(url, "NECTOInstaller.zip")
    print("Extracting installer")
    if linux_build:
        run_command("7za x NECTOInstaller.zip")
    else:
        with zipfile.ZipFile('NECTOInstaller.zip', 'r') as zip_ref:
            zip_ref.extractall('.')

    # Download metadata_core.json for core_packages and metadata_sdk.json for sdk
    download_metadata('mikrosdk_v2', 'metadata_sdk.json')
    download_metadata('core_packages', 'metadata_core.json')
    for package in install_packages:
        num_of_retries = 0
        install_location = ''
        # Open and load the SDK JSON file
        with open('metadata_core.json', "r") as metadata_core:
            packages_core_meta = json.load(metadata_core)
            for package_core_meta in packages_core_meta:
                if package_core_meta['name'] == package:
                    if linux_build:
                        install_location = package_core_meta['install_location'].replace('%APPLICATION_DATA_DIR%', f'{cache_folder}/.MIKROE/NECTOStudio7_Development')
                    else:
                        install_location = package_core_meta['install_location'].replace('%APPLICATION_DATA_DIR%', f'{cache_folder}/MIKROE/NECTOStudio7')
                    break
        if install_location == '':
            with open('metadata_sdk.json', "r") as metadata_sdk:
                packages_sdk_meta = json.load(metadata_sdk)
                for package_sdk_meta in packages_sdk_meta:
                    if package_sdk_meta['name'] == package:
                        if linux_build:
                            install_location = package_core_meta['install_location'].replace('%APPLICATION_DATA_DIR%', f'{cache_folder}/.MIKROE/NECTOStudio7_Development')
                        else:
                            install_location = package_core_meta['install_location'].replace('%APPLICATION_DATA_DIR%', f'{cache_folder}/MIKROE/NECTOStudio7')
                        break
        if install_location == '':
            print(f'ERROR! For package {package} there is no info in metadata.')

        print(f'Installing package: {package}')
        while (1):
            if linux_build:
                run_command(f'./NECTOInstaller installer --install-packages {package} {cache_folder} {cache_folder}/.MIKROE/NECTOStudio7_Development > /dev/null 2>&1')
            else:
                run_command(f'NECTOInstaller.exe installer --install-packages {package} {cache_folder} {cache_folder}/MIKROE/NECTOStudio7 > /dev/null 2>&1')
            print('Checking if package exists')
            if os.path.exists(install_location) or os.path.exists(os.path.join(install_location, 'board/include/mcu_cards', package)):
                print(f"The {package} package was downloaded successfully.")
                break
            if num_of_retries == 2:
                print(f'Package is not installed in {install_location} after 3 retries - exiting with error.')
                exit(1)
            num_of_retries += 1

def functionRegex(value, pattern):
    reg = re.compile(value)
    return reg.search(pattern) is not None

def main():
    global build_failed

    parser = argparse.ArgumentParser(description="Run Recursive Build.")
    parser.add_argument("build_type", help="Build type - Bare Metal, SDK from branch, SDK from latest release", type=str)
    parser.add_argument("branch_name", help="Branch name for cloning if SDK build from branch requested", type=str)
    parser.add_argument("mcus_cards_boards", help="MCUs only or with Cards or Boards with Displays only?", type=str)
    parser.add_argument("compilers", help="Which compilers should be used for build?", type=str)
    args = parser.parse_args()

    # Initialize the changes dictionary.
    changes_dict = {
        'compiler_list' : [],
        'install_packages' : [],
        'board_list' : [],
        'build_status': {}
    }

    changes_dict['compiler_list'] = args.compilers.split(' ')

    if args.build_type == 'SDK from Branch':
        clone_dir = "test-sdk-dir2"
        clone_repo_and_switch("https://github.com/MikroElektronika/mikrosdk_v2.git", args.branch_name, clone_dir)
        clear_directory(sdkPath)
        copy_files(clone_dir, sdkPath)

    # Create a folder for job artifacts.
    os.makedirs(testPath, exist_ok=True)

    # Get the necessary data from the database.
    query_database(changes_dict, args.mcus_cards_boards, args.build_type)

    install_packages(changes_dict['install_packages'])

    # Finally, run the SDK build tool.
    run_builds(changes_dict, args.build_type, args.mcus_cards_boards)

    # Write all the used info for building to artifact folder.
    write_results_to_file(changes_dict)

    for item in changes_dict['build_status']:
        if 'UNDEFINED' in changes_dict['build_status'][item] or 'FAIL' in changes_dict['build_status'][item]:
            build_failed = True

    if build_failed == True:
        # Red text for failure.
        print("\033[91mRecursive Build Failed!\033[0m")
        # Fail the job as well.
        exit(1)
    else:
        # Green text for success.
        print("\033[92mRecursive Build Success!\033[0m")

if __name__ == "__main__":
    main()
