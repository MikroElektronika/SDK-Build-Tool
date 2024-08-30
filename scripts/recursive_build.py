import subprocess
import requests
import re
import os
import sqlite3
import json
from pathlib import Path

# Define the repository owner and name
repo_owner = "MikroElektronika"
repo_name = "mikrosdk_v2"

# Path to the necto_db.db file.
dbPath = '/home/runner/.MIKROE/NECTOStudio7/databases/necto_db.db'

# Path to the released SDK folder.
sdkPath = '/home/runner/.MIKROE/NECTOStudio7/packages/sdk'

# Path for storing artifacts.
testPath = '/home/runner/test_results'

# Path to sdk_build_automation tool.
toolPath = '/home/runner/MikroElektronika/NECTOStudio/bin'

# Global variable to trace failed tests.
build_failed = False

# Supported compilers list for each architecture.
compiler_list = {
    'ARM': ['gcc_arm_none_eabi'],
    'RISCV': ['xpack-riscv-none-embed-gcc'],
    'PIC': ['mikrocpic'],
    'DSPIC': ['mikrocdspic'],
    'PIC32': ['mikrocpic32'],
    'AVR': ['mikrocavr']
}

# Extracts the SDK version from the manifest.json file.
def get_sdk_version(manifest_path):
    with open(manifest_path, 'r') as f:
        manifest = json.load(f)

        return manifest.get("sdk-version", "")

# Runs the bash command.
def run_cmd(cmd):
    global build_failed
    # Blue color for build tool command command.
    print(f"\033[94m{cmd}\033[0m")
    
    try:
        # Store all the output lines to print only important ones.
        output = subprocess.check_output(cmd, shell=True, text=True)
        for line in output.splitlines():
            if line.startswith("Building:"):

                # White color for the current setup build.
                print(line)
            elif "Build success!" in line:

                # Green color for success.
                print("\033[92m{}\033[0m".format(line))
            elif "Build failed" in line:

                # Red color for failure.
                print("\033[91m{}\033[0m".format(line))
                build_failed = True

    # Error handling for failed builds not to fail the job.
    except subprocess.CalledProcessError as e:
        for line in e.output.splitlines():
            if line.startswith("Building:"):

                # White color for the current setup build.
                print(line)
            elif "Build success!" in line:

                # Green color for success.
                print(f"\033[92m{line}\033[0m")  # Green color for success
            elif "Build failed" in line:

                # Red color for failure.
                print(f"\033[91m{line}\033[0m")  # Red color for failure
                build_failed = True

# Runs the build commands for each member of mcu_list, board_list, and mcu_card_list.
def run_builds(changes_dict):
    # Get the SDK version from manifest.json file.
    sdk_version = get_sdk_version('/home/runner/.MIKROE/NECTOStudio7/packages/sdk/mikroSDK_v2/src/manifest.json').replace(".", "")

    # Run build for all boards from board_list.
    print(f"\033[93mRunning build for {len(changes_dict['board_list'])} boards\033[0m")
    for board in changes_dict['board_list']:
        compilers, mcu = get_compilers(board, is_mcu=False)
        for compiler in compilers:
            cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation --isBareMetal "0" --compiler "{compiler}" --sdk "mikrosdk_v{sdk_version}" --board "{board}" --mcu "{mcu}" --installPrefix "{testPath}/board_build/{compiler}"'
            run_cmd(cmd)

