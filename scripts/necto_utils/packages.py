import re, os, json, subprocess, requests

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

def download_asset(asset_name):
    repo = os.environ['GITHUB_REPO']
    print(f"Downloading asset: {asset_name}...")

    headers = {
        'Authorization': f"token {os.environ['GITHUB_TOKEN']}",
        'Content-Type': 'application/octet-stream'
    }

    # Get latest release
    release_url = f"https://api.github.com/repos/{repo}/releases/latest"
    response = requests.get(release_url, headers=headers)
    response.raise_for_status()
    release_id = response.json()['id']

    # Delete existing asset if present (handle pagination)
    page = 1
    while True:
        url = f"https://api.github.com/repos/{repo}/releases/{release_id}/assets?page={page}&per_page=30"
        resp = requests.get(url, headers=headers)
        resp.raise_for_status()
        assets = resp.json()

        if not assets:
            break

        for asset in assets:
            if asset['name'] == asset_name:
                print(f"Downloading existing asset: {asset_name}")
                resp = requests.get(asset['browser_download_url'], stream=True)
                with open(f'{asset_name.replace('.json', '')}_previous.json', 'wb') as f:
                    for chunk in resp.iter_content(chunk_size=8192):
                        f.write(chunk)
                break
        page += 1

def upload_release_asset(asset_path, installer, verification_handler):
    if 'results' in asset_path:
        asset_name = f"results_{installer['installer_os']}_{verification_handler['triggered_time']}.html"
    else:
        asset_name = f"package_dependencies_{installer['installer_os']}.json"

    repo = os.environ['GITHUB_REPO']
    print(f"Preparing to upload asset: {asset_name}...")

    headers = {
        'Authorization': f"token {os.environ['GITHUB_TOKEN']}",
        'Content-Type': 'application/octet-stream'
    }

    # Get latest release
    release_url = f"https://api.github.com/repos/{repo}/releases/latest"
    response = requests.get(release_url, headers=headers)
    response.raise_for_status()
    release_id = response.json()['id']

    # Delete existing asset if present (handle pagination)
    page = 1
    while True:
        url = f"https://api.github.com/repos/{repo}/releases/{release_id}/assets?page={page}&per_page=30"
        resp = requests.get(url, headers=headers)
        resp.raise_for_status()
        assets = resp.json()

        if not assets:
            break

        for asset in assets:
            if asset['name'] == asset_name:
                delete_url = asset['url']
                print(f"Deleting existing asset: {asset_name}")
                del_resp = requests.delete(delete_url, headers=headers)
                del_resp.raise_for_status()
                print(f"Asset deleted: {asset_name}")
                break
        page += 1

    # Upload new asset
    upload_url = f"https://uploads.github.com/repos/{repo}/releases/{release_id}/assets?name={asset_name}"
    with open(asset_path, 'rb') as f:
        data = f.read()
    upload_resp = requests.post(upload_url, headers=headers, data=data)
    upload_resp.raise_for_status()
    result = upload_resp.json()

    print(f"Upload completed for: {asset_name}.")
    return result['browser_download_url']

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
        # print(line)
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
            print(f'Installing package: {package} ({package_counter + 1}/{len(verification_handler)})')
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

    if len(passed_packages):
        passed_packages[0] = '"' + passed_packages[0]
        passed_packages[-1] = passed_packages[-1] + '"'
    if len(failed_packages):
        failed_packages[0] = '"' + failed_packages[0]
        failed_packages[-1] = failed_packages[-1] + '"'

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    results_contents = results_contents.replace(
        'STEP2_PASSED', '", "'.join(passed_packages)
    ).replace(
        'STEP2_FAILED', '", "'.join(failed_packages)
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    if len(error_lines):
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 2 for {installer['installer_os']}',
            f':firecracker: Step 2 (install all NECTO packages) for {installer['installer_os']} failed!\n{'\n'.join(error_lines)}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Fail the job immediately.
        exit(1)
    else:
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 2 for {installer['installer_os']}',
            f':white_check_mark: Step 2 (install all NECTO packages) for {installer['installer_os']} passsed!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

# Function for creating dependencies file.
def create_dependencies_file(installer, verification_handler):
    with open('package_dependencies.json', 'w') as dependency_file:
        json.dump(verification_handler, dependency_file, indent=4)

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    download_asset(f'package_dependencies_{installer['installer_os']}.json')
    with open (f'package_dependencies_{installer['installer_os']}_previous.json', 'r') as previous_dependencies_file:
        previous_dependencies = json.load(previous_dependencies_file)

    upload_release_asset(f'package_dependencies.json', installer, verification_handler)

    previous_dependencies_string = json.dumps(previous_dependencies, ensure_ascii=False, indent=None, separators=(',', ':')).replace('</', '<\\/')
    current_dependencies_string = json.dumps(verification_handler, ensure_ascii=False, indent=None, separators=(',', ':')).replace('</', '<\\/')

    results_contents = results_contents.replace(
        'STEP3_PASSED', '"package_dependencies.json", "package_dependencies_previous.json"'
    ).replace(
        'STEP3_FAILED', ''
    ).replace(
        'PREVIOUS_PACKAGES_DATA', previous_dependencies_string
    ).replace(
        'CURRENT_PACKAGES_DATA', current_dependencies_string
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    # Update the message file.
    message_content = message_content.replace(
        f':firecracker: Script failed to execute Step 3 for {installer['installer_os']}',
        f':white_check_mark: Step 3 (creating dependency file) for {installer['installer_os']} passsed!'
    )
    with open('message.txt', 'w') as message_file:
        message_file.write(message_content)

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
                        if '.cmake' in file and 'coreUtils' not in file and 'Config' not in file and 'step' not in file and 'Headers' not in file and 'm0' not in file and 'm7' not in file:
                            # We have 2 .cmake files - 1 for core files, 1 for delays.
                            # We should check both.
                            failed_mcus.extend(verification_handler[package])
                            with open(os.path.join(root, file), 'r') as package_cmake:
                                cmake_lines = package_cmake.readlines()
                            for line in cmake_lines:
                                if '${MCU_NAME}' in line:
                                    regex = re.findall(r'"([^"]*)"'.lower(), line.lower())
                                    if len(regex):
                                        # Check if mcu found the matching regex.
                                        for mcu in verification_handler[package]:
                                            for subregex in regex:
                                                if re.match(subregex.lower(), mcu.lower()):
                                                    # If match found - remove the mcu from the package dependency.
                                                    if mcu in failed_mcus:
                                                        failed_mcus.remove(mcu)
                                                    if mcu not in passed_mcus:
                                                        passed_mcus.append(mcu)

    if len(passed_mcus):
        passed_mcus[0] = '"' + passed_mcus[0]
        passed_mcus[-1] = passed_mcus[-1] + '"'
    if len(failed_mcus):
        failed_mcus[0] = '"' + failed_mcus[0]
        failed_mcus[-1] = failed_mcus[-1] + '"'

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    results_contents = results_contents.replace(
        'STEP4_PASSED', '", "'.join(passed_mcus)
    ).replace(
        'STEP4_FAILED', '", "'.join(failed_mcus)
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    if len(failed_mcus):
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 4 for {installer['installer_os']}',
            f':firecracker: Step 4 (MCU-to-CORE dependencies) for {installer['installer_os']} failed!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Fail the job immediately.
        exit(1)
    else:
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 4 for {installer['installer_os']}',
            f':white_check_mark: Step 4 (MCU-to-CORE dependencies) for {installer['installer_os']} passsed!'
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
                                    if mcu not in passed_mcus:
                                        passed_mcus.append(mcu)

    if len(passed_mcus):
        passed_mcus[0] = '"' + passed_mcus[0]
        passed_mcus[-1] = passed_mcus[-1] + '"'
    if len(failed_mcus):
        failed_mcus[0] = '"' + failed_mcus[0]
        failed_mcus[-1] = failed_mcus[-1] + '"'

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    results_contents = results_contents.replace(
        'STEP5_PASSED', '", "'.join(passed_mcus)
    ).replace(
        'STEP5_FAILED', '", "'.join(failed_mcus)
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    if len(failed_mcus):
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 5 for {installer['installer_os']}',
            f':firecracker: Step 5 (MCU-to-CODEGRIP dependencies) for {installer['installer_os']} failed!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Fail the job immediately.
        exit(1)
    else:
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 5 for {installer['installer_os']}',
            f':white_check_mark: Step 5 (MCU-to-CODEGRIP dependencies) for {installer['installer_os']} passsed!'
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
                                    if mcu not in passed_mcus:
                                        passed_mcus.append(mcu)

    if len(passed_mcus):
        passed_mcus[0] = '"' + passed_mcus[0]
        passed_mcus[-1] = passed_mcus[-1] + '"'
    if len(failed_mcus):
        failed_mcus[0] = '"' + failed_mcus[0]
        failed_mcus[-1] = failed_mcus[-1] + '"'

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    results_contents = results_contents.replace(
        'STEP6_PASSED', '", "'.join(passed_mcus)
    ).replace(
        'STEP6_FAILED', '", "'.join(failed_mcus)
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    if len(failed_mcus):
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 6 for {installer['installer_os']}',
            f':firecracker: Step 6 (MCU-to-MCHP dependencies) for {installer['installer_os']} failed!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Fail the job immediately.
        exit(1)
    else:
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 6 for {installer['installer_os']}',
            f':white_check_mark: Step 6 (MCU-to-MCHP dependencies) for {installer['installer_os']} passsed!'
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
                                    if board not in passed_boards:
                                        passed_boards.append(board)

    if len(passed_boards):
        passed_boards[0] = '"' + passed_boards[0]
        passed_boards[-1] = passed_boards[-1] + '"'
    if len(failed_boards):
        failed_boards[0] = '"' + failed_boards[0]
        failed_boards[-1] = failed_boards[-1] + '"'

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    results_contents = results_contents.replace(
        'STEP7_PASSED', '", "'.join(passed_boards)
    ).replace(
        'STEP7_FAILED', '", "'.join(failed_boards)
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    if len(failed_boards):
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 7 for {installer['installer_os']}',
            f':firecracker: Step 7 (BOARD-to-BSP dependencies) for {installer['installer_os']} failed!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Fail the job immediately.
        exit(1)
    else:
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 7 for {installer['installer_os']}',
            f':white_check_mark: Step 7 (BOARD-to-BSP dependencies) for {installer['installer_os']} passsed!'
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
                        if package not in passed_cards:
                            passed_cards.append(package)

    if len(passed_cards):
        passed_cards[0] = '"' + passed_cards[0]
        passed_cards[-1] = passed_cards[-1] + '"'
    if len(failed_cards):
        failed_cards[0] = '"' + failed_cards[0]
        failed_cards[-1] = failed_cards[-1] + '"'

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'r') as results_html:
        results_contents = results_html.read()

    results_contents = results_contents.replace(
        'STEP8_PASSED', '", "'.join(passed_cards)
    ).replace(
        'STEP8_FAILED', '", "'.join(failed_cards)
    )

    with open(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), 'w') as results_html:
        results_html.write(results_contents)

    html_link = upload_release_asset(os.path.join(os.getcwd(), 'scripts', 'necto_utils', 'results.html'), installer, verification_handler)

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    message_content = message_content.replace('HTML_LINK', html_link)

    if len(failed_cards):
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 8 for {installer['installer_os']}',
            f':firecracker: Step 8 (CARD-to-BSP dependencies) for {installer['installer_os']} failed!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Fail the job immediately.
        exit(1)
    else:
        # Update the message file.
        message_content = message_content.replace(
            f':firecracker: Script failed to execute Step 8 for {installer['installer_os']}',
            f':white_check_mark: Step 8 (CARD-to-BSP dependencies) for {installer['installer_os']} passsed!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)
