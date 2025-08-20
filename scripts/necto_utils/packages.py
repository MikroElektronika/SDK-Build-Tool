import os, json, subprocess

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
        # Not a JSON line, just print raw.
        print(line.strip())

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

def install_packages(installer, verification_handler):
    error_lines = []

    es = Elasticsearch([os.environ['ES_HOST']], http_auth=(os.environ['ES_USER'], os.environ['ES_PASSWORD']))

    index = os.environ['ES_INDEX_LIVE']

    indexed_items = fetch_current_indexed_packages(es, index)

    package_counter = 0

    # Fetch package info from kibana
    for package in verification_handler:
        num_of_retries = 0
        install_location = ''
        # Open and load the SDK JSON file
        for item in indexed_items:
            if item['name'] == package:
                install_location = item['install_location'].replace('%APPLICATION_DATA_DIR%', installer['necto_path_app_data'])
                break
        if install_location == '':
            print(f'\033[91mERROR! For package {package} there is no info in kibana.\033[0m')
            error_lines.append(f'- No info for {package} in kibana.\n')

        print(f'Installing package: {package} ({package_counter}/{len(verification_handler)})')
        while (num_of_retries < 3):
            run_command(f'"{installer['installer_path']}" installer --install-packages {package} {installer['necto_path']} {installer['necto_path_app_data']}')
            if os.path.exists(install_location):
                print(f"\033[94mThe {package} package was downloaded successfully.\033[0m")
                break
            num_of_retries += 1

        if num_of_retries == 2:
            print(f'\033[91mPackage is not installed in {install_location} after 3 retries.\033[0m')
            error_lines.append(f'- Failed to install {package}.\n')

        package_counter += 1

    with open('message.txt', 'r') as message_file:
        message_content = message_file.read()

    if len(error_lines):
        message_content = message_content.replace(
            f':underage: Step 2 for {installer['installer_os']} not executed',
            f':firecracker: Step 2 for {installer['installer_os']} failed:\n{'\n'.join(error_lines)}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)
        exit(1)
    else:
        message_content = message_content.replace(
            f':underage: Step 2 for {installer['installer_os']} not executed',
            f':white_check_mark: Step 2 for {installer['installer_os']} passsed: All NECTO packages are installed successfully!'
        )
        with open('message.txt', 'w') as message_file:
            message_file.writelines(message_content)

def create_dependencies_file(verification_handler):
    with open('package_dependencies.json', 'w') as dependency_file:
        json.dump(verification_handler, dependency_file, indent=4)

