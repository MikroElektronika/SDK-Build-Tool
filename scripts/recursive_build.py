
import os
import json
import sys
import re
import sqlite3
import subprocess
import shutil
from colorama import init, Fore

# Initialize colorama with environment variable support
init(autoreset=True, strip=False, convert=False)

# Global variable to trace failed tests.
build_failed = False

# Path for storing artifacts.
testPath = '/home/runner/test_results'

# Global variable for local_app_data_path
local_app_data_path = '/home/runner/.MIKROE/NECTOStudio7'

# Path to sdk_build_automation tool.
toolPath = '/home/runner/MikroElektronika/NECTOStudio/bin'

def print_directory_structure(root_dir, prefix=""):
    # Check if the root directory exists
    if not os.path.exists(root_dir):
        print(f"The path '{root_dir}' does not exist.")
        return

    # List all files and directories in the current directory
    items = os.listdir(root_dir)

    # Iterate over each item in the directory
    for index, item in enumerate(sorted(items)):
        path = os.path.join(root_dir, item)

        # Check if the current item is the last in the list
        is_last = index == len(items) - 1
        connector = "└─" if is_last else "├─"

        # Print the current item with appropriate formatting
        print(f"{prefix}{connector}{item}")

        # If the item is a directory, recursively print its contents
        if os.path.isdir(path):
            extension = "    " if is_last else "│   "
            print_directory_structure(path, prefix + extension)

# Function to extract numeric value after 'mikrosdk_v'.
def extract_version_number(uid):
    match = re.search(r'_v(\d+)', uid)
    return int(match.group(1)) if match else 0

# Extracts the SDK version from the manifest.json file.
def get_sdk_version():
    # Construct the path to the manifest.json file
    manifest_path = os.path.join(
        local_app_data_path,
        'packages',
        'sdk',
        'mikroSDK_v2',
        'src',
        'manifest.json'
    )

    # Read and parse the manifest.json file
    with open(manifest_path, 'r') as f:
        manifest = json.load(f)

    # Get the SDK version from the manifest
    sdk_version = manifest.get('sdk-version')
    if not sdk_version:
        raise ValueError("The 'sdk-version' key was not found in manifest.json")

    # Remove dots from the version number and format it
    version_number = sdk_version.replace('.', '')
    latest_sdk = f"mikrosdk_v{version_number}"

    return latest_sdk

# Runs the bash command.
def run_cmd(cmd):
    global build_failed
    # Blue color for build tool command.
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
                print(f"\033[92m{line}\033[0m")
            elif "Build failed" in line:
                # Red color for failure.
                print(f"\033[91m{line}\033[0m")
                build_failed = True

    # Error handling for failed builds not to fail the job.
    except subprocess.CalledProcessError as e:
        for line in e.output.splitlines():
            if line.startswith("Building:"):
                # White color for the current setup build.
                print(line)
            elif "Build success!" in line:
                # Green color for success.
                print(f"\033[92m{line}\033[0m")
            elif "Build failed" in line:
                # Red color for failure.
                print(f"\033[91m{line}\033[0m")
                build_failed = True

# Runs recursive builds.
def run_builds(mcu_dependencies, current_package, doc_ds):
    sdk = get_sdk_version()
    compilers = ['gcc_arm_none_eabi', 'clang-llvm']
    # Run build for all MCUs from package.
    print(f"\033[93mRunning build for {len(mcu_dependencies[current_package][doc_ds])} MCUs in {current_package}\033[0m")
    for mcu in mcu_dependencies[current_package][doc_ds]:
        for compiler in compilers:
            print(f"\033[93mRunning build for {mcu} MCU with {compiler}\033[0m")
            cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation --isBareMetal "0" --compiler "{compiler}" --sdk "{sdk}" --board "GENERIC_ARM_BOARD" --mcu "{mcu}" --installPrefix "{testPath}/mcu_build/{compiler}"'
            run_cmd(cmd)

def load_build_json():
    """
    Navigates one directory up from the current script's location and loads the build.json file.

    Returns:
        dict: A dictionary containing package names as keys and doc_ds numbers as values.
    """
    try:
        # Get the absolute path of the current script
        current_script_path = os.path.abspath(__file__)
        current_dir = os.path.dirname(current_script_path)

        # Navigate one directory up
        parent_dir = os.path.abspath(os.path.join(current_dir, os.pardir))

        # Path to build.json
        build_json_path = os.path.join(parent_dir, 'build.json')

        # Check if build.json exists
        if not os.path.isfile(build_json_path):
            print(Fore.RED + f"Error: build.json not found in {parent_dir}")
            sys.exit(1)

        # Open and load the JSON file
        with open(build_json_path, 'r', encoding='utf-8') as file:
            try:
                data = json.load(file)
            except json.JSONDecodeError as jde:
                print(Fore.RED + f"Error decoding JSON: {jde}")
                sys.exit(1)

        # Validate that the JSON is a dictionary
        if not isinstance(data, dict):
            print(Fore.RED + "Error: build.json does not contain a JSON object (expected key-value pairs).")
            sys.exit(1)

        return data

    except Exception as e:
        print(Fore.RED + f"An unexpected error occurred: {e}")
        sys.exit(1)

def find_doc_ds_folder(doc_ds, implementations_dir):
    """
    Searches for a folder named after the doc_ds variable within the implementations directory.

    Args:
        doc_ds (str): The doc_ds number to search for.
        implementations_dir (str): The path to the implementations directory.

    Returns:
        str or None: The path to the doc_ds folder if found, else None.
    """
    target_folder = os.path.join(implementations_dir, doc_ds)
    if os.path.isdir(target_folder):
        return target_folder
    else:
        return None

def extract_mcu_list(cmake_file_path):
    """
    Extracts MCU names from the specified CMakeLists.cmake file.

    Args:
        cmake_file_path (str): Path to the CMakeLists.cmake file.

    Returns:
        list: A list of MCU names without ^ and $.
    """
    mcu_list = []
    pattern = r'if\s*\(\s*\$\{MCU_NAME\}\s+MATCHES\s+"([^"]+)"\s*\)'

    try:
        with open(cmake_file_path, 'r', encoding='utf-8') as cmake_file:
            for line in cmake_file:
                match = re.search(pattern, line)
                if match:
                    mcu_pattern = match.group(1)
                    # Extract all MCUs enclosed between ^ and $
                    mcu_matches = re.findall(r'\^([^$|]+)\$', mcu_pattern)
                    mcu_list.extend(mcu_matches)
                    # Assuming only one relevant line; remove break if multiple lines are possible
                    break
    except FileNotFoundError:
        print(Fore.RED + f"Error: {cmake_file_path} not found.")
    except Exception as e:
        print(Fore.RED + f"An error occurred while reading {cmake_file_path}: {e}")

    return mcu_list

