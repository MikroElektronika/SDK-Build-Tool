#!/bin/bash

echo "Here will be the script for installing NETO"

# echo "Original working directory: ${PWD}"
# originalWorkingDir=${PWD}

# cd /home/software/
# echo "Script executed from: ${PWD}"
# echo "Current folder contents"
# for file in ${PWD}/*; do
#   echo "${file##*/}"
# done

# echo "Step 1: Download NECTO"
# echo "https://s3-us-west-2.amazonaws.com/software-update.mikroe.com/NECTOStudio7/development/necto/linux/installer.7z"
# wget https://s3-us-west-2.amazonaws.com/software-update.mikroe.com/NECTOStudio7/development/necto/linux/installer.7z
# echo "Step 2: Extract installer"
# 7za x installer.7z
# echo "Step 3: Install NECTO"
# ./installer_tmp installer --install-packages necto_installer necto_application /home/software/MikroElektronika /home/software/.MIKROE/NECTOStudio2
# echo "Step 4: Move installer to MIKROE if it's generated in root"
# [ -f "/home/software/MikroElektronika/installer_tmp" ] && mv "/home/software/MikroElektronika/installer_tmp" /home/software/MikroElektronika/installer
# echo "Step 5: Move instance_uuid.txt to MIKROE if it's generated in root"
# [ -f "/home/software/instance_uuid.txt" ] && mv "/home/software/instance_uuid.txt" /home/software/MikroElektronika/instance_uuid.txt
# echo "Step 6: Read hash from instance_uuid.txt"
# line=$(head -n 1 /home/software/MikroElektronika/instance_uuid.txt)
# echo "Step 7: Copy NECTOStudio.conf to current directory"
# cp /home/software/.config/MikroElektronika/NECTOStudio.conf /home/software/NECTOStudio.conf
# echo "Step 8: Add the read hash to it"
# sed -i "1s/^/[${line}]/" /home/software/NECTOStudio.conf
# echo "Step 9: Copy it back to .config/MikroElektronika"
# cp /home/software/NECTOStudio.conf /home/software/.config/MikroElektronika
# echo "Step 10: Move installed_packages.json to MIKROE if it's generated in root"
# [ -f "/home/software/installed_packages.json" ] && mv "/home/software/installed_packages.json" /home/software/MikroElektronika/installed_packages.json
# echo "Step 11: Remove installer.7z"
# rm /home/software/installer.7z
# echo "Step 12: Remove installer_tmp"
# rm /home/software/installer_tmp
# echo "Step 13: Remove NECTOStudio.conf"
# rm /home/software/NECTOStudio.conf

# echo "Current folder contents"
# for file in ${PWD}/*; do
  # echo "${file##*/}"
# done

## Return to original folder
# cd ${originalWorkingDir}
