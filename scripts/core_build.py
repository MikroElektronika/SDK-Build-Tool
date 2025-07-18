import os, re, subprocess, shutil, json, sqlite3, argparse

import classes.class_es as es

from packaging import version
from clocks import GenerateClocks

# Global variable for local_app_data_path
if os.name == 'posix':
    local_app_data_path = '/home/runner/.MIKROE/NECTOStudio7_Development'
else:
    local_app_data_path = 'c:/Users/ivan.ruzavin/AppData/Local/MIKROE/NECTOStudio7Dev'

# Path for storing artifacts.
if os.name == 'posix':
    testPath = '/home/runner/test_results'
else:
    testPath = 'D:/runner/test_results'

# Path to sdk_build_automation tool.
if os.name == 'posix':
    toolPath = 'xvfb-run --auto-servernum --server-num=1 /home/runner/MikroElektronika/NECTOStudio/bin/sdk_build_automation'
else:
    toolPath = 'c:/MikroElektronikaDev/NECTOStudio/bin/sdk_build_automation.exe'

# Global variable to trace failed tests.
build_failed = False

# Supported compilers list for each architecture.
compiler_list = {
    'ARM': ['gcc_arm_none_eabi', 'clang-llvm'],
    'RISCV': ['xpack-riscv-none-embed-gcc', 'clang-llvm-riscv'],
    'PIC': ['mchp_xc8'],
    'DSPIC': ['mchp_xc16'],
    'PIC32': ['mchp_xc32']
}

# Define a REGEXP function for SQLite.
def regexp(expr, item):
    # Handle the case where item is None
    if item is None:
        return False

    # Compile the regular expression and search the item
    reg = re.compile(expr)
    return reg.search(item) is not None

# Extracts the SDK version from the manifest.json file.
def get_sdk_version():
    sdk_list = []
    conn = sqlite3.connect(os.path.join(local_app_data_path, 'databases', 'necto_db.db'))

    # Create REGEXP function for python script.
    conn.create_function("REGEXP", 2, regexp)
    cursor = conn.cursor()

    cursor.execute(f"""
        SELECT uid
        FROM SDKs
        WHERE uid REGEXP "mikrosdk_v";
    """)
    rows = cursor.fetchall()
    if rows:
        sdk_list.extend([row[0] for row in rows])

    # Function to extract the numeric version from a string
    def extract_version(version_string):
        match = re.search(r'mikrosdk_v(\d+)', version_string)
        if match:
            return int(match.group(1))  # Return the version as an integer
        return -1  # Return a default value if no match is found

    return sorted(sdk_list, key=extract_version)[-1]

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
def run_builds(changes_dict):
    # Get the SDK version from manifest.json file.
    sdk_version = get_sdk_version()

    shutil.copyfile(os.path.join(testPath, 'necto_db.db'), os.path.join(local_app_data_path, 'databases', 'necto_db.db'))
    # shutil.copytree(os.path.join(testPath, 'packages'), os.path.join(local_app_data_path, 'packages'), dirs_exist_ok=True)
    # shutil.copyfile(os.path.join(testPath, 'mikroeUtilsCommon.cmake'), os.path.join(local_app_data_path, 'cmake', 'mikroeUtilsCommon.cmake'))
    shutil.copy(os.path.join(testPath, 'clocks.json'), os.path.join(local_app_data_path, 'clocks.json'))

    # Run build for all MCUs from mcu_list.
    print(f"\033[93mRunning build for {len(changes_dict['mcu_list'])} MCUs\033[0m")
    mcu_number = 0
    for mcu in changes_dict['mcu_list']:
        print(f'Building mcu number {mcu_number} out of {len(changes_dict['mcu_list'])}.')
        mcu_number += 1
        # Get the necessary compiler for the current MCU build.
        compilers = get_compilers(mcu, is_mcu=True)
        for compiler in compilers:
            if 'xc' not in compiler:
                cmd = f'{toolPath} --isBareMetal "1" --compiler "{compiler}" --sdk "{sdk_version}" --board "GENERIC_ARM_BOARD" --mcu "{mcu}" --installPrefix "{testPath}/mcu_build/{compiler}"'
            else:
                if 'xc8' in compiler:
                    cmd = f'{toolPath} --isBareMetal "1" --compiler "{compiler}" --sdk "{sdk_version}" --board "GENERIC_PIC_BOARD" --mcu "{mcu}" --installPrefix "{testPath}/mcu_build/{compiler}"'
                elif 'xc32' in compiler:
                    cmd = f'{toolPath} --isBareMetal "1" --compiler "{compiler}" --sdk "{sdk_version}" --board "GENERIC_PIC32_BOARD" --mcu "{mcu}" --installPrefix "{testPath}/mcu_build/{compiler}"'
                else:
                    cmd = f'{toolPath} --isBareMetal "1" --compiler "{compiler}" --sdk "{sdk_version}" --board "GENERIC_DSPIC_BOARD" --mcu "{mcu}" --installPrefix "{testPath}/mcu_build/{compiler}"'
            run_cmd(cmd, changes_dict, mcu + ' ' + compiler)