def validate_and_rearrange_pkg(pkg):
    """
    Validates the mcu_package string and rearranges it if valid.

    Args:
        pkg (str): The mcu_package string to validate and rearrange.

    Returns:
        tuple: (rearranged_pkg, error_message)
               rearranged_pkg (str or None): The rearranged package string if valid, else None.
               error_message (str or None): The error message if invalid, else None.
    """
    # Check if pkg ends with a number
    match = re.match(r'^(\w+?)(\d+)$', pkg)
    if match:
        name_part = match.group(1)
        number_part = match.group(2)
        # Check if there is only one word (no spaces or special characters)
        if re.match(r'^\w+$', pkg):
            rearranged_pkg = f"{number_part}/{name_part}"
            return rearranged_pkg, None
        else:
            return None, "Package name contains multiple words or invalid characters."
    else:
        return None, "Package name does not end with a number."

def find_mcu_packages(mcu_name, mcu_definitions_dir, error_log, package, doc_ds):
    """
    Searches for the MCU folder and retrieves its package folders. Validates and rearranges package names.

    Args:
        mcu_name (str): The name of the MCU to search for.
        mcu_definitions_dir (str): The path to the STM32 MCU definitions directory.
        error_log (file object): The file object for logging errors.
        package (str): The package name being processed.
        doc_ds (str): The doc_ds number being processed.

    Returns:
        list: A list of validated and rearranged mcu_packages if found, else None.
    """
    target_mcu_dir = os.path.join(mcu_definitions_dir, mcu_name)
    if not os.path.isdir(target_mcu_dir):
        error_message = f"{package}, {doc_ds}: {mcu_name}, N/A - MCU folder '{mcu_name}' not found."
        print(Fore.RED + f"Error: MCU folder '{mcu_name}' not found in {mcu_definitions_dir}")
        error_log.write(error_message + "\n")
        return None

    try:
        # List all subdirectories (mcu_packages) within the MCU folder
        raw_mcu_packages = [item for item in os.listdir(target_mcu_dir)
                            if os.path.isdir(os.path.join(target_mcu_dir, item))]
        validated_mcu_packages = []
        for pkg in raw_mcu_packages:
            # Validate and rearrange pkg
            rearranged_pkg, error = validate_and_rearrange_pkg(pkg)
            if rearranged_pkg:
                validated_mcu_packages.append(rearranged_pkg)
            else:
                # Log error and append "ERROR"
                error_message = f"{package}, {doc_ds}: {mcu_name}, {pkg} - {error}"
                print(Fore.RED + f"Error: {error}")
                error_log.write(error_message + "\n")
                validated_mcu_packages.append("ERROR")
        return validated_mcu_packages
    except Exception as e:
        error_message = f"{package}, {doc_ds}: {mcu_name}, N/A - Error accessing '{target_mcu_dir}': {e}"
        print(Fore.RED + f"An error occurred while accessing '{target_mcu_dir}': {e}")
        error_log.write(error_message + "\n")
        return None

def connect_database(db_path):
    """
    Connects to the SQLite database.

    Args:
        db_path (str): Path to the SQLite database file.

    Returns:
        sqlite3.Connection: SQLite connection object.
    """
    try:
        conn = sqlite3.connect(db_path)
        return conn
    except sqlite3.Error as e:
        print(Fore.RED + f"Error connecting to database: {e}")
        sys.exit(1)

def check_mcu_exists(conn, mcu_name):
    """
    Checks if the MCU already exists in the Devices table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name to check.

    Returns:
        bool: True if exists, False otherwise.
    """
    try:
        cursor = conn.cursor()
        cursor.execute("SELECT COUNT(*) FROM Devices WHERE name = ?", (mcu_name,))
        count = cursor.fetchone()[0]
        return count > 0
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while checking MCU existence: {e}")
        return False

def insert_device(conn, mcu_name, installer_packages):
    """
    Inserts a new MCU into the Devices table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name.
        installer_packages (dict): Dictionary mapping compilers to packages.

    Returns:
        bool: True if inserted successfully, False otherwise.
    """
    try:
        cursor = conn.cursor()
        sdk_config = {
            "MCU_NAME": mcu_name,
            "CORE_NAME": "M0",
            "_MSDK_HAL_LOW_LEVEL_TARGET_": "mikroe",
            "_MSDK_ETH_PHY_CHIP_": "NULL",
            "AI_GENERATED_SDK": "True"
        }
        sdk_config_json = json.dumps(sdk_config)

        installer_package_json = json.dumps(installer_packages)

        cursor.execute("""
            INSERT INTO Devices (
                def_file,
                family_uid,
                flash,
                icon,
                max_speed,
                name,
                ram,
                sdk_config,
                necto_config,
                uid,
                vendor,
                tft_socket,
                sdk_support,
                installer_package
            ) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)
        """, (
            f"{mcu_name}.json",        # def_file
            "STM32",                   # family_uid
            1024,                      # flash
            "images/mcu/stm32.png",    # icon
            64.000,                    # max_speed
            mcu_name,                  # name
            327680,                    # ram
            sdk_config_json,           # sdk_config
            None,                      # necto_config
            mcu_name,                  # uid
            "STMicroelectronics",      # vendor
            1,                         # tft_socket
            1,                         # sdk_support
            installer_package_json     # installer_package
        ))
        conn.commit()
        return True
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while inserting device '{mcu_name}': {e}")
        return False

def insert_board_to_device(conn, mcu_name):
    """
    Inserts a record into the BoardToDevice table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name.

    Returns:
        bool: True if inserted successfully, False otherwise.
    """
    try:
        cursor = conn.cursor()
        cursor.execute("""
            INSERT INTO BoardToDevice (board_uid, device_uid) VALUES (?, ?)
        """, ("GENERIC_ARM_BOARD", mcu_name))
        conn.commit()
        return True
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while inserting into BoardToDevice for '{mcu_name}': {e}")
        return False

def insert_sdk_to_device(conn, mcu_name):
    """
    Inserts a record into the SDKToDevice table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name.

    Returns:
        bool: True if inserted successfully, False otherwise.
    """
    try:
        cursor = conn.cursor()
        cursor.execute("""
            INSERT INTO SDKToDevice (sdk_uid, device_uid) VALUES (?, ?)
        """, ("mikrosdk_v2113", mcu_name))
        conn.commit()
        return True
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while inserting into SDKToDevice for '{mcu_name}': {e}")
        return False

def insert_compiler_to_device(conn, mcu_name):
    """
    Inserts records into the CompilerToDevice table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name.

    Returns:
        bool: True if both inserts are successful, False otherwise.
    """
    try:
        cursor = conn.cursor()
        compilers = ["gcc_arm_none_eabi", "clang-llvm"]
        for compiler in compilers:
            cursor.execute("""
                INSERT INTO CompilerToDevice (device_uid, compiler_uid) VALUES (?, ?)
            """, (mcu_name, compiler))
        conn.commit()
        return True
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while inserting into CompilerToDevice for '{mcu_name}': {e}")
        return False

