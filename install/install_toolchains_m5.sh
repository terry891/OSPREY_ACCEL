#!/bin/bash

git clone https://github.com/aws/aws-fpga.git
cd aws-fpga || exit
sudo yum -y groupinstall "Development tools"
sudo yum install java-17-amazon-corretto-devel -y
sudo yum install kernel kernel-devel -y
sudo yum install -y python python-pip
# For aws fpga notification
pip install --user --upgrade boto3

# Install sbt
sudo rm -f /etc/yum.repos.d/bintray-rpm.repo || true
curl -L https://www.scala-sbt.org/sbt-rpm.repo > sbt-rpm.repo
sudo mv sbt-rpm.repo /etc/yum.repos.d/
sudo yum install sbt -y

echo ""
echo "==========================================================================="
echo "----------------     Toolchain installation completed     -----------------"
echo "==========================================================================="
echo ""

# sudo systemctl stop mpd || true
# sudo yum remove -y xrt xrt-aws || true
# source sdk_setup.sh
# cd sdk/linux_kernel_drivers/xdma || exit
# make && sudo make install
# echo "If the kernel module is running (and working), you should see some files below:"
# ls /dev/xdma
# echo "If there's nothing printed out above, try restarting the F1 instance."