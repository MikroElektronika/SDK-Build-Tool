import re, os, json, subprocess

from elasticsearch import Elasticsearch

category_filter = [
    'MCU Package',
    'CODEGRIP Device Pack',
    'Board Package',
    'Card Package',
    'MPLAB Device Pack'
]

# Counter for NECTO packages installation.
previous_prog = 101
installation_downloading = 'downloading'

def fetch_current_indexed_packages(es : Elasticsearch, index_name):
    # Search query to use
    query_search = {
        "size": 5000,
        "query": {
            "match_all": {}
        }
    }

    # Search the base with provided query
    num_of_retries = 1
    while num_of_retries <= 10:
        try:
            response = es.search(index=index_name, body=query_search)
            if not response['timed_out']:
                break
        except:
            print("Executing search query - retry number %i" % num_of_retries)
        num_of_retries += 1

    all_packages = []
    for eachHit in response['hits']['hits']:
        if not 'name' in eachHit['_source']:
            continue
        if 'category' in eachHit['_source']:
            if eachHit['_source']['category'] in category_filter:
                all_packages.append(eachHit['_source'])

    # Sort all_packages alphabetically by the 'name' field
    all_packages.sort(key=lambda x: x['name'])

    return all_packages

# Function for printing only the installation progress information.
def parse_and_print_progress(line):
    global previous_prog, installation_downloading

    try:
        # Fetch the installation progress info from the stdout line.
        # Example of the stdout line:
        # {"jsonrpc": "2.0", "method": "install_progress", "params": {"status": "overall_progress", "package": "codegrip_pack_ra4m1", "progress": 33}, "id": 675}Content-Length: 142
        obj = json.loads(line.split('Content-Length:')[0])
        if obj.get('method') == 'install_progress':
            params = obj.get('params', {})
            pkg = params.get('package')
            prog = params.get('progress')
            if pkg is not None and prog is not None and previous_prog != prog:
                previous_prog = prog
                if prog == 100:
                    print(f'\033[32m[{pkg}] {installation_downloading} progress: {prog}%\033[32m')
                    if installation_downloading == 'downloading':
                        installation_downloading = 'installation'
                    else:
                        installation_downloading = 'downloading'
    except json.JSONDecodeError:
        # Not a JSON line, just print nothing.
        return

# Function for executing the commands.
def run_command(cmd):
    print(f'\033[36mRunning: {cmd}\033[36m')
    proc = subprocess.Popen(
        cmd,
        shell=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True
    )

    # Parse the line to display the installation progress.
    for line in proc.stdout:
        parse_and_print_progress(line)
    proc.wait()

    # Display the error if something fails.
    if proc.returncode != 0:
        raise RuntimeError(f'\033[31mCommand failed with exit code {proc.returncode}: {cmd}.\033[31m')