def insert_programmer_to_device(conn, mcu_name):
    """
    Inserts a record into the ProgrammerToDevice table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name.

    Returns:
        bool: True if inserted successfully, False otherwise.
    """
    try:
        cursor = conn.cursor()
        cursor.execute("""
            INSERT INTO ProgrammerToDevice (programer_uid, device_uid) VALUES (?, ?)
        """, ("codegrip", mcu_name))
        conn.commit()
        return True
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while inserting into ProgrammerToDevice for '{mcu_name}': {e}")
        return False

def insert_device_to_package(conn, mcu_name, pkg):
    """
    Inserts a record into the DeviceToPackage table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name.
        pkg (str): The package UID.

    Returns:
        bool: True if inserted successfully, False otherwise.
    """
    try:
        cursor = conn.cursor()
        cursor.execute("""
            INSERT INTO DeviceToPackage (device_uid, package_uid) VALUES (?, ?)
        """, (mcu_name, pkg))
        conn.commit()
        return True
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while inserting into DeviceToPackage for '{mcu_name}' and package '{pkg}': {e}")
        return False

def process_database_operations(conn, mcu_dependencies, error_log):
    """
    Processes the database operations based on mcu_dependencies.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_dependencies (dict): The MCU dependencies dictionary.
        error_log (file object): The file object for logging errors.
    """
    for doc_ds, mcus in mcu_dependencies.items():
        for mcu_name, packages in mcus.items():
            # Skip if mcu_name is already in Devices
            if check_mcu_exists(conn, mcu_name):
                error_message = f"{doc_ds}: {mcu_name} - MCU already exists in Devices."
                print(Fore.RED + f"Error: MCU '{mcu_name}' already exists in Devices.")
                error_log.write(error_message + "\n")
                continue

            # Prepare installer_package dictionary
            # Map each compiler to list of packages (excluding "ERROR")
            valid_packages = [pkg.split('/', 1)[1] for pkg in packages if pkg != "ERROR"]
            if not valid_packages:
                installer_packages = {"clang-llvm": [], "gcc_arm_none_eabi": []}
            else:
                installer_packages = {
                    "clang-llvm": valid_packages,
                    "gcc_arm_none_eabi": valid_packages
                }

            # Insert into Devices
            if not insert_device(conn, mcu_name, installer_packages):
                error_message = f"{doc_ds}: {mcu_name} - Failed to insert into Devices."
                error_log.write(error_message + "\n")
                continue

            # Insert into BoardToDevice
            if not insert_board_to_device(conn, mcu_name):
                error_message = f"{doc_ds}: {mcu_name} - Failed to insert into BoardToDevice."
                error_log.write(error_message + "\n")

            # Insert into SDKToDevice
            if not insert_sdk_to_device(conn, mcu_name):
                error_message = f"{doc_ds}: {mcu_name} - Failed to insert into SDKToDevice."
                error_log.write(error_message + "\n")

            # Insert into CompilerToDevice
            if not insert_compiler_to_device(conn, mcu_name):
                error_message = f"{doc_ds}: {mcu_name} - Failed to insert into CompilerToDevice."
                error_log.write(error_message + "\n")

            # Insert into ProgrammerToDevice
            if not insert_programmer_to_device(conn, mcu_name):
                error_message = f"{doc_ds}: {mcu_name} - Failed to insert into ProgrammerToDevice."
                error_log.write(error_message + "\n")

            # Insert into DeviceToPackage for each valid package
            for pkg in packages:
                if pkg == "ERROR":
                    continue  # Skip invalid packages
                if not insert_device_to_package(conn, mcu_name, pkg):
                    error_message = f"{doc_ds}: {mcu_name}, {pkg} - Failed to insert into DeviceToPackage."
                    error_log.write(error_message + "\n")