# Returns the list of compilers based on the given name and type.
def get_compilers(name, is_mcu=True):
    if is_mcu:
        if any(substring in name for substring in ["SAM", "STM", "TM4C", "MK", "MC", "R7FA", "K32L", "KW45", "M0", "M2", "M4", "NUC", "NANO", "MINI", "M23"]):
            return compiler_list["ARM"]
        elif any(substring in name for substring in ["GD32", "RISC"]):
            return compiler_list["RISCV"]
        elif "PIC32" in name:
            return compiler_list["PIC32"]
        elif any(substring in name for substring in ["DSPIC", "PIC24", "dsPIC"]):
            return compiler_list["DSPIC"]
        elif any(substring in name for substring in ["PIC18", "PIC16", "PIC12", "PIC10"]):
            return compiler_list["PIC"]
        elif "AT" in name and "ATSAM" not in name:
            return compiler_list["AVR"]

def functionRegex(value, pattern):
    c_pattern = re.compile(r"\b" + pattern.lower() + r"\b")
    return c_pattern.search(value) is not None

def read_data_from_db(db, sql_query):
    ## Open the database / connect to it
    con = sqlite3.connect(db)
    cur = con.cursor()

    ## Create the REGEXP function to be used in DB
    con.create_function("REGEXP", 2, functionRegex)

    ## Execute the desired query
    results = cur.execute(sql_query).fetchall()

    ## Close the connection
    cur.close()
    con.close()

    ## Return query results
    return len(results), results

def get_changed_files(branch='main'):
    try:
        # Run the git diff command to get the list of changed files
        result = subprocess.run(
            ['git', 'diff', '--name-only', branch],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            check=True
        )

        # The output is a string of file paths separated by newlines
        changed_files = result.stdout.splitlines()

        return changed_files
    except subprocess.CalledProcessError as e:
        print(f"Error running git command: {e.stderr}")
        return []


def find_cmake_files(path):
    files = get_changed_files('main')
    cmake_files = []
    for file in files:
        if 'cmake/' in file and 'delays/' not in file and file not in cmake_files:
            cmake_files.append(file)
    return cmake_files

def parse_files_for_paths(cmake_files, source_dir, isGCC=None):
    """ Parse cmake files to extract paths, directory contents, and regex for folder names inside if blocks relative to the source_directory """
    path_pattern = re.compile(r'set\((\w+)\s+"([^"]+)"\)')
    regex_pattern = re.compile(r'if.*MATCHES\s+"([^"]+)"')  # Regex to capture MATCHES condition
    regex_pattern_or = re.compile(r'.*MATCHES\s+"([^"]+)"')  # Regex to capture MATCHES condition
    paths = {}
    for file in cmake_files:
        file_name = os.path.splitext(os.path.basename(file))[0]  # Use filename without extension
        paths[file_name] = {'files': set(), 'regex': None, 'cmake_file_path': file}  # Initialize a set for paths and a regex entry per cmake file
        inside_if = False
        vendor = os.path.basename(os.path.dirname(file))
        with open(file, 'r') as f:
            regex_array = []
            current_regex = None
            for line in f:
                if isGCC and 'list(APPEND local_list_include' in line:

                    systemPath = line.split()[-1][:-1].replace("${vendor}", vendor)
                    if 'doc_ds' in systemPath or ('sam' in systemPath and re.search('^(at)?sam.+$', file_name)) or 'nuvoton' in systemPath:
                        systemPath = os.path.dirname(systemPath)
                    systemPath = os.path.join(source_dir, systemPath)
                    paths[file_name]['files'].add(systemPath)
                else:
                    if 'if(' in line and '${MCU_NAME} MATCHES' in line:
                        regex_match = regex_pattern.search(line)
                        if 'OR ${MCU_NAME} MATCHES' in regex_match.string:
                            check_split = regex_match.string.split('OR')
                            for each_split in check_split:
                                regex_array.append(regex_pattern_or.search(each_split).group(1))
                            current_regex = '|'.join(regex_array)
                        else:
                            if regex_match:
                                current_regex = regex_match.group(1)  # Capture the regex when it appears
                                regex_array.append(current_regex)
                        inside_if = True
                    elif inside_if and line.strip() == 'endif()':
                        inside_if = False
                        if current_regex:
                            paths[file_name]['regex'] = '|'.join(regex_array)  # Save the regex before resetting
                            current_regex = None
                    elif inside_if:
                        matches = path_pattern.search(line)
                        if matches:
                            key, value = matches.groups()
                            full_path = os.path.join(source_dir, value)
                            if key == "SYSTEM_LIB_INCLUDE_DIR" and value:
                                if os.path.isdir(full_path):
                                    for root, dirs, files in os.walk(full_path):
                                        for file in files:
                                            paths[file_name]['files'].add(os.path.join(root, file))
                                continue
                            paths[file_name]['files'].add(full_path)
    return paths

