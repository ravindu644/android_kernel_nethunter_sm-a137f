#!/bin/bash
clear
export ARCH=arm64
export PLATFORM_VERSION=13
export ANDROID_MAJOR_VERSION=t
ln -s /usr/bin/python2.7 $HOME/python
export PATH=$HOME/:$PATH
export KCFLAGS=-w
export CONFIG_SECTION_MISMATCH_WARN_ONLY=y
export CLANG_TRIPLE=aarch64-linux-gnu-
mkdir out

ARGS='
CC=/home/ravindu/toolchain/universal/clang-r383902/bin/clang
CROSS_COMPILE=/home/ravindu/toolchain/universal/aarch64-linux-android-4.9/bin/aarch64-linux-android-
CLANG_TRIPLE=aarch64-linux-gnu-
ARCH=arm64
KCFLAGS=-w
CONFIG_SECTION_MISMATCH_WARN_ONLY=y
'
make -C $(pwd) O=$(pwd)/out ${ARGS} clean && make -C $(pwd) O=$(pwd)/out ${ARGS} mrproper #to clean the source
make -C $(pwd) O=$(pwd)/out ${ARGS} a13ve_defconfig #making your current kernel config
make -C $(pwd) O=$(pwd)/out ${ARGS} menuconfig #editing the kernel config via gui
make -C $(pwd) O=$(pwd)/out ${ARGS} -j$(nproc) #to compile the kernel

#to copy all the kernel modules (.ko) to "modules" folder.
mkdir -p modules
find . -type f -name "*.ko" -exec cp -n {} modules \;
echo "Module files copied to the 'modules' folder."