def copy_sdk_files(dependencies, script_repo_dir, mcu_dependencies, error_log):
    """
    Creates SDK package folders and copies required files from the script repository to the target directory.

    Args:
        dependencies (dict): Dictionary containing package names and their corresponding doc_ds numbers.
        script_repo_dir (str): Path to the script repository directory.
        mcu_dependencies (dict): Dictionary containing MCU dependencies.
        error_log (file object): File object for logging errors.
    """
    target_sdk_base_dir = os.path.join(local_app_data_path, 'packages', 'sdk', 'mikroSDK_v2', 'src', 'targets', 'arm', 'mikroe')

    for package, doc_ds in dependencies.items():
        print(Fore.CYAN + f"Processing SDK files for Package: '{package}', doc_ds: '{doc_ds}'")

        # 1. Handle mcu_definitions
        src_mcu_def_dir = os.path.join(script_repo_dir, 'sdk', 'targets', 'arm', 'mikroe', 'common', 'include', 'mcu_definitions', 'ai_generated', 'STM32')
        target_mcu_def_dir = os.path.join(target_sdk_base_dir, 'common', 'include', 'mcu_definitions', 'ai_generated', 'STM32')

        print(Fore.BLUE + f"  Clearing target MCU definitions directory: '{target_mcu_def_dir}'")
        try:
            if os.path.exists(target_mcu_def_dir):
                shutil.rmtree(target_mcu_def_dir)
                # print(Fore.GREEN + f"    Cleared existing directory: '{target_mcu_def_dir}'")
            os.makedirs(target_mcu_def_dir, exist_ok=True)
            # print(Fore.GREEN + f"    Created directory: '{target_mcu_def_dir}'")
        except Exception as e:
            error_message = f"Failed to clear/create MCU definitions directory '{target_mcu_def_dir}': {e}"
            print(Fore.RED + f"Error: {error_message}")
            error_log.write(error_message + "\n")
            continue  # Skip to the next package

        # Find and copy mcu_definitions for each MCU in the current package
        for mcu_name in mcu_dependencies.get(package, {}).get(doc_ds, {}):
            src_mcu_def = os.path.join(src_mcu_def_dir, mcu_name)
            target_mcu_def = os.path.join(target_mcu_def_dir, mcu_name)
            if not os.path.isdir(src_mcu_def):
                error_message = f"MCU definitions folder for MCU '{mcu_name}' not found at '{src_mcu_def}'."
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")
                continue  # Skip to the next MCU

            try:
                shutil.copytree(src_mcu_def, target_mcu_def, dirs_exist_ok=True)
                # print(Fore.GREEN + f"    Copied MCU definitions for '{mcu_name}' from '{src_mcu_def}' to '{target_mcu_def}'")
            except Exception as e:
                error_message = f"Failed to copy MCU definitions for '{mcu_name}' from '{src_mcu_def}' to '{target_mcu_def}': {e}"
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")

        # 2. Handle mcu_reg_addresses
        src_mcu_reg_dir = os.path.join(script_repo_dir, 'sdk', 'targets', 'arm', 'mikroe', 'common', 'include', 'mcu_reg_addresses', 'ai_generated', 'STM32')
        target_mcu_reg_dir = os.path.join(target_sdk_base_dir, 'common', 'include', 'mcu_reg_addresses', 'ai_generated', 'STM32')

        print(Fore.BLUE + f"  Clearing target MCU register addresses directory: '{target_mcu_reg_dir}'")
        try:
            if os.path.exists(target_mcu_reg_dir):
                shutil.rmtree(target_mcu_reg_dir)
                # print(Fore.GREEN + f"    Cleared existing directory: '{target_mcu_reg_dir}'")
            os.makedirs(target_mcu_reg_dir, exist_ok=True)
            # print(Fore.GREEN + f"    Created directory: '{target_mcu_reg_dir}'")
        except Exception as e:
            error_message = f"Failed to clear/create MCU register addresses directory '{target_mcu_reg_dir}': {e}"
            print(Fore.RED + f"Error: {error_message}")
            error_log.write(error_message + "\n")
            continue  # Skip to the next package

        # Find and copy mcu_reg_addresses for each MCU in the current package
        for mcu_name in mcu_dependencies.get(package, {}).get(doc_ds, {}):
            src_mcu_reg = os.path.join(src_mcu_reg_dir, mcu_name)
            target_mcu_reg = os.path.join(target_mcu_reg_dir, mcu_name)
            if not os.path.isdir(src_mcu_reg):
                error_message = f"MCU register addresses folder for MCU '{mcu_name}' not found at '{src_mcu_reg}'."
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")
                continue  # Skip to the next MCU

            try:
                shutil.copytree(src_mcu_reg, target_mcu_reg, dirs_exist_ok=True)
                # print(Fore.GREEN + f"    Copied MCU register addresses for '{mcu_name}' from '{src_mcu_reg}' to '{target_mcu_reg}'")
            except Exception as e:
                error_message = f"Failed to copy MCU register addresses for '{mcu_name}' from '{src_mcu_reg}' to '{target_mcu_reg}': {e}"
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")

        # 3. Handle module implementations in stm32/src
        src_stm32_src_dir = os.path.join(script_repo_dir, 'sdk', 'targets', 'arm', 'mikroe', 'ai_generated', 'stm32', 'src')
        target_stm32_src_dir = os.path.join(target_sdk_base_dir, 'ai_generated', 'stm32', 'src')

        print(Fore.BLUE + f"  Processing module implementations in 'ai_generated/stm32/src'...")
        if not os.path.isdir(src_stm32_src_dir):
            error_message = f"Source stm32/src directory not found at '{src_stm32_src_dir}'."
            print(Fore.RED + f"Error: {error_message}")
            error_log.write(error_message + "\n")
        else:
            try:
                module_implementations = [d for d in os.listdir(src_stm32_src_dir) if os.path.isdir(os.path.join(src_stm32_src_dir, d))]
                # print(Fore.GREEN + f"    Found module implementations: {module_implementations}")
            except Exception as e:
                error_message = f"Failed to list module implementations in '{src_stm32_src_dir}': {e}"
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")
                module_implementations = []

            for module in module_implementations:
                print(Fore.CYAN + f"    Processing module implementation: '{module}'")
                src_module_impl = os.path.join(src_stm32_src_dir, module, 'implementations', doc_ds)
                target_module_impl = os.path.join(target_stm32_src_dir, module, 'implementations',  doc_ds)

                print(Fore.BLUE + f"      Clearing target implementations directory: '{target_module_impl}'")
                try:
                    if os.path.exists(target_module_impl):
                        shutil.rmtree(target_module_impl)
                        # print(Fore.GREEN + f"        Cleared existing directory: '{target_module_impl}'")
                    os.makedirs(target_module_impl, exist_ok=True)
                    # print(Fore.GREEN + f"        Created directory: '{target_module_impl}'")
                except Exception as e:
                    error_message = f"Failed to clear/create implementations directory '{target_module_impl}': {e}"
                    print(Fore.RED + f"Error: {error_message}")
                    error_log.write(error_message + "\n")
                    continue  # Skip to the next module

                # Copy doc_ds_number folder
                if not os.path.isdir(src_module_impl):
                    error_message = f"Source implementations folder for doc_ds '{doc_ds}' not found at '{src_module_impl}'."
                    print(Fore.RED + f"Error: {error_message}")
                    error_log.write(error_message + "\n")
                    continue  # Skip copying this module's implementations
                else:
                    try:
                        shutil.copytree(src_module_impl, target_module_impl, dirs_exist_ok=True)
                        # print(Fore.GREEN + f"        Copied implementations from '{src_module_impl}' to '{target_module_impl}'")
                    except Exception as e:
                        error_message = f"Failed to copy implementations from '{src_module_impl}' to '{target_module_impl}': {e}"
                        print(Fore.RED + f"Error: {error_message}")
                        error_log.write(error_message + "\n")

        # 4. Handle module implementations in stm32/include
        src_stm32_include_dir = os.path.join(script_repo_dir, 'sdk', 'targets', 'arm', 'mikroe', 'ai_generated', 'stm32', 'include')
        target_stm32_include_dir = os.path.join(target_sdk_base_dir, 'ai_generated', 'stm32', 'include')

        print(Fore.BLUE + f"  Processing module implementations in 'ai_generated/stm32/include'...")
        if not os.path.isdir(src_stm32_include_dir):
            error_message = f"Source stm32/include directory not found at '{src_stm32_include_dir}'."
            print(Fore.RED + f"Error: {error_message}")
            error_log.write(error_message + "\n")
        else:
            try:
                module_implementations_include = [d for d in os.listdir(src_stm32_include_dir) if os.path.isdir(os.path.join(src_stm32_include_dir, d))]
                # print(Fore.GREEN + f"    Found module implementations: {module_implementations_include}")
            except Exception as e:
                error_message = f"Failed to list module implementations in '{src_stm32_include_dir}': {e}"
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")
                module_implementations_include = []

            for module in module_implementations_include:
                print(Fore.CYAN + f"    Processing module implementation: '{module}'")
                if module.lower() == 'rcc' or module.lower() == 'gpio':
                    src_module_include = os.path.join(src_stm32_include_dir, module, 'implementations', doc_ds)
                    target_module_include = os.path.join(target_stm32_include_dir, module, 'implementations')
                else:
                    # One folder deep regardless of name
                    src_module_include = os.path.join(src_stm32_include_dir, module, f'hal_ll_{module}_pin_map', 'implementations', doc_ds)
                    target_module_include = os.path.join(target_stm32_include_dir, module, f'hal_ll_{module}_pin_map', 'implementations')

                print(Fore.BLUE + f"      Clearing target implementations directory: '{target_module_include}'")
                try:
                    if os.path.exists(target_module_include):
                        shutil.rmtree(target_module_include)
                        # print(Fore.GREEN + f"        Cleared existing directory: '{target_module_include}'")
                    os.makedirs(target_module_include, exist_ok=True)
                    # print(Fore.GREEN + f"        Created directory: '{target_module_include}'")
                except Exception as e:
                    error_message = f"Failed to clear/create implementations directory '{target_module_include}': {e}"
                    print(Fore.RED + f"Error: {error_message}")
                    error_log.write(error_message + "\n")
                    continue  # Skip to the next module

                target_module_include = os.path.join(target_module_include, doc_ds)

                # Copy implementations
                if not os.path.isdir(src_module_include):
                    error_message = f"Source implementations folder not found at '{src_module_include}'."
                    print(Fore.RED + f"Error: {error_message}")
                    error_log.write(error_message + "\n")
                    continue  # Skip copying this module's implementations
                else:
                    try:
                        shutil.copytree(src_module_include, target_module_include, dirs_exist_ok=True)
                        # print(Fore.GREEN + f"        Copied implementations from '{src_module_include}' to '{target_module_include}'")
                    except Exception as e:
                        error_message = f"Failed to copy implementations from '{src_module_include}' to '{target_module_include}': {e}"
                        print(Fore.RED + f"Error: {error_message}")
                        error_log.write(error_message + "\n")

        core_folder = os.path.join(local_app_data_path, "packages", "sdk", "mikroSDK_v2", "src", "targets", "arm", "mikroe", "core")
        print_directory_structure(core_folder)
        # Run recursive build for the package
        run_builds(mcu_dependencies, package, doc_ds)