def copy_files(files, output_dir, source_dir):
    """ Copy individual files from source_paths to output_dir keeping the folder structure """
    for full_source_path in files:
        if os.path.exists(full_source_path):
            relative_path = os.path.relpath(full_source_path, start=source_dir)
            full_dest_path = os.path.join(output_dir, relative_path)
            os.makedirs(os.path.dirname(full_dest_path), exist_ok=True)
            if os.path.isdir(full_source_path):
                shutil.copytree(full_source_path, full_dest_path, dirs_exist_ok=True)
            else:
                shutil.copy(full_source_path, full_dest_path)
        else:
            print(f"File not found: {full_source_path}")

def copy_interrupt_files(source_dir, output_dir):
    """ Copy specific interrupt files that should be included in every package """
    # Copy interrupts.h to interrupts/include
    source_file_h = os.path.join(source_dir, 'interrupts/include/interrupts.h')
    dest_dir_h = os.path.join(output_dir, 'interrupts/include')
    os.makedirs(dest_dir_h, exist_ok=True)
    shutil.copy(source_file_h, dest_dir_h)

    # Copy interrupts.c to interrupts
    source_file_c = os.path.join(source_dir, 'interrupts/interrupts.c')
    dest_dir_c = os.path.join(output_dir, 'interrupts')
    os.makedirs(dest_dir_c, exist_ok=True)
    shutil.copy(source_file_c, dest_dir_c)

def extract_mcu_names(file_name, source_dir, output_dir, regex):
    """
    Copy files from a specific subdirectory in source_dir that match a regex to a corresponding subdirectory in output_dir,
    maintaining the folder structure.
    """
    mcus = {}
    mcus[file_name] = {'mcu_names': set(), 'cores': set()}
    source_subdir = os.path.join(source_dir, 'def')

    if regex:
        regex_pattern = re.compile(regex, re.IGNORECASE)

        for root, dirs, files in os.walk(source_subdir):
            for file in files:
                if file.endswith('.json'):
                    mcu_name = os.path.splitext(file)[0]
                    if regex_pattern.match(mcu_name):
                        mcus[file_name]['mcu_names'].add(mcu_name)

    return mcus

def find_first_matching_mcu_name(source_dir, regex):
    """
    Find and return the filename of the first file that matches a given regex in the specified 'def' directory.
    """
    if not regex:
        return None

    def_dir = os.path.join(source_dir, 'def')  # Define the path to the 'def' directory
    regex_pattern = re.compile(regex)  # Compile the regex pattern for efficiency

    # Walk through the directory
    for root, dirs, files in os.walk(def_dir):
        for file in files:
            if file.endswith('.json'):
                if regex_pattern.search(os.path.splitext(file)[0]):  # Check if the file matches the regex
                    filename_without_extension = os.path.splitext(file)[0]  # Remove the extension from the filename
                    return filename_without_extension  # Return just the filename without its path or extension

    return None  # Return None if no matching file is found

