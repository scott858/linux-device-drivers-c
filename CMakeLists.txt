cmake_minimum_required(VERSION 3.7)
project(linux_device_drivers_c)

set(CMAKE_C_STANDARD 99)

INCLUDE_DIRECTORIES(
        /home/slee/repos/linux/include
        /home/slee/repos/linux/arch/x86/include
)

set(SOURCE_FILES main.c modules/hello/hello.c modules/scull.c)
add_executable(linux_device_drivers_c ${SOURCE_FILES})