def copy_core_files(dependencies, parent_dir, mcu_dependencies, error_log):
    """
    Creates package folders and copies required files based on dependencies.

    Args:
        dependencies (dict): Dictionary containing package names as keys and doc_ds numbers as values.
        parent_dir (str): The parent directory path.
        mcu_dependencies (dict): The MCU dependencies dictionary.
        error_log (file object): The file object for logging errors.
    """
    for package, doc_ds in dependencies.items():
        print(Fore.CYAN + f"Creating package folder for '{package}'...")
        package_folder = os.path.join(local_app_data_path, 'packages', 'core', 'ARM', 'gcc_clang', package)
        try:
            os.makedirs(package_folder, exist_ok=True)
            # print(Fore.GREEN + f"Successfully created/verified package folder: {package_folder}")
        except Exception as e:
            error_message = f"Package '{package}': Failed to create package folder '{package_folder}': {e}"
            print(Fore.RED + f"Error: {error_message}")
            error_log.write(error_message + "\n")
            continue  # Skip to the next package

        # Step 1: Copy doc_ds_num.cmake from ../core/cmake/stm
        src_cmake_stm = os.path.join(parent_dir, 'core', 'cmake', 'stm', f"{doc_ds}.cmake")
        dest_cmake_stm = os.path.join(package_folder, 'cmake', 'stm')
        try:
            os.makedirs(dest_cmake_stm, exist_ok=True)
            shutil.copy(src_cmake_stm, dest_cmake_stm)
            # print(Fore.GREEN + f"Copied '{src_cmake_stm}' to '{dest_cmake_stm}'")
        except FileNotFoundError:
            error_message = f"Package '{package}': Source file '{src_cmake_stm}' not found."
            print(Fore.RED + f"Error: {error_message}")
            error_log.write(error_message + "\n")
        except Exception as e:
            error_message = f"Package '{package}': Failed to copy '{src_cmake_stm}' to '{dest_cmake_stm}': {e}"
            print(Fore.RED + f"Error: {error_message}")
            error_log.write(error_message + "\n")

        # Step 2: Copy doc_ds_num.cmake from ../core/cmake/stm/delays
        src_cmake_delays = os.path.join(parent_dir, 'core', 'cmake', 'stm', 'delays', f"{doc_ds}.cmake")
        dest_cmake_delays = os.path.join(package_folder, 'cmake', 'stm', 'delays')
        try:
            os.makedirs(dest_cmake_delays, exist_ok=True)
            shutil.copy(src_cmake_delays, dest_cmake_delays)
            # print(Fore.GREEN + f"Copied '{src_cmake_delays}' to '{dest_cmake_delays}'")
        except FileNotFoundError:
            error_message = f"Package '{package}': Source file '{src_cmake_delays}' not found."
            print(Fore.RED + f"Error: {error_message}")
            error_log.write(error_message + "\n")
        except Exception as e:
            error_message = f"Package '{package}': Failed to copy '{src_cmake_delays}' to '{dest_cmake_delays}': {e}"
            print(Fore.RED + f"Error: {error_message}")
            error_log.write(error_message + "\n")

        # Step 3: Copy MCU-specific files
        for mcu_name in mcu_dependencies.get(package, {}).get(doc_ds, []):
            if mcu_name == "ERROR":
                print(Fore.YELLOW + f"Skipping MCU '{mcu_name}' due to previous errors.")
                continue

            mcu_name_lower = mcu_name.lower()
            print(Fore.CYAN + f"Processing MCU '{mcu_name}'...")

            # a. Copy mcu_name.json from ../core/def
            src_json = os.path.join(parent_dir, 'core', 'def', f"{mcu_name}.json")
            dest_def = os.path.join(package_folder, 'def')
            try:
                os.makedirs(dest_def, exist_ok=True)
                shutil.copy(src_json, dest_def)
                # print(Fore.GREEN + f"Copied '{src_json}' to '{dest_def}'")
            except FileNotFoundError:
                error_message = f"MCU '{mcu_name}': Source file '{src_json}' not found."
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")
            except Exception as e:
                error_message = f"MCU '{mcu_name}': Failed to copy '{src_json}' to '{dest_def}': {e}"
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")

            # b. Copy mcu_name folder from ../core/def/stm
            src_def_stm = os.path.join(parent_dir, 'core', 'def', 'stm', mcu_name)
            dest_def_stm = os.path.join(package_folder, 'def', 'stm', mcu_name)
            try:
                shutil.copytree(src_def_stm, dest_def_stm, dirs_exist_ok=True)
                # print(Fore.GREEN + f"Copied folder '{src_def_stm}' to '{dest_def_stm}'")
            except FileNotFoundError:
                error_message = f"MCU '{mcu_name}': Source folder '{src_def_stm}' not found."
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")
            except Exception as e:
                error_message = f"MCU '{mcu_name}': Failed to copy folder '{src_def_stm}' to '{dest_def_stm}': {e}"
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")

            # c. Copy mcu_name_lower folder from ../core/interrupts/include/interrupts_mcu
            src_interrupts = os.path.join(parent_dir, 'core', 'interrupts', 'include', 'interrupts_mcu', mcu_name_lower)
            dest_interrupts = os.path.join(package_folder, 'interrupts', 'include', 'interrupts_mcu', mcu_name_lower)
            try:
                shutil.copytree(src_interrupts, dest_interrupts, dirs_exist_ok=True)
                # print(Fore.GREEN + f"Copied folder '{src_interrupts}' to '{dest_interrupts}'")
            except FileNotFoundError:
                error_message = f"MCU '{mcu_name}': Source folder '{src_interrupts}' not found."
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")
            except Exception as e:
                error_message = f"MCU '{mcu_name}': Failed to copy folder '{src_interrupts}' to '{dest_interrupts}': {e}"
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")

            # d. Copy mcu_name_lower.ld from ../core/linker_scripts/stm
            src_ld = os.path.join(parent_dir, 'core', 'linker_scripts', 'stm', f"{mcu_name_lower}.ld")
            dest_ld = os.path.join(package_folder, 'linker_scripts', 'stm')
            try:
                os.makedirs(dest_ld, exist_ok=True)
                shutil.copy(src_ld, dest_ld)
                # print(Fore.GREEN + f"Copied '{src_ld}' to '{dest_ld}'")
            except FileNotFoundError:
                error_message = f"MCU '{mcu_name}': Source file '{src_ld}' not found."
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")
            except Exception as e:
                error_message = f"MCU '{mcu_name}': Failed to copy '{src_ld}' to '{dest_ld}': {e}"
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")

            # e. Copy mcu_name_lower.s from ../core/startup/stm
            src_s = os.path.join(parent_dir, 'core', 'startup', 'stm', f"{mcu_name_lower}.s")
            dest_s = os.path.join(package_folder, 'startup', 'stm')
            try:
                os.makedirs(dest_s, exist_ok=True)
                shutil.copy(src_s, dest_s)
                # print(Fore.GREEN + f"Copied '{src_s}' to '{dest_s}'")
            except FileNotFoundError:
                error_message = f"MCU '{mcu_name}': Source file '{src_s}' not found."
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")
            except Exception as e:
                error_message = f"MCU '{mcu_name}': Failed to copy '{src_s}' to '{dest_s}': {e}"
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")

            # f. Copy doc_ds_num folder from ../core/system/src/stm
            src_system = os.path.join(parent_dir, 'core', 'system', 'src', 'stm', doc_ds)
            dest_system = os.path.join(package_folder, 'system', 'src', 'stm', doc_ds)
            try:
                shutil.copytree(src_system, dest_system, dirs_exist_ok=True)
                # print(Fore.GREEN + f"Copied folder '{src_system}' to '{dest_system}'")
            except FileNotFoundError:
                error_message = f"MCU '{mcu_name}': Source folder '{src_system}' not found."
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")
            except Exception as e:
                error_message = f"MCU '{mcu_name}': Failed to copy folder '{src_system}' to '{dest_system}': {e}"
                print(Fore.RED + f"Error: {error_message}")
                error_log.write(error_message + "\n")

        # Step 4: Copy everything from ../common to package_folder/common
        src_common = os.path.join(parent_dir, 'common')
        dest_common = os.path.join(package_folder)
        try:
            shutil.copytree(src_common, dest_common, dirs_exist_ok=True)
            # print(Fore.GREEN + f"Copied folder '{src_common}' to '{dest_common}'")
        except FileNotFoundError:
            error_message = f"Package '{package}': Source folder '{src_common}' not found."
            print(Fore.RED + f"Error: {error_message}")
            error_log.write(error_message + "\n")
        except Exception as e:
            error_message = f"Package '{package}': Failed to copy folder '{src_common}' to '{dest_common}': {e}"
            print(Fore.RED + f"Error: {error_message}")
            error_log.write(error_message + "\n")

        print(Fore.CYAN + f"Completed processing for package '{package}'.\n")

