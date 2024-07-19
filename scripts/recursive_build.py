import subprocess
import re
import os
import sqlite3
from pathlib import Path

regex_list = []
mcu_list = []
board_list = []
mcu_card_list = []
unused = []
gitPath = '/home/runner/work/SDK-Build-Tool/SDK-Build-Tool'
dbPath = '/home/runner/.MIKROE/NECTOStudio7/databases/necto_db.db'
testPath = '/home/runner/test_results'
toolPath = '/home/runner/MikroElektronika/NECTOStudio/bin'
build_failed = False

compiler_list = {
    "ARM": ["gcc_arm_none_eabi", "clang-llvm", "mikrocarm"],
    "RISCV": ["xpack-riscv-none-embed-gcc", "clang-llvm-riscv"],
    "PIC": ["mikrocpic", "mchp_xc8"],
    "DSPIC": ["mikrocdspic", "mchp_xc16"],
    "PIC32": ["mikrocpic32", "mchp_xc32"],
    "AVR": "mikrocavr"
}

def run_cmd(cmd):
    output = subprocess.check_output(cmd, shell=True, text=True)
    print(output)
    if "Build failed!" in output:
        build_failed = True

def run_builds():
    """Runs the build commands for each member of mcu_list, board_list, and mcu_card_list."""
    if not mcu_list and not board_list and not mcu_card_list:
        # Run builds for all compilers in compiler_list
        for key, compilers in compiler_list.items():
            if isinstance(compilers, list):
                for compiler in compilers:
                    cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation.exe --compiler "{compiler}" --sdk "mikrosdk_v2111" --installPrefix "{testPath}/generic_build"'
                    run_cmd(cmd)
            else:
                cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation.exe --isBareMetal "0" --compiler "{compilers}" --sdk "mikrosdk_v2111" --installPrefix "{testPath}/generic_build"'
                run_cmd(cmd)
        return

    for mcu in mcu_list:
        compilers, architecture = get_compilers(mcu, is_mcu=True)
        for compiler in compilers:
            cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation --isBareMetal "0" --compiler "{compiler}" --sdk "mikrosdk_v2111" --board "GENERIC_{architecture}_BOARD" --mcu "{mcu}" --installPrefix "{testPath}/mcu_build"'
            run_cmd(cmd)

    for board in board_list:
        compilers = get_compilers(board, is_mcu=False)
        for compiler in compilers:
            cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation --isBareMetal "0" --compiler "{compiler}" --sdk "mikrosdk_v2111" --board "{board}" --installPrefix "{testPath}/board_build"'
            run_cmd(cmd)

    for mcu_card in mcu_card_list:
        compilers = get_compilers(mcu_card, is_mcu=True)
        for compiler in compilers:
            cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation --isBareMetal "0" --compiler "{compiler}" --sdk "mikrosdk_v2111" --mcu "{mcu_card}" --installPrefix "{testPath}/mcu_card_build"'
            run_cmd(cmd)
    # cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation --isBareMetal "0" --compiler "mikrocavr" --sdk "mikrosdk_v2111" --mcu "ATMEGA2560" --installPrefix "{testPath}/mcu_card_build"'
    # output = subprocess.check_output(cmd, shell=True, text=True)
    # run_cmd(cmd)

def get_compilers(name, is_mcu=True):
    """Returns the list of compilers based on the given name and type."""
    if is_mcu:
        if any(substring in name for substring in ["ATSAM", "STM", "TM4C", "MK"]):
            return compiler_list["ARM"], "ARM"
        elif "GD32" in name:
            return compiler_list["RISCV"], "RISCV"
        elif "PIC32" in name:
            return compiler_list["PIC32"], "PIC32"
        elif any(substring in name for substring in ["dsPIC", "PIC24"]):
            return compiler_list["dsPIC"], "DSPIC"
        elif any(substring in name for substring in ["PIC18", "PIC16", "PIC12", "PIC10"]):
            return compiler_list["PIC"], "PIC"
        elif "AT" in name and "ATSAM" not in name:
            return compiler_list["AVR"], "AVR"
    else:
        for key in compiler_list:
            if key in name:
                return compiler_list[key] if isinstance(compiler_list[key], list) else [compiler_list[key]]
    return []

def get_latest_releases():
    """Fetches the two latest releases from the GitHub repository."""
    try:
        output = subprocess.check_output(
            ['git', 'tag', '--sort=-creatordate'],
            cwd=gitPath, text=True
        )
        tags = output.splitlines()
        return tags[:2]  # Return the two most recent tags
    except subprocess.CalledProcessError as e:
        print(f"Error fetching tags: {e}")
        return None, None

