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
        step3   - Create dependencies between MCUs, Boards, Cards and packages for them from step2;
        step4   - Check if all CORE-to-MCU dependencies are correct.
        step5   - Check if all CODEGRIP-to-MCU dependencies are correct.
        step6   - Check if all MCHP-to-MCU dependencies are correct.
        step7   - Check if all Board-to-BSP dependencies are correct.
        step8   - Check if all Card-to-BSP dependencies are correct.
        """,
        type = str
    )

    verification_handler = {}
    installer = necto.define_paths()
    db_path = os.path.join(installer['necto_path_app_data'], 'databases/necto_db.db')

    if parser.step == 'step1':
        necto.install_necto(installer)

    if parser.step == 'step2':
        sdk_version = database.get_latest_sdk_version(db_path)
        database.query_packages(db_path, sdk_version, verification_handler)
        packages.install_packages(installer, verification_handler)

if __name__ == '__main__':
    main()