def copy_output_files(testPath, parent_dir, error_log):
    """
    Copies 'mcu_dependencies.json' and 'error.txt' to the specified testPath directory.

    Args:
        testPath (str): Destination directory path.
        parent_dir (str): Source directory path where the files are located.
        error_log (file object): File object for logging errors.
    """
    try:
        # Ensure the destination directory exists
        os.makedirs(testPath, exist_ok=True)
        print(Fore.BLUE + f"  Ensured that destination directory '{testPath}' exists.")

        # Define source file paths
        src_mcu_deps = os.path.join(parent_dir, 'mcu_dependencies.json')
        src_error_txt = os.path.join(parent_dir, 'error.txt')

        # Define destination file paths
        dest_mcu_deps = os.path.join(testPath, 'mcu_dependencies.json')
        dest_error_txt = os.path.join(testPath, 'error.txt')

        # Copy mcu_dependencies.json
        if os.path.isfile(src_mcu_deps):
            shutil.copy2(src_mcu_deps, dest_mcu_deps)
            print(Fore.GREEN + f"  Copied 'mcu_dependencies.json' to '{testPath}'.")
        else:
            error_message = f"'mcu_dependencies.json' not found at '{src_mcu_deps}'."
            print(Fore.RED + f"Error: {error_message}")
            error_log.write(error_message + "\n")

        # Copy error.txt
        if os.path.isfile(src_error_txt):
            shutil.copy2(src_error_txt, dest_error_txt)
            # print(Fore.GREEN + f"  Copied 'error.txt' to '{testPath}'.")
        else:
            error_message = f"'error.txt' not found at '{src_error_txt}'."
            print(Fore.RED + f"Error: {error_message}")
            error_log.write(error_message + "\n")

    except Exception as e:
        error_message = f"Failed to copy files to '{testPath}': {e}"
        print(Fore.RED + f"Error: {error_message}")
        error_log.write(error_message + "\n")

