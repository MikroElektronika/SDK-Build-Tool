#!/usr/bin/env python3
import os, argparse

import necto_utils.necto as necto
import necto_utils.packages as packages
import necto_utils.database as database

def main():
    parser = argparse.ArgumentParser(description="Run Recursive Build Tool.")
    parser.add_argument("step",
        help = """
        Define which step of NECTO check is currently being executed:
        step1   - Check installation of mandatory NECTO packages;
        step2   - Check installation of CORE, BSP, CODEGRIP and MCHP NECTO packages;
        step3   - Create dependencies between MCUs, Boards, Cards and packages from step2;
        step4   - Check if all CORE-to-MCU dependencies are correct;
        step5   - Check if all CODEGRIP-to-MCU dependencies are correct;
        step6   - Check if all MCHP-to-MCU dependencies are correct;
        step7   - Check if all Board-to-BSP dependencies are correct;
        step8   - Check if all Card-to-BSP dependencies are correct.
        """,
        type = str
    )
    args = parser.parse_args()

    verification_handler = {}
    installer = necto.define_paths()
    db_path = os.path.join(installer['necto_path_app_data'], 'databases/necto_db.db')

    if args.step == 'step1':
        # Create an initial message file.
        with open('message.txt', 'w') as message_file:
            message_file.write(f'''\
# :mikroe: NECTO check status:
:firecracker: Script failed to execute Step 1 for {installer['installer_os']}
:underage: Step 2 for {installer['installer_os']} not executed
:underage: Step 3 for {installer['installer_os']} not executed
:underage: Step 4 for {installer['installer_os']} not executed
:underage: Step 5 for {installer['installer_os']} not executed
:underage: Step 6 for {installer['installer_os']} not executed
:underage: Step 7 for {installer['installer_os']} not executed
:underage: Step 8 for {installer['installer_os']} not executed

Check out detailed marvelously-shaped information:
[Results in HTML](HTML_LINK)
    ''')

        # Verify NECTO installation.
        necto.install_necto(installer)

    if args.step == 'step2':
        # Update the message file.
        with open('message.txt', 'r') as message_file:
            message_content = message_file.read()
        message_content = message_content.replace(
            f':underage: Step 2 for {installer['installer_os']} not executed',
            f':firecracker: Script failed to execute Step 2 for {installer['installer_os']}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Verify NECTO packages installations.
        sdk_version = database.get_latest_sdk_version(db_path)
        database.query_packages(db_path, sdk_version, verification_handler)
        packages.install_packages(installer, verification_handler)

    if args.step == 'step3':
        # Update the message file.
        with open('message.txt', 'r') as message_file:
            message_content = message_file.read()
        message_content = message_content.replace(
            f':underage: Step 3 for {installer['installer_os']} not executed',
            f':firecracker: Script failed to execute Step 3 for {installer['installer_os']}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)

        # Create the package dependencies file.
        sdk_version = database.get_latest_sdk_version(db_path)
        database.query_packages(db_path, sdk_version, verification_handler)
        packages.create_dependencies_file(installer, verification_handler)

    if args.step == 'step4':
        # Update the message file.
        with open('message.txt', 'r') as message_file:
            message_content = message_file.read()
        message_content = message_content.replace(
            f':underage: Step 4 for {installer['installer_os']} not executed',
            f':firecracker: Script failed to execute Step 4 for {installer['installer_os']}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)
        packages.check_mcu_dependencies(installer, verification_handler)

    if args.step == 'step5':
        # Update the message file.
        with open('message.txt', 'r') as message_file:
            message_content = message_file.read()
        message_content = message_content.replace(
            f':underage: Step 5 for {installer['installer_os']} not executed',
            f':firecracker: Script failed to execute Step 5 for {installer['installer_os']}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)
        packages.check_codegrip_dependencies(installer, verification_handler)

    if args.step == 'step6':
        # Update the message file.
        with open('message.txt', 'r') as message_file:
            message_content = message_file.read()
        message_content = message_content.replace(
            f':underage: Step 6 for {installer['installer_os']} not executed',
            f':firecracker: Script failed to execute Step 6 for {installer['installer_os']}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)
        packages.check_mchp_dependencies(installer, verification_handler)

    if args.step == 'step7':
        # Update the message file.
        with open('message.txt', 'r') as message_file:
            message_content = message_file.read()
        message_content = message_content.replace(
            f':underage: Step 7 for {installer['installer_os']} not executed',
            f':firecracker: Script failed to execute Step 7 for {installer['installer_os']}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)
        packages.check_board_dependencies(installer, verification_handler)

    if args.step == 'step8':
        # Update the message file.
        with open('message.txt', 'r') as message_file:
            message_content = message_file.read()
        message_content = message_content.replace(
            f':underage: Step 8 for {installer['installer_os']} not executed',
            f':firecracker: Script failed to execute Step 8 for {installer['installer_os']}'
        )
        with open('message.txt', 'w') as message_file:
            message_file.write(message_content)
        packages.check_card_dependencies(installer, verification_handler)

        print(message_content)

if __name__ == '__main__':
    main()