def extract_regex_from_cmake(cmake_file):
    """ Extract regex patterns from a given .cmake file, supporting complex logical conditions. """
    # Extended regex pattern to capture multiple regex conditions separated by 'OR'
    regex_pattern = re.compile(r'\$\{MCU_NAME\}\s*MATCHES\s*"(.*?)"')
    # Use a set to avoid duplicates if the same regex appears more than once
    regexes = set()

    with open(cmake_file, 'r') as file:
        content = file.read()

    # Finding all occurrences of MCU_NAME MATCHES conditions
    if_conditions = re.findall(r'if\s*\((.*?)\)\s*endif', content, re.DOTALL)
    for condition in if_conditions:
        # Extract all regex patterns within the condition
        matches = regex_pattern.findall(condition)
        regexes.update(matches)

    return list(regexes)

def copy_files_based_on_regex(source_dir, dest_dir, check_string):
    if not check_string:
        return

    fileCopied = False
    for root, dirs, files in os.walk(source_dir):
        for file in files:
            if file.endswith(".cmake"):
                full_path = os.path.join(root, file)
                regexes = extract_regex_from_cmake(full_path)
                for regex in regexes:
                    if re.match(regex, check_string) and not fileCopied:
                        # If check_string matches the regex, copy the file
                        fileCopied = True
                        dest_file_path = os.path.join(dest_dir, file)
                        os.makedirs(os.path.dirname(dest_file_path), exist_ok=True)
                        shutil.copy(full_path, dest_file_path)
        if not fileCopied and 'STM32' in check_string and 'gcc_clang' in source_dir:
            if check_string[6] == '7': ## in special grouped case for M7 not covered by single files
                os.makedirs(dest_dir, exist_ok=True)
                shutil.copy(os.path.join(root, 'm7.cmake'), os.path.join(dest_dir, 'm7.cmake'))
            elif check_string[6] == '0': ## in special grouped case for M0 not covered by single files
                os.makedirs(dest_dir, exist_ok=True)
                shutil.copy(os.path.join(root, 'm0.cmake'), os.path.join(dest_dir, 'm0.cmake'))


def copy_cmake_files(cmake_file, source_dir, output_dir, regex):
    relative_path = os.path.relpath(cmake_file, start=source_dir)
    destination_path = os.path.join(output_dir, relative_path)
    os.makedirs(os.path.dirname(destination_path), exist_ok=True)
    shutil.copy(cmake_file, destination_path)

    # Copy coreUtils.cmake
    shutil.copy(os.path.join(source_dir, "cmake/coreUtils.cmake"), os.path.join(output_dir, "cmake"))

    # Copy either mikroeExportConfig.cmake.in or ExportConfig.cmake.in depending on which exists
    export_config_path = os.path.join(source_dir, "cmake/mikroeExportConfig.cmake.in")
    fallback_config_path = os.path.join(source_dir, "cmake/ExportConfig.cmake.in")
    install_headers_path = os.path.join(source_dir, "cmake/InstallHeaders.cmake.in")
    if os.path.exists(export_config_path):
        shutil.copy(export_config_path, os.path.join(output_dir, "cmake"))
    elif os.path.exists(fallback_config_path):
        shutil.copy(fallback_config_path, os.path.join(output_dir, "cmake"))
    if os.path.exists(install_headers_path):
        shutil.copy(install_headers_path, os.path.join(output_dir, "cmake"))
    if 'gcc_clang' in source_dir:
        mcuFileName = find_first_matching_mcu_name(source_dir, regex)
        delays_cmake_dir = os.path.join(os.path.dirname(cmake_file), 'delays')
        delay_relative_path = os.path.relpath(delays_cmake_dir, start=source_dir)
        delay_destination_path = os.path.join(output_dir, delay_relative_path)
        copy_files_based_on_regex(delays_cmake_dir, delay_destination_path, mcuFileName)

def copy_schemas(mcus, source_dir, output_dir, base_path):

    for mcu in mcus:
        schemas_dir = os.path.join(source_dir, 'schemas', mcu)
        dest_path = os.path.join(base_path, 'schemas', mcu)
        if os.path.exists(schemas_dir):
            os.makedirs(dest_path, exist_ok=True)
            shutil.copytree(schemas_dir, dest_path, dirs_exist_ok=True)

def copy_interrupts(mcus, source_dir, output_dir, base_path):

    for mcu in mcus:
        interrupts_dir = os.path.join(source_dir, 'interrupts', 'include', 'interrupts_mcu', mcu.lower())
        dest_path = os.path.join(base_path, 'interrupts', 'include', 'interrupts_mcu', mcu.lower())
        if os.path.exists(interrupts_dir):
            os.makedirs(dest_path, exist_ok=True)
            shutil.copytree(interrupts_dir, dest_path, dirs_exist_ok=True)

    copy_interrupt_files(source_dir, base_path)