def main():
    global build_failed
    # Load dependencies from build.json
    dependencies = load_build_json()

    # Define the implementations directory relative to the parent directory
    current_script_path = os.path.abspath(__file__)
    current_dir = os.path.dirname(current_script_path)
    parent_dir = os.path.abspath(os.path.join(current_dir, os.pardir))
    implementations_dir = os.path.join(parent_dir, 'sdk', 'targets', 'arm', 'mikroe', 'ai_generated', 'stm32', 'src', 'gpio', 'implementations')

    # Define the MCU definitions directory
    mcu_definitions_dir = os.path.join(parent_dir, 'sdk', 'targets', 'arm', 'mikroe', 'common', 'include', 'mcu_definitions', 'ai_generated', 'STM32')

    # Check if implementations directory exists
    if not os.path.isdir(implementations_dir):
        print(Fore.RED + f"Error: Implementations directory not found at {implementations_dir}")
        sys.exit(1)

    # Check if MCU definitions directory exists
    if not os.path.isdir(mcu_definitions_dir):
        print(Fore.RED + f"Error: MCU definitions directory not found at {mcu_definitions_dir}")
        sys.exit(1)

    # Dictionary to store MCU dependencies with mcu_packages
    # Structure: { package: { doc_ds: { mcu_name: [mcu_packages] } } }
    mcu_dependencies = {}

    # Path to error.txt
    error_txt_path = os.path.join(parent_dir, 'error.txt')

    # Backup existing error.txt if exists
    if os.path.exists(error_txt_path):
        backup_path = os.path.join(parent_dir, 'error_backup.txt')
        try:
            os.rename(error_txt_path, backup_path)
            print(Fore.YELLOW + f"Existing error.txt backed up to {backup_path}")
        except Exception as e:
            print(Fore.RED + f"Error backing up existing error.txt: {e}")
            # Proceed without backup

    # Open error.txt in append mode
    with open(error_txt_path, 'a', encoding='utf-8') as error_log:
        print("Processing dependencies...\n")
        for package, doc_ds in dependencies.items():
            print(f"Processing Package: {package}, doc_ds: {doc_ds}")

            # Initialize the nested dictionary for this package
            mcu_dependencies[package] = {}
            mcu_dependencies[package][doc_ds] = {}

            # Step 1: Search for the doc_ds folder
            doc_ds_folder = find_doc_ds_folder(doc_ds, implementations_dir)
            if not doc_ds_folder:
                error_message = f"{package}, {doc_ds}: N/A, N/A - Folder for doc_ds '{doc_ds}' not found."
                print(Fore.RED + f"Error: Folder for doc_ds '{doc_ds}' not found in {implementations_dir}\n")
                error_log.write(error_message + "\n")
                continue  # Skip to the next dependency

            print(f"Found folder for doc_ds '{doc_ds}': {doc_ds_folder}")

            # Step 2: Locate and parse CMakeLists.cmake
            cmake_file_path = os.path.join(doc_ds_folder, 'CMakeLists.cmake')
            if not os.path.isfile(cmake_file_path):
                error_message = f"{package}, {doc_ds}: N/A, N/A - CMakeLists.cmake not found in {doc_ds_folder}."
                print(Fore.RED + f"Error: CMakeLists.cmake not found in {doc_ds_folder}\n")
                error_log.write(error_message + "\n")
                continue

            # Extract MCU list
            mcu_list = extract_mcu_list(cmake_file_path)
            if not mcu_list:
                error_message = f"{package}, {doc_ds}: N/A, N/A - No MCU names found in {cmake_file_path}."
                print(Fore.RED + f"Error: No MCU names found in {cmake_file_path}\n")
                error_log.write(error_message + "\n")
                continue

            # Process each MCU
            for mcu_name in mcu_list:
                print(f"  Processing MCU: {mcu_name}")

                # Step 3: Find mcu_packages for the MCU
                mcu_packages = find_mcu_packages(mcu_name, mcu_definitions_dir, error_log, package, doc_ds)
                if mcu_packages is None:
                    print()  # Blank line for readability
                    continue  # Skip to the next MCU

                # Store the mcu_packages in the dictionary
                mcu_dependencies[package][doc_ds][mcu_name] = mcu_packages

                # Print the mcu_packages
                print("    MCU Packages:")
                for pkg in mcu_packages:
                    print(f"     - {pkg}")
                print()  # Blank line for readability

    # After processing dependencies, connect to the database and perform operations
    db_path = os.path.join(local_app_data_path, 'databases', 'necto_db.db')
    if not os.path.isfile(db_path):
        print(Fore.RED + f"Error: Database file not found at {db_path}")
        sys.exit(1)

    # Connect to the SQLite database
    conn = connect_database(db_path)

    # Process database operations
    with open(error_txt_path, 'a', encoding='utf-8') as error_log:
        process_database_operations(conn, mcu_dependencies, error_log)

    # Close the database connection
    conn.close()

    # Write the mcu_dependencies to a JSON file
    output_file = os.path.join(parent_dir, 'mcu_dependencies.json')
    try:
        with open(output_file, 'w', encoding='utf-8') as outfile:
            json.dump(mcu_dependencies, outfile, indent=4)
        print(f"MCU dependencies have been written to {output_file}")
    except Exception as e:
        print(Fore.RED + f"Error writing to {output_file}: {e}")

    with open(error_txt_path, 'a', encoding='utf-8') as error_log:
        copy_core_files(dependencies, parent_dir, mcu_dependencies, error_log)

    with open(error_txt_path, 'a', encoding='utf-8') as error_log:
        copy_sdk_files(dependencies, parent_dir, mcu_dependencies, error_log)

    copy_output_files(testPath, parent_dir, error_log)

    if build_failed == True:
        # Red text for failure.
        print("\033[91mRecursive Build Failed!\033[0m")
        # Fail the job as well.
        exit(1)
    else:
        # Green text for success.
        print("\033[92mRecursive Build Success!\033[0m")

def connect_database(db_path):
    """
    Connects to the SQLite database.

    Args:
        db_path (str): Path to the SQLite database file.

    Returns:
        sqlite3.Connection: SQLite connection object.
    """
    try:
        conn = sqlite3.connect(db_path)
        return conn
    except sqlite3.Error as e:
        print(Fore.RED + f"Error connecting to database: {e}")
        sys.exit(1)

def check_mcu_exists(conn, mcu_name):
    """
    Checks if the MCU already exists in the Devices table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name to check.

    Returns:
        bool: True if exists, False otherwise.
    """
    try:
        cursor = conn.cursor()
        cursor.execute("SELECT COUNT(*) FROM Devices WHERE name = ?", (mcu_name,))
        count = cursor.fetchone()[0]
        return count > 0
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while checking MCU existence: {e}")
        return False

def insert_device(conn, mcu_name, installer_packages):
    """
    Inserts a new MCU into the Devices table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name.
        installer_packages (dict): Dictionary mapping compilers to packages.

    Returns:
        bool: True if inserted successfully, False otherwise.
    """
    try:
        cursor = conn.cursor()
        sdk_config = {
            "MCU_NAME": mcu_name,
            "CORE_NAME": "M0",
            "_MSDK_HAL_LOW_LEVEL_TARGET_": "mikroe",
            "_MSDK_ETH_PHY_CHIP_": "NULL",
            "AI_GENERATED_SDK": "True"
        }
        sdk_config_json = json.dumps(sdk_config)

        installer_package_json = json.dumps(installer_packages)

        cursor.execute("""
            INSERT INTO Devices (
                def_file,
                family_uid,
                flash,
                icon,
                max_speed,
                name,
                ram,
                sdk_config,
                necto_config,
                uid,
                vendor,
                tft_socket,
                sdk_support,
                installer_package
            ) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)
        """, (
            f"{mcu_name}.json",        # def_file
            "STM32",                   # family_uid
            1024,                      # flash
            "images/mcu/stm32.png",    # icon
            64.000,                    # max_speed
            mcu_name,                  # name
            327680,                    # ram
            sdk_config_json,           # sdk_config
            None,                      # necto_config
            mcu_name,                  # uid
            "STMicroelectronics",      # vendor
            1,                         # tft_socket
            1,                         # sdk_support
            installer_package_json     # installer_package
        ))
        conn.commit()
        return True
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while inserting device '{mcu_name}': {e}")
        return False

def insert_board_to_device(conn, mcu_name):
    """
    Inserts a record into the BoardToDevice table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name.

    Returns:
        bool: True if inserted successfully, False otherwise.
    """
    try:
        cursor = conn.cursor()
        cursor.execute("""
            INSERT INTO BoardToDevice (board_uid, device_uid) VALUES (?, ?)
        """, ("GENERIC_ARM_BOARD", mcu_name))
        conn.commit()
        return True
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while inserting into BoardToDevice for '{mcu_name}': {e}")
        return False

