## ----------------------------PACKAGE INSTALL----------------------------------------- ##
## First, install all required packages if they aren't installed already

import os, sys, subprocess

from pathlib import Path

## Append to system path
currentFilePath = Path(__file__)
rootPath = str(currentFilePath.parent.parent.absolute())
sys.path.append(rootPath)

python = sys.executable
subprocess.check_call([python, '-m', 'pip', 'install', 'setuptools'], stdout=subprocess.DEVNULL)

import pkg_resources

## List of packages needed for script run
listOfPackages = {
    'PyQt6', 'requests', 'datetime', 'gitpython'
}

installed = {pkg.key for pkg in pkg_resources.working_set}
missing = listOfPackages - installed

if missing:
    python = sys.executable
    subprocess.check_call([python, '-m', 'pip', 'install', *missing], stdout=subprocess.DEVNULL)