def copy_files_from_dir(mcus, source_dir, output_dir, base_path, subdirectory):

    source_subdir = os.path.join(source_dir, subdirectory)
    output_subdir = os.path.join(base_path, subdirectory)

    for root, dirs, files in os.walk(source_subdir):
        for file in files:
            if os.path.basename(file) == 'mcu.h':
                # Special rule for 'mcu.h' files, ensure the directory matches the regex
                if 'XC16' in root:
                    mcuCheck = os.path.basename(root)
                else:
                    mcuCheck = os.path.basename(root).upper()
                if mcuCheck in mcus:
                    relative_path = os.path.relpath(root, start=source_subdir)
                    full_dest_path = os.path.join(output_subdir, relative_path)
                    shutil.copytree(root, full_dest_path, dirs_exist_ok=True)
            if os.path.splitext(os.path.basename(file))[0].upper().replace('DSPIC', 'dsPIC') in mcus:
                if 'gcc_clang' in source_subdir and re.match('^MKV?.+XXX.+$', file):
                    continue
                else:
                    full_source_path = os.path.join(root, file)
                    relative_path = os.path.relpath(full_source_path, start=source_subdir)
                    full_dest_path = os.path.join(output_subdir, relative_path)
                    os.makedirs(os.path.dirname(full_dest_path), exist_ok=True)
                    shutil.copy(full_source_path, full_dest_path)

def copy_delays(cores, source_dir, output_dir, base_path):
    for core in cores:
        delays_dir = os.path.join(source_dir, 'delays', core.lower())
        dest_path = os.path.join(base_path, 'delays', core.lower())
        if os.path.exists(delays_dir):
            os.makedirs(dest_path, exist_ok=True)
            shutil.copytree(delays_dir, dest_path, dirs_exist_ok=True)

# Function to replace placeholders in a single file
def replace_placeholders_in_file(source_file, dest_file, replacements):
    with open(source_file, 'r') as file:
        file_content = file.read()

    # Replace placeholders
    for placeholder, replacement in replacements.items():
        if replacement is not None:
            file_content = file_content.replace(placeholder, replacement)

    if not os.path.exists(os.path.dirname(dest_file)):
        os.makedirs(os.path.dirname(dest_file))

    # Write the updated content to the destination file
    with open(dest_file, 'w') as file:
        file.write(file_content)

def get_core_from_def(file_path):
    # Check if the file exists
    if os.path.exists(file_path):
        # Open the JSON file and load its contents
        with open(file_path, 'r') as file:
            data = json.load(file)

            # Check if the "core" key exists in the JSON data
            if 'core' in data:
                core = data['core']
                if core == 'M7EF':
                    core = 'M7'
            else:
                print(f'Warning: "core" key not found in {file_path}')
    else:
        print(f'Error: File {file_path} does not exist.')

    return core

def get_core_from_queries(file_path):
    with open(file_path, 'r') as devices_json:
        json_data = json.load(devices_json)
    core = json.loads(json_data['sdk_config'])['CORE_NAME']

    return core

def get_core(mcuNames, package_name, cmake_file, source_dir, changes_dict):
    for mcu_name in mcuNames[cmake_file]['mcu_names']:
        if 'gcc_clang' in package_name:
            core = get_core_from_def(os.path.join(source_dir, "def", f"{mcu_name}.json"))
        else:
            core = get_core_from_queries(os.path.join(os.getcwd(), "resources/queries/mcus", mcu_name, 'Devices.json'))
        mcuNames[cmake_file]['cores'].add(core)
        changes_dict['mcu_list'].append(mcu_name)

def filter_versions(versions):
    # Filter out versions that contain non-numeric characters (e.g., words or suffixes)
    filtered_versions = [v for v in versions if all(part.isdigit() for part in v.split('.'))]
    return filtered_versions

def insertIntoTable(db, tableName, values, columns):
    conn = sqlite3.connect(db)
    cur = conn.cursor()
    numOfItems = ''
    for itemCount in range(1, len(values) + 1):
        numOfItems += '?,'
    cur.execute(f'INSERT OR IGNORE INTO {tableName} ({columns}) VALUES ({numOfItems[:-1]})', values)
    conn.commit()
    conn.close()

