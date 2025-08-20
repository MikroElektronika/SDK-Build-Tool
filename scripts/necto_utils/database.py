import sqlite3, re, json

# Define a REGEXP function for SQLite.
def regexp(expr, item):
    # Handle the case where item is None
    if item is None:
        return False

    # Compile the regular expression and search the item
    reg = re.compile(expr)
    return reg.search(item) is not None

# Extracts the latest mikroSDK version from the database file.
def get_latest_sdk_version(database_path):
    conn = sqlite3.connect(database_path)

    # Create REGEXP function for python script.
    conn.create_function("REGEXP", 2, regexp)
    cursor = conn.cursor()

    cursor.execute(f"""
        SELECT version
        FROM SDKs
        WHERE uid REGEXP "mikrosdk_v";
    """)
    rows = cursor.fetchall()
    if rows:
        latest_sdk = rows[0][0]
        for row in rows:
            if '-' in row[0]:
                continue
            if int(latest_sdk.split('.')[0]) < int(row[0].split('.')[0]):
                latest_sdk = row[0]
            elif int(latest_sdk.split('.')[1]) < int(row[0].split('.')[1]):
                latest_sdk = row[0]
            elif int(latest_sdk.split('.')[2]) < int(row[0].split('.')[2]):
                latest_sdk = row[0]

    cursor.execute(f"""
        SELECT uid
        FROM SDKs
        WHERE version IS "{latest_sdk}";
    """)
    row = cursor.fetchone()
    latest_sdk = row[0]

    return latest_sdk

def query_packages(db_path, sdk_version, verification_handler):
    # Connect to the database.
    conn = sqlite3.connect(db_path)
    conn.create_function("REGEXP", 2, regexp)
    cursor = conn.cursor()

    # Step 1 - query the MCU packages.
    cursor.execute(f"""
        SELECT DISTINCT Devices.uid, Devices.installer_package FROM Devices
        INNER JOIN CompilerToDevice ON Devices.uid = CompilerToDevice.device_uid
        INNER JOIN SDKToDevice ON Devices.uid = SDKToDevice.device_uid
        WHERE SDKToDevice.sdk_uid = '{sdk_version}'
        AND SDKToDevice.device_uid NOT LIKE "%\\_%" ESCAPE "\\";
    """)
    rows = cursor.fetchall()

    for row in rows:
        # Skip MCUs without installer_package
        if not row[1]:
            continue
        installer_package = json.loads(row[1])
        for compiler in installer_package:
            package = installer_package[compiler]
            # Create the MCU-to-CORE dependency.
            if package not in verification_handler:
                verification_handler.update({package: []})
            if row[0] not in verification_handler[package]:
                verification_handler[package].append(row[0])

    # Step 2 - query the Card packages.
    cursor.execute(f"""
        SELECT DISTINCT Devices.sdk_config, Devices.installer_package FROM Devices
        INNER JOIN CompilerToDevice ON Devices.uid = CompilerToDevice.device_uid
        INNER JOIN SDKToDevice ON Devices.uid = SDKToDevice.device_uid
        WHERE SDKToDevice.sdk_uid = '{sdk_version}'
        AND SDKToDevice.device_uid LIKE "%\\_%" ESCAPE "\\";
    """)
    rows = cursor.fetchall()

    for row in rows:
        # Skip CEC and MSP cards.
        if not row[1]:
            continue
        sdk_config = json.loads(row[0])
        msdk_mcu_card_name = sdk_config['_MSDK_MCU_CARD_NAME_']
        installer_package = json.loads(row[1])
        package = installer_package['package']
        # Create the Card-to-BSP dependency.
        if package not in verification_handler:
            verification_handler.update({package: []})
        if msdk_mcu_card_name not in verification_handler[package]:
            verification_handler[package].append(msdk_mcu_card_name)

    # Step 3 - query the Board packages.
    cursor.execute(f"""
        SELECT DISTINCT sdk_config, installer_package FROM Boards;
    """)
    rows = cursor.fetchall()

    for row in rows:
        # Skip Generic Boards.
        if not row[1]:
            continue
        sdk_config = json.loads(row[0])
        msdk_board_name = sdk_config['_MSDK_BOARD_NAME_']
        installer_package = json.loads(row[1])
        package = installer_package['package']
        # Create the Board-to-BSP dependency.
        if package not in verification_handler:
            verification_handler.update({package: []})
        if msdk_board_name not in verification_handler[package]:
            verification_handler[package].append(msdk_board_name)

    # Step 4 - query the Prog packages.
    cursor.execute(f"""
        SELECT DISTINCT ProgrammerToDevice.device_uid, ProgrammerToDevice.device_support_package FROM ProgrammerToDevice
        INNER JOIN Devices ON ProgrammerToDevice.device_uid = Devices.uid
        INNER JOIN SDKToDevice ON Devices.uid = SDKToDevice.device_uid
        WHERE SDKToDevice.sdk_uid = '{sdk_version}'
        AND SDKToDevice.device_uid NOT LIKE "%\\_%" ESCAPE "\\";
    """)
    rows = cursor.fetchall()

    for row in rows:
        # Skip MCUs without prog package.
        if not row[1]:
            continue
        # device_support_package has data like ["samd20_device_support"]
        package = row[1].split('"')[1]
        # Create the MCU-to-PROG dependency.
        if package not in verification_handler:
            verification_handler.update({package: []})
        if row[0] not in verification_handler[package]:
            verification_handler[package].append(row[0])