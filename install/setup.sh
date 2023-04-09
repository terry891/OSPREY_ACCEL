#!/bin/bash

if [ -z "${COMPOSER_ROOT-}" ]; then
	echo "You must define environment variable COMPOSER_ROOT before running setup. This is where your Composer project will live."
	exit
fi	

cp -r bin $COMPOSER_ROOT/
cd $COMPOSER_ROOT

cd Composer-Hardware && chmod u+x scripts/setup.sh && ./scripts/setup.sh && cd ..
cd Composer-Runtime && git clone https://github.com/umd-memsys/DRAMsim3 && cd ..

echo ""
echo "==========================================================================="
echo "Append the following lines to your bashrc: 								 "
echo "			export COMPOSER_ROOT=`pwd`  				 					 "
echo "			export PATH=`pwd`/bin:\$PATH 									 "
echo "==========================================================================="
echo ""