def updateDevicesFromCore(dbs, queries):
    sdk_version = get_sdk_version()
    allDevicesDirs = os.listdir(queries)
    for eachDeviceDir in allDevicesDirs:
        currentDeviceDir = os.path.join(queries, eachDeviceDir)
        currentDeviceFiles = os.listdir(currentDeviceDir)

        for eachDb in dbs:
            if eachDb:
                if 'Devices.json' in currentDeviceFiles:
                    with open(os.path.join(currentDeviceDir, 'Devices.json'), 'r') as file:
                        device = json.load(file)
                    file.close()
                    values = []
                    collumns = []
                    for eachKey in device.keys():
                        collumns.append(eachKey)
                        values.append(device[eachKey])
                    insertIntoTable(
                        eachDb,
                        'Devices',
                        values,
                        ','.join(collumns)
                    )
                    insertIntoTable(
                        eachDb,
                        'ProgrammerToDevice',
                        ['gdb_general', values[5], ''],
                        'programer_uid,device_uid,device_support_package'
                    )

                if 'LinkerTables.json' in currentDeviceFiles:
                    with open(os.path.join(currentDeviceDir, 'LinkerTables.json'), 'r') as file:
                        linkerTables = json.load(file)
                    file.close()
                    table_keys = [list(table.keys())[0] for table in linkerTables['tables']]
                    for eachTableKey in table_keys:
                        collumns = ['device_uid']
                        values = [linkerTables['device_uid']]
                        for eachKey in linkerTables['tables']:
                            if eachTableKey in eachKey:
                                collumns.append(list(eachKey[eachTableKey].keys())[0])
                                if 'SDKToDevice' == eachTableKey:
                                    sdkVersions = read_data_from_db(eachDb, 'SELECT DISTINCT version FROM SDKs WHERE name IS "mikroSDK"')
                                    versions = filter_versions(list(v[0] for v in sdkVersions[1]))
                                    threshold_version = version.parse(eachKey[eachTableKey][collumns[1]][:-1])
                                    filtered_versions = [f'mikrosdk_v{v.replace('.','')}' for v in versions if version.parse(v) >= threshold_version]
                                    values.append(filtered_versions)
                                # Add Packages if they are not present in the database
                                elif 'DeviceToPackage' == eachTableKey:
                                    package_uids = linkerTables['tables'][2]['DeviceToPackage']['package_uid']
                                    for package_uid in package_uids:
                                        pin_count = package_uid.split('/')[0]
                                        package_name = package_uid.split('/')[1]
                                        insertIntoTable(
                                            eachDb,
                                            'Packages',
                                            [
                                                pin_count,
                                                package_uid,
                                                package_uid,
                                                "",
                                                '{"_MSDK_PACKAGE_NAME_":"' + package_name + '","_MSDK_DIP_SOCKET_TYPE_":""}'
                                            ],
                                            'pin_count,name,uid,stm_sdk_config,sdk_config'
                                        )
                                    values.append(eachKey[eachTableKey][collumns[1]])
                                else:
                                    values.append(eachKey[eachTableKey][collumns[1]])
                                break
                        if list == type(values[1]):
                            for eachValue in values[1]:
                                insertIntoTable(
                                    eachDb,
                                    eachTableKey,
                                    [
                                        values[0],
                                        eachValue
                                    ],
                                    ','.join(collumns)
                                )
                        else:
                            insertIntoTable(
                                eachDb,
                                eachTableKey,
                                values,
                                ','.join(collumns)
                            )

    # Set sdk installed for latest mikrosdk
    conn = sqlite3.connect(eachDb)
    cur = conn.cursor()
    cur.execute(f'UPDATE SDKs SET installed = 1 WHERE uid = "{sdk_version}"')
    conn.commit()
    conn.close()

    return

def index_package(package_name, mcus_to_index, es_instance, indexed_packages):
    mcus = []
    for mcu in mcus_to_index:
        mcus.append(mcu)
    body = {
        "name": package_name,
        "display_name": f"{package_name.replace('arm_gcc_clang_', '').upper()} MCU Support package for GCC & Clang",
        "author": "MikroElektronika",
        "hidden": False,
        "type": "mcu",
        "version": '0.0.1',
        "package_version": '0.0.1',
        "published_at": '2024-10-16T09:16:18Z',
        "category": "MCU Package",
        "download_link": '',
        "package_changed": True,
        "install_location": f"%APPLICATION_DATA_DIR%/packages/core/ARM/gcc_clang/{package_name}",
        "dependencies": [
            "preinit",
            "unit_test_lib",
            "mikroe_utils_common"
        ],
        "mcus": mcus,
        "_type" : '_doc'
    }
    es_instance.update(doc_type=None, doc_id=package_name, doc_body=body)
    indexed_packages.append(package_name)