def get_changed_files():
    """Runs the git diff command and returns the list of changed files."""

    cmd = 'git pull'
    os.system(cmd)
    # latest, previous = get_latest_releases()
    # if not latest or not previous:
        # return []

    try:
        output = subprocess.check_output(
            # ['git', 'diff', '--name-only', previous, latest],
            ['git', 'diff', '--name-only', 'origin/main'],
            cwd=gitPath, text=True
        )
        return output.splitlines()
    except subprocess.CalledProcessError as e:
        print(f"Error running git diff: {e}")
        return []

def classify_changes(files):
    """Classifies changes into different CASEs."""

    case_1_paths = ["bsp/board/include/mcu_cards"]
    case_2_paths = ["bsp/board/include/boards"]
    case_3_paths = ["targets"]
    
    cmake_files = []
    other_files = []

    for file in files:
        file = file.replace('\\', '/')  # Ensure we handle paths correctly
        if any(file.startswith(prefix) for prefix in ["api", "cmake", "components", "drv", "hal", "middleware", "platform", "thirdparty"]):
            mcu_list = []
            board_list = []
            mcu_card_list = []
            return
        
        if any(file.startswith(path) for path in case_1_paths):
            folder_name = Path(file).parts[4]  # Adjusting for the new path depth
            if folder_name not in mcu_card_list:
                mcu_card_list.append(folder_name)
        
        if any(file.startswith(path) for path in case_2_paths):
            folder_name = Path(file).parts[4]  # Adjusting for the new path depth
            board_cmake_file = Path(gitPath) / 'bsp/board/include/boards' / folder_name / 'board.cmake'
            if board_cmake_file.exists():
                extract_board_name(board_cmake_file)
        
        if any(file.startswith(path) for path in case_3_paths):
            print("\033[92mWe are in case 3 line\033[0m")
            if file.endswith('CMakeLists.txt') or file.endswith('CMakeLists.cmake'):
                cmake_files.append(file)
            else:
                other_files.append(file)
    
    if cmake_files or other_files:
        for cmake_file in cmake_files:
            extract_regex(Path(cmake_file))

        for other_file in other_files:
            if other_file.endswith('.h'):
                handle_header_file(Path(other_file))
            else:
                print("\033[92mWe are in other_files\033[0m")
                folder_path = Path(other_file).parent
                check_and_extract_regex(folder_path)

def check_and_extract_regex(folder_path):
    """Checks and extracts regex from CMakeLists.txt or CMakeLists.cmake files in the given folder or its parents."""

    for iterations in range(2):
        cmake_file = folder_path / 'CMakeLists.txt'
        if cmake_file.exists():
            print("\033[92mWe found Cmake\033[0m")
            extract_regex(cmake_file)
            return
        cmake_file = folder_path / 'CMakeLists.cmake'
        if cmake_file.exists():
            extract_regex(cmake_file)
            return
        folder_path = folder_path.parent

def extract_regex(cmake_file):
    """Extracts and stores regex from the given cmake file."""

    try:
        with open(str(gitPath) + '/' + str(cmake_file), 'r') as file:
            content = file.read()
            # Find all matches for MCU_NAME MATCHES or MCU_NAME STREQUAL
            regexes = re.findall(r'\${[^}]*MCU[^}]*}\s+(?:MATCHES|STREQUAL)\s+"([^"]+)"', content)
            regex_list.extend(regexes)
    except Exception as e:
        print(f"Error reading {cmake_file}: {e}")

def extract_board_name(board_cmake_file):
    """Extracts the board name from the board.cmake file."""
    try:
        with open(board_cmake_file, 'r') as file:
            content = file.read()
            # Find all matches for _MSDK_BOARD_NAME_ STREQUAL "BOARD_NAME"
            board_names = re.findall(r'\${_MSDK_BOARD_NAME_}\s+STREQUAL\s+"([^"]+)"', content)
            for board_name in board_names:
                board_list.append(f'"_MSDK_BOARD_NAME_":"{board_name}"')
    except Exception as e:
        print(f"Error reading {board_cmake_file}: {e}")

def handle_header_file(header_file):
    """Handles header files to find MCU names or check corresponding CMake files."""
    if "common" in header_file.parts:
        obtain_mcu_name_from_path(header_file)
    elif "include" in header_file.parts:
        corresponding_src_folder = find_corresponding_src_folder(header_file)
        if corresponding_src_folder:
            check_and_extract_regex(corresponding_src_folder)

