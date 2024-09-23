import os
import json
import sys
import re
import sqlite3
from colorama import init, Fore, Style

# Initialize colorama
init(autoreset=True)

# Global variable for local_app_data_path
local_app_data_path = 'c:/Users/stefan.djordjevic/AppData/Local/MIKROE/NECTOStudio7'

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

def main():
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