def package_asset(source_dir, output_dir, arch, entry_name, changes_dict, es_instance, indexed_packages):
    cmake_files = find_cmake_files(source_dir)
    file_paths = parse_files_for_paths(cmake_files, source_dir, True)
    for cmake_file, data in file_paths.items():
        base_output_dir = os.path.join(output_dir, f"{arch.lower()}_{entry_name.lower()}_{cmake_file}") # Subdirectory for this .cmake file
        # Copy the .cmake file into the package directory
        copy_cmake_files(data['cmake_file_path'], source_dir, base_output_dir, data['regex'])

        mcuNames = extract_mcu_names(cmake_file, source_dir, output_dir, data['regex'])

        # Copy individual files
        copy_files(data['files'], base_output_dir, source_dir)
        # Copy schema directories
        copy_schemas(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir)
        copy_interrupts(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir)
        # Copy defs
        copy_files_from_dir(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir, 'def')
        # Copy startups
        copy_files_from_dir(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir, 'startup')
        # Copy linker scirpts
        copy_files_from_dir(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir, 'linker_scripts')

        get_core(mcuNames, f"{arch.lower()}_{entry_name.lower()}_{cmake_file}", cmake_file, source_dir, changes_dict)
        coreQueriesPath = os.path.join(os.getcwd(), 'resources/queries')
        if os.path.exists(os.path.join(coreQueriesPath, 'mcus')):
            updateDevicesFromCore([f"{local_app_data_path}/databases/necto_db.db"], os.path.join(coreQueriesPath, 'mcus'))

        # Copy delay files
        copy_delays(mcuNames[cmake_file]['cores'], source_dir, output_dir, base_output_dir)
        # Copy std_library to every package
        std_library_path = os.path.join(source_dir, 'std_library')
        if os.path.exists(std_library_path):
            shutil.copytree(std_library_path, os.path.join(base_output_dir, "std_library"), dirs_exist_ok=True)
        # Copy include to every package
        include_path = os.path.join(source_dir, 'include')
        if os.path.exists(include_path):
            shutil.copytree(include_path, os.path.join(base_output_dir, "include"), dirs_exist_ok=True)
        # Copy cstdio to every package
        cstdio_path = os.path.join(source_dir, 'cstdio')
        if os.path.exists(cstdio_path):
            shutil.copytree(cstdio_path, os.path.join(base_output_dir, "cstdio"), dirs_exist_ok=True)

        # Copy common to every package
        shutil.copytree(os.path.join(source_dir, 'common'), os.path.join(base_output_dir, "common"), dirs_exist_ok=True)
        # Copy base CMakeLists.txt to every package
        shutil.copy(os.path.join(source_dir, "CMakeLists.txt"), base_output_dir)

        # Finally copy everthing to AppData location
        shutil.copytree(base_output_dir, os.path.join(local_app_data_path, "packages", "core", arch, entry_name, f"{arch.lower()}_{entry_name.lower()}_{cmake_file}"))

        # Copy packages to artifacts as well
        shutil.copytree(base_output_dir, os.path.join(testPath, "packages", f"{arch.lower()}_{entry_name.lower()}_{cmake_file}"))

        # index_package(f"{arch.lower()}_{entry_name.lower()}_{cmake_file}", mcuNames[cmake_file]['mcu_names'], es_instance, indexed_packages)

# Writes the result dictionary to a JSON file and ensures testPath exists.
def write_results_to_file(changes_dict):
    os.makedirs(testPath, exist_ok=True)

    with open(f'{testPath}/built_changes.json', 'w+') as json_file:
        json.dump(changes_dict, json_file, indent=4)

    print(f"All the data for build has been written to {testPath}/built_changes.json")

