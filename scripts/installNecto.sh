#!/bin/bash

echo "Original working directory: ${PWD}"
originalWorkingDir=${PWD}

cd /home/runner/work/SDK-Build-Tool/
echo "Script executed from: ${PWD}"
echo "Current folder contents"
for file in ${PWD}/*; do
  echo "${file##*/}"
done

echo "Step 1: Download NECTO"
echo "https://s3-us-west-2.amazonaws.com/software-update.mikroe.com/NECTOStudio7/development/necto/linux/installer.7z"
wget https://s3-us-west-2.amazonaws.com/software-update.mikroe.com/NECTOStudio7/development/necto/linux/installer.7z

echo "Step 2: Extract installer"
7za x installer.7z

echo "Step 3: Install NECTO"
./installer_tmp installer --install-packages necto_installer necto_application clocks schemas database /home/runner/work/SDK-Build-Tool/MikroElektronika /home/runner/work/SDK-Build-Tool/.MIKROE/NECTOStudio7

echo "Step 4: Move installer to MIKROE if it's generated in root"
[ -f "/home/runner/work/SDK-Build-Tool/MikroElektronika/installer_tmp" ] && mv "/home/runner/work/SDK-Build-Tool/MikroElektronika/installer_tmp" /home/runner/work/SDK-Build-Tool/MikroElektronika/installer

echo "Step 5: Move instance_uuid.txt to MIKROE if it's generated in root"
[ -f "/home/runner/work/SDK-Build-Tool/instance_uuid.txt" ] && mv "/home/runner/work/SDK-Build-Tool/instance_uuid.txt" /home/runner/work/SDK-Build-Tool/MikroElektronika/instance_uuid.txt

echo "Step 6: Read hash from instance_uuid.txt"
line=$(head -n 1 /home/runner/work/SDK-Build-Tool/MikroElektronika/instance_uuid.txt)

echo "Step 7: Copy NECTOStudio.conf to current directory"
cp /home/runner/work/SDK-Build-Tool/.config/MikroElektronika/NECTOStudio.conf /home/runner/work/SDK-Build-Tool/NECTOStudio.conf

echo "Step 8: Add the read hash to it"
sed -i "1s/^/[${line}]/" /home/runner/work/SDK-Build-Tool/NECTOStudio.conf

echo "Step 9: Copy it back to .config/MikroElektronika"
cp /home/runner/work/SDK-Build-Tool/NECTOStudio.conf /home/runner/work/SDK-Build-Tool/.config/MikroElektronika

echo "Step 10: Move installed_packages.json to MIKROE if it's generated in root"
[ -f "/home/runner/work/SDK-Build-Tool/installed_packages.json" ] && mv "/home/runner/work/SDK-Build-Tool/installed_packages.json" /home/runner/work/SDK-Build-Tool/MikroElektronika/installed_packages.json

echo "Step 11: Remove installer.7z"
rm /home/runner/work/SDK-Build-Tool/installer.7z

echo "Step 12: Remove installer_tmp"
rm /home/runner/work/SDK-Build-Tool/installer_tmp

echo "Step 13: Remove NECTOStudio.conf"
rm /home/runner/work/SDK-Build-Tool/NECTOStudio.conf

echo "Current folder contents"
for file in ${PWD}/*; do
  echo "${file##*/}"
done

# Return to original folder
cd ${originalWorkingDir}
