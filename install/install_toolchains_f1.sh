#!/bin/bash

if [ -z "${COMPOSER_ROOT-}" ]; then
	echo "You must define environment variable COMPOSER_ROOT before running setup. This is where your Composer project will live."
	exit
fi	

# Set-up is in the composer root

cd $COMPOSER_ROOT
# Necessary Tools
sudo yum groupinstall "Development tools" -y
sudo yum install wget openssl-devel -y
sudo yum install kernel kernel-devel -y

# We need to manually install new version of CMake to copmile the runtime
mkdir build && cd build
wget https://cmake.org/files/v3.18/cmake-3.18.0.tar.gz
tar -xvzf cmake-3.18.0.tar.gz
cd cmake-3.18.0
./bootstrap
make -j`nproc`
sudo make install
cd .. && rm -rf build

# Set AWS FPGA drivers
cd $COMPOSER_ROOT
git clone https://github.com/aws/aws-fpga.git
cd aws-fpga || exit
sudo systemctl stop mpd || true
sudo yum remove -y xrt xrt-aws || true
source sdk_setup.sh
cd sdk/linux_kernel_drivers/xdma || exit
make && sudo make install
echo "If the kernel module is running (and working), you should see some files below:"
ls /dev/xdma*
echo "If there's nothing printed out above, try restarting the F1 instance."