# Function for installing NECTO packages.
def install_packages(installer, verification_handler):
    error_lines = []

    # Fetch all the packages that are being checked from kibana.
    es = Elasticsearch([os.environ['ES_HOST']], http_auth=(os.environ['ES_USER'], os.environ['ES_PASSWORD']))
    index = os.environ['ES_INDEX_LIVE']
    indexed_items = fetch_current_indexed_packages(es, index)

    package_counter = 0
    failed_packages = []
    passed_packages = []

    # Fetch package info from kibana.
    for package in verification_handler:
        num_of_retries = 0
        install_location = ''
        # Find the install location for the package based on kibana data.
        for item in indexed_items:
            if item['name'] == package:
                if install_location == '':
                    # If it is the first met matching kibana item - proceed.
                    install_location = item['install_location'].replace('%APPLICATION_DATA_DIR%', installer['necto_path_app_data'])
                else:
                    # If it is not the first met matching kibana item - it is an error.
                    error_lines.append(f' - {package} has multiple instances in kibana - remove the unused ones.')
                    failed_packages.append(package)
                    install_location = ''
        if install_location == '':
            # If there is no install location data in kibana - remember the package.
            error_lines.append(f'- No info for {package} in kibana.\n')
            failed_packages.append(package)
        else:
            # Try to install the package 3 times.
            print(f'Installing package: {package} ({package_counter}/{len(verification_handler)})')
            while (num_of_retries < 3):
                run_command(f'"{installer['installer_path']}" installer --install-packages {package} {installer['necto_path']} {installer['necto_path_app_data']}')
                # Verify if the package has been installed.
                if os.path.exists(install_location):
                    print(f"\033[94mThe {package} package was downloaded successfully.\033[0m")
                    passed_packages.append(package)
                    break
                num_of_retries += 1

            # After the third try remember the package as it failed to be installed.
            if num_of_retries == 2:
                print(f'\033[91mPackage is not installed in {install_location} after 3 retries.\033[0m')
                error_lines.append(f'- Failed to install {package}.\n')
                failed_packages.append(package)

            package_counter += 1
            
    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    results_contents = results_contents.replace(
        'STEP2_PASSED', passed_packages
    ).replace(
        'STEP2_FAILED', failed_packages
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    if len(error_lines):
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 2 for {installer['installer_os']}',
            f':firecracker: Step 2 for {installer['installer_os']} failed:\n{'\n'.join(error_lines)}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Fail the job immediately.
        exit(1)
    else:
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 2 for {installer['installer_os']}',
            f':white_check_mark: Step 2 for {installer['installer_os']} passsed: All NECTO packages are installed successfully!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

# Function for creating dependencies file.
def create_dependencies_file(installer, verification_handler):
    with open('package_dependencies.json', 'w') as dependency_file:
        json.dump(verification_handler, dependency_file, indent=4)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    # Update the message file.
    message_content = message_content.replace(
        f':firecracker: Script failed to execute Step 3 for {installer['installer_os']}',
        f':white_check_mark: Step 3 for {installer['installer_os']} passsed: dependency file is generated successfully!'
    )
    with open('message.txt', 'w') as message_file:
        message_file.write(message_content)
            
    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    results_contents = results_contents.replace(
        'STEP3_PASSED', 'package_dependencies.json'
    ).replace(
        'STEP3_FAILED', []
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

# Function for checking MCU-to-CORE dependancies.
def check_mcu_dependencies(installer, verification_handler):
    with open('package_dependencies.json', 'r') as dependency_file:
        verification_handler = json.load(dependency_file)

    # Fetch all the packages that are being checked from kibana.
    es = Elasticsearch([os.environ['ES_HOST']], http_auth=(os.environ['ES_USER'], os.environ['ES_PASSWORD']))
    index = os.environ['ES_INDEX_LIVE']
    indexed_items = fetch_current_indexed_packages(es, index)

    failed_mcus = []
    passed_mcus = []

    for package in verification_handler:
        # Find the install location for the package based on kibana data.
        for item in indexed_items:
            if item['name'] == package and item['category'] == 'MCU Package':
                install_location = item['install_location'].replace('%APPLICATION_DATA_DIR%', installer['necto_path_app_data'])
                # Find cmake file with the MCU regex.
                for root, _, files in os.walk(install_location):
                    for file in files:
                        if '.cmake' in file and 'coreUtils' not in file and 'Config' not in file and 'step' not in file:
                            # We have 2 .cmake files - 1 for core files, 1 for delays.
                            # We should check both.
                            failed_mcus.extend(verification_handler[package])
                            with open(os.path.join(root, file), 'r') as package_cmake:
                                cmake_lines = package_cmake.readlines()
                            for line in cmake_lines:
                                if '${MCU_NAME}' in line:
                                    regex = re.findall(r'"([^"]*)"', line)
                                    if len(regex):
                                        # Check if mcu found the matching regex.
                                        for mcu in verification_handler[package]:
                                            if re.match(regex[0], mcu):
                                                # If match found - remove the mcu from the package dependency.
                                                if mcu in failed_mcus:
                                                    failed_mcus.remove(mcu)
                                                if mcu not in passed_mcus:
                                                    passed_mcus.append(mcu)

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    results_contents = results_contents.replace(
        'STEP4_PASSED', passed_mcus
    ).replace(
        'STEP4_FAILED', failed_mcus
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    if len(failed_mcus):
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 4 for {installer['installer_os']}',
            f':firecracker: Step 4 for {installer['installer_os']} failed for the following MCUs (MCU-to-CORE regexes are missing):\n - {'\n - '.join(failed_mcus)}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Fail the job immediately.
        exit(1)
    else:
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 4 for {installer['installer_os']}',
            f':white_check_mark: Step 4 for {installer['installer_os']} passsed: All MCUs have corresponding regexes in CMake files!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

# Function for checking MCU-to-CODEGRIP dependancies.
def check_codegrip_dependencies(installer, verification_handler):
    with open('package_dependencies.json', 'r') as dependency_file:
        verification_handler = json.load(dependency_file)

    # Fetch all the packages that are being checked from kibana.
    es = Elasticsearch([os.environ['ES_HOST']], http_auth=(os.environ['ES_USER'], os.environ['ES_PASSWORD']))
    index = os.environ['ES_INDEX_LIVE']
    indexed_items = fetch_current_indexed_packages(es, index)

    failed_mcus = []
    passed_mcus = []

    for package in verification_handler:
        # Find the install location for the package based on kibana data.
        for item in indexed_items:
            if item['name'] == package and item['category'] == 'CODEGRIP Device Pack':
                install_location = item['install_location'].replace('%APPLICATION_DATA_DIR%', installer['necto_path_app_data'])
                failed_mcus.extend(verification_handler[package])
                # Find .mcu file with the MCU name.
                for root, _, files in os.walk(install_location):
                    for file in files:
                        for mcu in verification_handler[package]:
                            if file.replace('.mcu', '').lower() == mcu.lower():
                                if mcu in failed_mcus:
                                    failed_mcus.remove(mcu)
                                    passed_mcus.append(mcu)
                                    
    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    results_contents = results_contents.replace(
        'STEP5_PASSED', passed_mcus
    ).replace(
        'STEP5_FAILED', failed_mcus
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    if len(failed_mcus):
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 5 for {installer['installer_os']}',
            f':firecracker: Step 5 for {installer['installer_os']} failed for the following MCUs (MCU-to-CODEGRIP files are missing):\n - {'\n - '.join(failed_mcus)}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Fail the job immediately.
        exit(1)
    else:
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 5 for {installer['installer_os']}',
            f':white_check_mark: Step 5 for {installer['installer_os']} passsed: All MCUs have corresponding files in CODEGRIP packs!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

# Function for checking MCU-to-MCHP dependencies.
def check_mchp_dependencies(installer, verification_handler):
    with open('package_dependencies.json', 'r') as dependency_file:
        verification_handler = json.load(dependency_file)

    # Fetch all the packages that are being checked from kibana.
    es = Elasticsearch([os.environ['ES_HOST']], http_auth=(os.environ['ES_USER'], os.environ['ES_PASSWORD']))
    index = os.environ['ES_INDEX_LIVE']
    indexed_items = fetch_current_indexed_packages(es, index)

    failed_mcus = []
    passed_mcus = []

    for package in verification_handler:
        # Find the install location for the package based on kibana data.
        for item in indexed_items:
            if item['name'] == package and item['category'] == 'MPLAB Device Pack':
                install_location = item['install_location'].replace('%APPLICATION_DATA_DIR%', installer['necto_path_app_data'])
                failed_mcus.extend(verification_handler[package])
                # Find .mcu file with the MCU name.
                for root, _, files in os.walk(install_location):
                    for file in files:
                        for mcu in verification_handler[package]:
                            if file.replace('.PIC', '').lower() == mcu.lower():
                                if mcu in failed_mcus:
                                    failed_mcus.remove(mcu)
                                    passed_mcus.append(mcu)
                                    
    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    results_contents = results_contents.replace(
        'STEP6_PASSED', passed_mcus
    ).replace(
        'STEP6_FAILED', failed_mcus
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    if len(failed_mcus):
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 6 for {installer['installer_os']}',
            f':firecracker: Step 6 for {installer['installer_os']} failed for the following MCUs (MCU-to-MCHP files are missing):\n - {'\n - '.join(failed_mcus)}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Fail the job immediately.
        exit(1)
    else:
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 6 for {installer['installer_os']}',
            f':white_check_mark: Step 6 for {installer['installer_os']} passsed: All MCUs have corresponding files in MCHP files!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

# Function for checking BOARD-to-BSP dependencies.
def check_board_dependencies(installer, verification_handler):
    with open('package_dependencies.json', 'r') as dependency_file:
        verification_handler = json.load(dependency_file)

    # Fetch all the packages that are being checked from kibana.
    es = Elasticsearch([os.environ['ES_HOST']], http_auth=(os.environ['ES_USER'], os.environ['ES_PASSWORD']))
    index = os.environ['ES_INDEX_LIVE']
    indexed_items = fetch_current_indexed_packages(es, index)

    failed_boards = []
    passed_boards = []

    for package in verification_handler:
        # Find the install location for the package based on kibana data.
        for item in indexed_items:
            if item['name'] == package and item['category'] == 'Board Package':
                install_location = item['install_location'].replace('%APPLICATION_DATA_DIR%', installer['necto_path_app_data'])
                failed_boards.extend(verification_handler[package])
                # Find .mcu file with the MCU name.
                for root, _, files in os.walk(install_location):
                    for file in files:
                        if '.cmake' in file:
                            with open(os.path.join(root, file), 'r') as bsp_header:
                                bsp_content = bsp_header.read()
                            for board in verification_handler[package]:
                                if board in bsp_content and board in failed_boards:
                                    failed_boards.remove(board)
                                    passed_boards.append(board)
                                    
    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    results_contents = results_contents.replace(
        'STEP7_PASSED', passed_boards
    ).replace(
        'STEP7_FAILED', failed_boards
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    if len(failed_boards):
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 7 for {installer['installer_os']}',
            f':firecracker: Step 7 for {installer['installer_os']} failed for the following Boards (BOARD-to-BSP regexes are incorrect):\n - {'\n - '.join(failed_boards)}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Fail the job immediately.
        exit(1)
    else:
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 7 for {installer['installer_os']}',
            f':white_check_mark: Step 7 for {installer['installer_os']} passsed: All Boards have corresponding regexes in CMake files!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

# Function for checking CARD-to-BSP dependencies.
def check_card_dependencies(installer, verification_handler):
    with open('package_dependencies.json', 'r') as dependency_file:
        verification_handler = json.load(dependency_file)

    # Fetch all the packages that are being checked from kibana.
    es = Elasticsearch([os.environ['ES_HOST']], http_auth=(os.environ['ES_USER'], os.environ['ES_PASSWORD']))
    index = os.environ['ES_INDEX_LIVE']
    indexed_items = fetch_current_indexed_packages(es, index)

    failed_cards = []
    passed_cards = []

    for package in verification_handler:
        # Find the install location for the package based on kibana data.
        for item in indexed_items:
            if item['name'] == package and item['category'] == 'Card Package':
                install_location = item['install_location'].replace('%APPLICATION_DATA_DIR%', installer['necto_path_app_data'])
                failed_cards.append(package)
                # Find .mcu file with the MCU name.
                for card in verification_handler[package]:
                    if card.lower() in install_location:
                        failed_cards.remove(package)
                        passed_cards.append(package)
                        
    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    results_contents = results_contents.replace(
        'STEP8_PASSED', passed_cards
    ).replace(
        'STEP8_FAILED', failed_cards
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    if len(failed_cards):
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 8 for {installer['installer_os']}',
            f':firecracker: Step 8 for {installer['installer_os']} failed for the following Cards (CARD-to-BSP files are missing):\n - {'\n - '.join(failed_cards)}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Fail the job immediately.
        exit(1)
    else:
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 8 for {installer['installer_os']}',
            f':white_check_mark: Step 8 for {installer['installer_os']} passsed: All Cards have corresponding folders!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)
