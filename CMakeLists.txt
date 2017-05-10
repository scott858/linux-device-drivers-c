cmake_minimum_required(VERSION 3.7)
project(linux_device_drivers_c)

set(CMAKE_C_STANDARD 99)

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_VERSION 1)

set(CMAKE_C_COMPILER /usr/local/gcc-linaro/bin/arm-linux-gnueabihf-gcc)
set(CMAKE_CXX_COMPILER /usr/local/gcc-linaro/bin/arm-linux-gnueabihf-g++)

set(CMAKE_FIND_ROOT_PATH /opt/sysroots/apalis/angstrom)

INCLUDE_DIRECTORIES(
        /home/slee/repos/toradex/linux-toradex/linux/include
        /home/slee/repos/linux/arch/arm/include
)

set(SOURCE_FILES
        ldd3/scull/test/main.c ldd3/scull/test/scull_test.h)

add_executable(linux_device_drivers_c ${SOURCE_FILES})