def insert_sdk_to_device(conn, mcu_name):
    """
    Inserts a record into the SDKToDevice table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name.

    Returns:
        bool: True if inserted successfully, False otherwise.
    """
    try:
        cursor = conn.cursor()
        cursor.execute("""
            INSERT INTO SDKToDevice (sdk_uid, device_uid) VALUES (?, ?)
        """, ("mikrosdk_v2112", mcu_name))
        conn.commit()
        return True
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while inserting into SDKToDevice for '{mcu_name}': {e}")
        return False

def insert_compiler_to_device(conn, mcu_name):
    """
    Inserts records into the CompilerToDevice table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name.

    Returns:
        bool: True if both inserts are successful, False otherwise.
    """
    try:
        cursor = conn.cursor()
        compilers = ["gcc_arm_none_eabi", "clang-llvm"]
        for compiler in compilers:
            cursor.execute("""
                INSERT INTO CompilerToDevice (device_uid, compiler_uid) VALUES (?, ?)
            """, (mcu_name, compiler))
        conn.commit()
        return True
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while inserting into CompilerToDevice for '{mcu_name}': {e}")
        return False

def insert_programmer_to_device(conn, mcu_name):
    """
    Inserts a record into the ProgrammerToDevice table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name.

    Returns:
        bool: True if inserted successfully, False otherwise.
    """
    try:
        cursor = conn.cursor()
        cursor.execute("""
            INSERT INTO ProgrammerToDevice (programer_uid, device_uid) VALUES (?, ?)
        """, ("codegrip", mcu_name))
        conn.commit()
        return True
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while inserting into ProgrammerToDevice for '{mcu_name}': {e}")
        return False

def insert_device_to_package(conn, mcu_name, pkg):
    """
    Inserts a record into the DeviceToPackage table.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_name (str): The MCU name.
        pkg (str): The package UID.

    Returns:
        bool: True if inserted successfully, False otherwise.
    """
    try:
        cursor = conn.cursor()
        cursor.execute("""
            INSERT INTO DeviceToPackage (device_uid, package_uid) VALUES (?, ?)
        """, (mcu_name, pkg))
        conn.commit()
        return True
    except sqlite3.Error as e:
        print(Fore.RED + f"Database error while inserting into DeviceToPackage for '{mcu_name}' and package '{pkg}': {e}")
        return False

def process_database_operations(conn, mcu_dependencies, error_log):
    """
    Processes the database operations based on mcu_dependencies.

    Args:
        conn (sqlite3.Connection): SQLite connection object.
        mcu_dependencies (dict): The MCU dependencies dictionary.
        error_log (file object): The file object for logging errors.
    """
    for package, doc_ds_dict in mcu_dependencies.items():
        for doc_ds, mcus in doc_ds_dict.items():
            for mcu_name, packages in mcus.items():
                # Skip if mcu_name is already in Devices
                if check_mcu_exists(conn, mcu_name):
                    error_message = f"{package}, {doc_ds}: {mcu_name} - MCU already exists in Devices."
                    print(Fore.RED + f"Error: MCU '{mcu_name}' already exists in Devices.")
                    error_log.write(error_message + "\n")
                    continue

                # Prepare installer_package dictionary based on build.json package
                # Map each compiler to list containing the current package (from build.json)
                installer_packages = {
                    "clang-llvm": package,
                    "gcc_arm_none_eabi": package
                }

                # Insert into Devices
                if not insert_device(conn, mcu_name, installer_packages):
                    error_message = f"{package}, {doc_ds}: {mcu_name} - Failed to insert into Devices."
                    error_log.write(error_message + "\n")
                    continue

                # Insert into BoardToDevice
                if not insert_board_to_device(conn, mcu_name):
                    error_message = f"{package}, {doc_ds}: {mcu_name} - Failed to insert into BoardToDevice."
                    error_log.write(error_message + "\n")

                # Insert into SDKToDevice
                if not insert_sdk_to_device(conn, mcu_name):
                    error_message = f"{package}, {doc_ds}: {mcu_name} - Failed to insert into SDKToDevice."
                    error_log.write(error_message + "\n")

                # Insert into CompilerToDevice
                if not insert_compiler_to_device(conn, mcu_name):
                    error_message = f"{package}, {doc_ds}: {mcu_name} - Failed to insert into CompilerToDevice."
                    error_log.write(error_message + "\n")

                # Insert into ProgrammerToDevice
                if not insert_programmer_to_device(conn, mcu_name):
                    error_message = f"{package}, {doc_ds}: {mcu_name} - Failed to insert into ProgrammerToDevice."
                    error_log.write(error_message + "\n")

                # Insert into DeviceToPackage for each valid package
                for pkg in packages:
                    if pkg == "ERROR":
                        continue  # Skip invalid packages
                    if not insert_device_to_package(conn, mcu_name, pkg):
                        error_message = f"{package}, {doc_ds}: {mcu_name}, {pkg} - Failed to insert into DeviceToPackage."
                        error_log.write(error_message + "\n")

def find_mcu_packages(mcu_name, mcu_definitions_dir, error_log, package, doc_ds):
    """
    Searches for the MCU folder and retrieves its package folders. Validates and rearranges package names.

    Args:
        mcu_name (str): The name of the MCU to search for.
        mcu_definitions_dir (str): The path to the STM32 MCU definitions directory.
        error_log (file object): The file object for logging errors.
        package (str): The package name being processed.
        doc_ds (str): The doc_ds number being processed.

    Returns:
        list: A list of validated and rearranged mcu_packages if found, else None.
    """
    target_mcu_dir = os.path.join(mcu_definitions_dir, mcu_name)
    if not os.path.isdir(target_mcu_dir):
        error_message = f"{package}, {doc_ds}: {mcu_name}, N/A - MCU folder '{mcu_name}' not found."
        print(Fore.RED + f"Error: MCU folder '{mcu_name}' not found in {mcu_definitions_dir}")
        error_log.write(error_message + "\n")
        return None

    try:
        # List all subdirectories (mcu_packages) within the MCU folder
        raw_mcu_packages = [item for item in os.listdir(target_mcu_dir)
                            if os.path.isdir(os.path.join(target_mcu_dir, item))]
        validated_mcu_packages = []
        for pkg in raw_mcu_packages:
            # Validate and rearrange pkg
            rearranged_pkg, error = validate_and_rearrange_pkg(pkg)
            if rearranged_pkg:
                validated_mcu_packages.append(rearranged_pkg)
            else:
                # Log error and append "ERROR"
                error_message = f"{package}, {doc_ds}: {mcu_name}, {pkg} - {error}"
                print(Fore.RED + f"Error: {error}")
                error_log.write(error_message + "\n")
                validated_mcu_packages.append("ERROR")
        return validated_mcu_packages
    except Exception as e:
        error_message = f"{package}, {doc_ds}: {mcu_name}, N/A - Error accessing '{target_mcu_dir}': {e}"
        print(Fore.RED + f"An error occurred while accessing '{target_mcu_dir}': {e}")
        error_log.write(error_message + "\n")
        return None

if __name__ == "__main__":
    main()
