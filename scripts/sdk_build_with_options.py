import subprocess, argparse
import requests
import os, shutil
import sqlite3
import json, urllib

# Define the repository owner and name
repo_owner = "MikroElektronika"
repo_name = "mikrosdk_v2"

# Path to the necto_db.db file.
dbPath = '/home/runner/MikroElektronika/.MIKROE/NECTOStudio7/databases/necto_db.db'

# Path to the released SDK folder.
sdkPath = '/home/runner/MikroElektronika/.MIKROE/NECTOStudio7/packages/sdk/mikroSDK_v2/src'

# Path for storing artifacts.
testPath = '/home/runner/recursive_test_results'

# Path to sdk_build_automation tool.
toolPath = '/home/runner/MikroElektronika/NECTOStudio/bin'

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
    # Blue color for build tool command command.
    print(f"\033[94m{cmd}\033[0m")

    # Store all the output lines to print only important ones.
    # output = subprocess.check_output(cmd, shell=True, text=True)
    # Store all the output lines to print only important ones.
    result = subprocess.run(cmd, shell=True, text=True, capture_output=True)
    if 'Building:' in result.stdout:
        output = result.stdout
        # print(output)
    else:
        output = result.stderr
        # print(output)
    for line in output.splitlines():
        if line.startswith("Building:"):
            changes_dict['build_status'][status_key] = 'UNDEFINED'
            # White color for the current setup build.
            print(line)
        elif "Build success!" in line:
            changes_dict['build_status'][status_key] = 'SUCCESS'
            # Green color for success.
            print("\033[92m{}\033[0m".format(line))
        elif "Build failed" in line:
            changes_dict['build_status'][status_key] = 'FAIL'
            # Red color for failure.
            print("\033[91m{}\033[0m".format(line))
            build_failed = True

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
                cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation {bare_metal_flag} --compiler "{compiler}" --sdk "mikrosdk_v{sdk_version}" --board "{changes_dict['board_list'][0]}" --mcu "{mcu}" --installPrefix "{testPath}/mcu_build/{compiler}"'
                run_cmd(cmd, changes_dict, mcu + ' ' + compiler)

        elif build_components == 'Cards only':
            for board in changes_dict[compiler]:
                print(f"\033[93mRunning build for {len(changes_dict[compiler][board])} Cards with {board}\033[0m")
                for card in changes_dict[compiler][board]:
                    cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation {bare_metal_flag} --compiler "{compiler}" --sdk "mikrosdk_v{sdk_version}" --board "{board}" --mcu "{card}" --installPrefix "{testPath}/card_build/{compiler}"'
                    run_cmd(cmd, changes_dict, card + ' ' + compiler)

        elif build_components == 'Boards only' or build_components == 'Boards + Displays':
            print(f"\033[93mRunning build for {len(changes_dict[compiler])} Boards\033[0m")
            for board in changes_dict[compiler]:
                cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation --isBareMetal "0" --compiler "{compiler}" --sdk "mikrosdk_v{sdk_version}" --board "{board}" --installPrefix "{testPath}/board_build/{compiler}"'
                run_cmd(cmd, changes_dict, board + ' ' + compiler)

# Fetches the two latest releases from the GitHub repository.
def get_latest_releases():
    try:
        # GitHub API URL to fetch tags
        tags_url = f"https://api.github.com/repos/{repo_owner}/{repo_name}/tags"

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
                SELECT DISTINCT Devices.uid FROM Devices
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
                SELECT Devices.uid, Devices.installer_package, BoardToDevice.board_uid
                FROM Devices
                INNER JOIN CompilerToDevice ON Devices.uid = CompilerToDevice.device_uid
                INNER JOIN SDKToDevice ON Devices.uid = SDKToDevice.device_uid
                INNER JOIN BoardToDevice ON Devices.uid = BoardToDevice.device_uid
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

            if 'UNI_DS_V8' not in changes_dict['board_list']: # TODO - should be changed to use appropriate board (v7 board for v7 cards)
                changes_dict['board_list'].append('UNI_DS_V8')

        elif build_components == 'Boards only':
            changes_dict[compiler] = []
            cursor.execute(f"""
                SELECT DISTINCT BoardToDevice.board_uid FROM BoardToDevice
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

        elif build_components == 'Boards + Displays':
            changes_dict[compiler] = []
            cursor.execute(f"""
                SELECT DISTINCT BoardToDevice.board_uid FROM BoardToDevice
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

def copy_files(src_dir, dest_dir):
    """
    Copies files from the source directory to the destination directory,
    overwriting existing files.
    """
    if not os.path.exists(dest_dir):
        os.makedirs(dest_dir)  # Create the destination directory if it doesn't exist
    for filename in os.listdir(src_dir):
        if filename == 'bsp' or filename == 'thirdparty':
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
    for line in process.stdout:
        print(line.strip())
    process.wait()
    return process.returncode

def install_packages(install_packages):
    url = os.getenv('NECTO_DOWNLOAD_URL')
    print("Downloading Development NECTOStudio version")
    urllib.request.urlretrieve(url, "NECTOInstaller.zip")

    print("Extract installer")
    run_command("7za x NECTOInstaller.zip")
    for package in install_packages:
        print(f'Installing package: {package}')
        run_command(f'./NECTOInstaller installer --install-packages {package} /home/runner/MikroElektronika /home/runner/.MIKROE/NECTOStudio7 > /dev/null 2>&1')

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

    if args.build_type == 'SDK from branch':
        clone_dir = "test-sdk-dir2"
        clone_repo_and_switch("https://github.com/MikroElektronika/mikrosdk_v2.git", args.branch_name, clone_dir)
        clear_directory(sdkPath)
        copy_files(clone_dir, sdkPath)

    changes_dict['compiler_list'] = args.compilers.split(' ')

    # Create a folder for job artifacts.
    os.makedirs(testPath, exist_ok=True)

    # Get the necessary data from the database.
    query_database(changes_dict, args.mcus_cards_boards, args.build_type)

    install_packages(changes_dict['install_packages'])

    # Finally, run the SDK build tool.
    run_builds(changes_dict, args.build_type, args.mcus_cards_boards)

    # Write all the used info for building to artifact folder.
    write_results_to_file(changes_dict)

    if build_failed == True or changes_dict['build_status'] == {}:
        # Red text for failure.
        print("\033[91mRecursive Build Failed!\033[0m")
        # Fail the job as well.
        exit(1)
    else:
        # Green text for success.
        print("\033[92mRecursive Build Success!\033[0m")

if __name__ == "__main__":
    main()