# Returns the list of compilers based on the given name and type.
def get_compilers(name, is_mcu=True):
    if is_mcu:
        if any(substring in name for substring in ["ATSAM", "STM", "TM4C", "MK"]):
            return compiler_list["ARM"], "ARM"
        elif "GD32" in name:
            return compiler_list["RISCV"], "RISCV"
        elif "PIC32" in name:
            return compiler_list["PIC32"], "PIC32"
        elif any(substring in name for substring in ["DSPIC", "PIC24", "dsPIC"]):
            return compiler_list["DSPIC"], "DSPIC"
        elif any(substring in name for substring in ["PIC18", "PIC16", "PIC12", "PIC10"]):
            return compiler_list["PIC"], "PIC"
        elif "AT" in name and "ATSAM" not in name:
            return compiler_list["AVR"], "AVR"
    else:
        conn = sqlite3.connect(dbPath)
        cursor = conn.cursor()

        # Get all device_uids associated with the board name.
        cursor.execute(f"""
            SELECT bd.device_uid
            FROM BoardToDevice bd
            JOIN Devices d ON bd.device_uid = d.uid
            WHERE bd.board_uid = '{name}'
            AND d.sdk_support = 1;
        """)
        device_uids = cursor.fetchall()
        
        # Initialize an empty set to store unique compiler keys.
        unique_compilers = set()
        result_compilers = []

        # Get necessary compilers for all supported MCU cards for this board.
        for device_uid in device_uids:
            device_uid = device_uid[0]
            if any(substring in device_uid for substring in ["ATSAM", "STM", "TM4C", "MK"]):
                if "ARM" not in unique_compilers:
                    unique_compilers.add("ARM")
                    result_compilers.extend(compiler_list["ARM"])
            elif "GD32" in device_uid:
                if "RISCV" not in unique_compilers:
                    unique_compilers.add("RISCV")
                    result_compilers.extend(compiler_list["RISCV"])
            elif "PIC32" in device_uid:
                if "PIC32" not in unique_compilers:
                    unique_compilers.add("PIC32")
                    result_compilers.extend(compiler_list["PIC32"])
            elif any(substring in device_uid for substring in ["dsPIC", "PIC24"]):
                if "DSPIC" not in unique_compilers:
                    unique_compilers.add("DSPIC")
                    result_compilers.extend(compiler_list["DSPIC"])
            elif any(substring in device_uid for substring in ["PIC18", "PIC16", "PIC12", "PIC10"]):
                if "PIC" not in unique_compilers:
                    unique_compilers.add("PIC")
                    result_compilers.extend(compiler_list["PIC"])
            elif "AT" in device_uid and "ATSAM" not in device_uid:
                if "AVR" not in unique_compilers:
                    unique_compilers.add("AVR")
                    result_compilers.extend(compiler_list["AVR"])

        conn.close()
        return result_compilers, device_uid

# Define a REGEXP function for SQLite.
def regexp(expr, item):
    reg = re.compile(expr)
    return reg.search(item) is not None

# Queries the database to update mcu_card_list, board_list, and mcu_list.
def query_database(changes_dict):
    # Get the SDK version from the manifest.json file.
    sdk_version = get_sdk_version('/home/runner/.MIKROE/NECTOStudio7/packages/sdk/mikroSDK_v2/src/manifest.json').replace(".", "")

    # Connect to the database.
    conn = sqlite3.connect(dbPath)

    # Create REGEXP function for python script.
    conn.create_function("REGEXP", 2, regexp)
    cursor = conn.cursor()

    new_board_list = []

    cursor.execute(f"""
        SELECT board_uid
        FROM SDKToBoard
        WHERE sdk_uid = 'mikrosdk_v{sdk_version}';
    """)
    rows = cursor.fetchall()
    new_board_list.extend([row[0] for row in rows])
    changes_dict['board_list'][:] = sorted(list(set(new_board_list)))

    conn.close()

# Writes the result dictionary to a JSON file and ensures testPath exists.
def write_results_to_file(changes_dict):
    with open(f'{testPath}/built_changes.json', 'w+') as json_file:
        json.dump(changes_dict, json_file, indent=4)

    print(f"All the data for build has been written to {testPath}/built_changes.json")

    for item in changes_dict['unused']:
        print(f"Couldn't find {item} in the database")

def main():
    global build_failed

    # Initialize the changes dictionary.
    changes_dict = {
        'regex_list': [],
        'mcu_list': [],
        'board_list': [],
        'mcu_card_list': [],
        'unused': [],
        'changed_files': []
    }

    # Create a folder for job artifacts. 
    os.makedirs(testPath, exist_ok=True)

    # Get the necessary data from the database.
    query_database(changes_dict)

    # Finally, run the SDK build tool.
    run_builds(changes_dict)

    # Write all the used info for building to artifact folder.
    write_results_to_file(changes_dict)

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
