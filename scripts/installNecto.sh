#!/bin/bash

echo "Original working directory: ${PWD}"
originalWorkingDir=${PWD}

cd /home/runner/
echo "Script executed from: ${PWD}"
echo "Current folder contents"
for file in ${PWD}/*; do
  echo "${file##*/}"
done

echo "Step 1: Download NECTO"
echo "https://software-update.mikroe.com/NECTOStudio7/live/necto/linux/NECTOInstaller.zip"
wget https://software-update.mikroe.com/NECTOStudio7/live/necto/linux/NECTOInstaller.zip

echo "Step 2: Extract installer"
7za x NECTOInstaller.zip

echo "Step 3: Install NECTO"
./NECTOInstaller installer --install-packages necto_installer necto_application /home/runner/MikroElektronika /home/runner/.MIKROE/NECTOStudio7

echo "Step 4: Move installer to MIKROE if it's generated in root"
[ -f "/home/runner/MikroElektronika/installer_tmp" ] && mv "/home/runner/MikroElektronika/installer_tmp" /home/runner/MikroElektronika/installer

echo "Step 5: Move instance_uuid.txt to MIKROE if it's generated in root"
[ -f "/home/runner/instance_uuid.txt" ] && mv "/home/runner/instance_uuid.txt" /home/runner/MikroElektronika/instance_uuid.txt

echo "Step 6: Read hash from instance_uuid.txt"
line=$(head -n 1 /home/runner/MikroElektronika/instance_uuid.txt)

echo "Step 7: Copy NECTOStudio.conf to current directory"
cp /home/runner/.config/MikroElektronika/NECTOStudio.conf /home/runner/NECTOStudio.conf

echo "Step 8: Add the read hash to it"
sed -i "1s/^/[${line}]/" /home/runner/NECTOStudio.conf

echo "Step 9: Copy it back to .config/MikroElektronika"
cp /home/runner/NECTOStudio.conf /home/runner/.config/MikroElektronika

echo "Step 10: Move installed_packages.json to MIKROE if it's generated in root"
[ -f "/home/runner/installed_packages.json" ] && mv "/home/runner/installed_packages.json" /home/runner/MikroElektronika/installed_packages.json

echo "Step 11: Remove NECTOInstaller.zip"
rm /home/runner/NECTOInstaller.zip

echo "Step 12: Remove NECTOInstaller"
rm /home/runner/NECTOInstaller

echo "Step 13: Remove NECTOStudio.conf"
rm /home/runner/NECTOStudio.conf

echo "Current folder contents"
for file in ${PWD}/*; do
  echo "${file##*/}"
done

# Return to original folder
cd ${originalWorkingDir}