def obtain_mcu_name_from_path(header_file):
    """Obtains MCU name from the header file path."""
    try:
        path_parts = header_file.parts
        if 'arm' in path_parts or 'riscv' in path_parts:
            if 'STM32' in path_parts:
                idx = path_parts.index('STM32')
            elif 'NXP' in path_parts:
                idx = path_parts.index('NXP')
            elif 'TIVA' in path_parts:
                idx = path_parts.index('TIVA')
            else:
                idx = path_parts.index('GIGADEVICE')
            mcu_name = path_parts[idx + 1]
        else:
            if 'mcu_definitions' in path_parts:
                idx = path_parts.index('mcu_definitions')  
            else: 
                idx = path_parts.index('mcu_reg_addresses')
            mcu_name = path_parts[idx + 1]
        if mcu_name not in mcu_list:
            mcu_list.append(mcu_name)
    except ValueError as e:
        print(f"Error obtaining MCU name from path: {e}")

def find_corresponding_src_folder(header_file):
    """Finds the corresponding src folder for a given header file in include folder."""
    try:
        parts = list(header_file.parts)
        include_index = parts.index('include')
        parts[include_index] = 'src'
        src_path = Path(*parts).parent
        if src_path.exists():
            return src_path
    except ValueError as e:
        print(f"Error finding corresponding src folder: {e}")
    return None

def regexp(expr, item):
    """Define a REGEXP function for SQLite."""
    reg = re.compile(expr)
    return reg.search(item) is not None

def query_database():
    """Queries the database to update mcu_card_list, board_list, and mcu_list."""
    conn = sqlite3.connect(dbPath)
    conn.create_function("REGEXP", 2, regexp)
    cursor = conn.cursor()

    # Update mcu_card_list
    new_mcu_card_list = []
    for mcu_card in mcu_card_list:
        mcu_card_upper = mcu_card.upper()
        cursor.execute(f"""
            SELECT device_uid
            FROM SDKToDevice
            WHERE sdk_uid = 'mikrosdk_v2111'
            AND device_uid REGEXP ?;
        """, (mcu_card_upper,))
        rows = cursor.fetchall()
        if rows:
            new_mcu_card_list.extend([row[0] for row in rows])
        else:
            unused.append(mcu_card)
    mcu_card_list[:] = list(set(new_mcu_card_list))

    # Update board_list
    new_board_list = []
    for board in board_list:
        cursor.execute(f"""
            SELECT uid
            FROM Boards
            WHERE sdk_config REGEXP ?;
        """, (board,))
        rows = cursor.fetchall()
        if rows:
            new_board_list.extend([row[0] for row in rows])
        else:
            unused.append(board)
    board_list[:] = list(set(new_board_list))

    # Update mcu_list based on regex_list
    new_mcu_list = []
    for regex in regex_list:
        if len(regex) > 1:  # Skip regexes with only one letter
            cursor.execute(f"""
                SELECT device_uid
                FROM SDKToDevice
                WHERE sdk_uid = 'mikrosdk_v2111'
                AND device_uid REGEXP ?;
            """, (regex,))
            rows = cursor.fetchall()
            if rows:
                new_mcu_list.extend([row[0] for row in rows])
            else:
                unused.append(regex)
    mcu_list.extend([device for device in set(new_mcu_list) if device not in mcu_list])

    conn.close()

def write_results_to_file():
    """Writes the result list to a file, removing duplicates, and ensures testPath exists."""    
    with open(f'{testPath}/regex_list.txt', 'w+') as regex_list_file:
        for item in regex_list:
            regex_list_file.write(f"{item}\n")
    with open(f'{testPath}/board_list.txt', 'w+') as board_list_file:
        for item in board_list:
            board_list_file.write(f"{item}\n")
    with open(f'{testPath}/mcu_card_list.txt', 'w+') as mcu_card_list_file:
        for item in mcu_card_list:
            mcu_card_list_file.write(f"{item}\n")
    with open(f'{testPath}/mcu_list.txt', 'w+') as mcu_list_file:
        for item in mcu_list:
            mcu_list_file.write(f"{item}\n")
    with open(f'{testPath}/unused.txt', 'w+') as unused_file:
        for item in unused:
            unused_file.write(f"{item}\n")


def main():
    os.makedirs(testPath, exist_ok=True)
    if os.getenv('BUILD_ALL') == '0':
        changed_files = get_changed_files()
        classify_changes(changed_files)
        query_database()
    # run_builds()
    write_results_to_file()

    print(f"Results have been written to {testPath}/regex_list.txt")
    print(f"Results have been written to {testPath}/mcu_list.txt")
    print(f"Results have been written to {testPath}/board_list.txt")
    print(f"Results have been written to {testPath}/mcu_card_list.txt")

    if build_failed:
        print("\033[91mBuild Failed!\033[0m")  # Red text
        # exit(1)
    else:
        print("\033[92mBuild Success!\033[0m")  # Green text

if __name__ == "__main__":
    main()