def main():
    global build_failed

    parser = argparse.ArgumentParser(description="Provide arguments for recursive build.")
    parser.add_argument("token", help="GitHub Token")
    parser.add_argument("index", help="Provided index name")
    parser.add_argument("es_host", help="Elasticsearch host value", default="")
    parser.add_argument("es_user", help="Elasticsearch username value", default="")
    parser.add_argument("es_password", help="Elasticsearch password value", default="")
    args = parser.parse_args()

    # output_folder = os.path.join(local_app_data_path, 'packages/preinit')
    # shutil.copytree(output_folder, os.path.join(testPath, 'packages/preinit'), dirs_exist_ok=True)
    # print(f"\033[93mCopied {output_folder} to the artifacts folder\033[0m")
    # output_folder = os.path.join(local_app_data_path, 'packages/unit_test_lib')
    # shutil.copytree(output_folder, os.path.join(testPath, 'packages/unit_test_lib'), dirs_exist_ok=True)
    # print(f"\033[93mCopied {output_folder} to the artifacts folder\033[0m")
    # output_file = os.path.join(local_app_data_path, 'cmake/mikroeUtilsCommon.cmake')
    # shutil.copyfile(output_file, os.path.join(testPath, 'mikroeUtilsCommon.cmake'))
    # print(f"\033[93mCopied {output_file} to the artifacts folder\033[0m")
    os.makedirs(testPath, exist_ok = True)
    if os.name == 'posix':
        # Generate clocks.json
        input_directory = "./"
        output_dir = "./output/docs"
        output_file = os.path.join(output_dir, 'clocks.json')
        output_file_uncompressed = os.path.join(output_dir, 'clocks_uncompressed.json')
        clocksGenerator = GenerateClocks(input_directory, output_file)
        clocksGenerator.generate()

        # Remove the existing clocks.json file if it exists
        clocks_path = os.path.join(local_app_data_path, 'clocks.json')
        if os.path.exists(clocks_path):
            os.remove(clocks_path)
            shutil.copy(output_file, local_app_data_path)
            shutil.copy(output_file, testPath)
            shutil.copy(output_file_uncompressed, testPath)
            print(f"\033[93mReplaced {clocks_path} with: {output_file}\033[0m")
        else:
            print(f"\033[91mFile not found: {clocks_path}\033[0m")

    index_name = args.index
    if 'test' not in index_name:
        print('\033[92mAborting as you are abusing LIVE index\033[0m')
        exit(1)

    es_instance = es.index(
        es_host=args.es_host, es_user=args.es_user, es_password=args.es_password,
        index=index_name, token=args.token
    )

    indexed_packages = []

    files = get_changed_files('main')
    archs = []
    architectures = ["ARM", "RISCV", "PIC32", "PIC", "dsPIC", "AVR"]
    valid_entries = ["gcc_clang", "XC32", "XC16", "XC8"]
    for file in files:
        for architecture in architectures:
            if architecture == file.split('/')[0] and architecture not in archs:
                archs.append(architecture)
    changes_dict = {
        'mcu_list': [],
        'build_status': {}
    }

    # First let's disable clocks and database reinstallation on every build run
    with open(os.path.join(local_app_data_path, 'NECTOStudio.ini'), 'r') as ini_file:
        ini_data = ini_file.readlines()

    ini_data_write = ''
    for line in ini_data:
        if 'download=true' in line:
            line = line.replace('true', 'false')
        ini_data_write += line

    with open(os.path.join(local_app_data_path, 'NECTOStudio.ini'), 'w') as ini_file:
        ini_file.write(ini_data_write)

    for arch in archs:
        root_source_directory = f"./{arch}"
        root_output_directory = f"./output/{arch}"
        # List directories directly under the root source directory
        try:
            with os.scandir(root_source_directory) as entries:
                print(entries)
                for entry in entries:
                    # Don't process packaging for the MikroC entries
                    if entry.name not in valid_entries:
                        continue
                    print(root_source_directory)
                    print(entry)
                    if entry.is_dir():
                        source_directory = os.path.join(root_source_directory, entry.name)
                        output_directory = os.path.join(root_output_directory, entry.name)

                        print(f"Processing {source_directory} to {output_directory}")
                        package_asset(source_directory, output_directory, arch, entry.name, changes_dict, es_instance, indexed_packages)
        except Exception as e:
            print(f"Failed to process directories in {root_source_directory}: {e}")
            print("\033[93mSomething went wrong while configuring the packages, check manually.\033[0m")

    print("\033[93mAll requested core packages have been generated successfully.\033[0m")
    shutil.copyfile(os.path.join(local_app_data_path, 'databases', 'necto_db.db'), os.path.join(testPath, 'necto_db.db'))
    run_builds(changes_dict)

    # Write all the used info for building to artifact folder.
    write_results_to_file(changes_dict)

    # for indexed_item in indexed_packages:
    #     es_instance.delete(doc_type='_doc', doc_id=indexed_item)

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
