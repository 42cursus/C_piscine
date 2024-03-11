cmake_minimum_required(VERSION 3.8.2)
project(c_piscine LANGUAGES C CXX ASM)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_C_STANDARD 99)

set(FT_CFLAGS
        -Wall -Wextra -Werror
        -O0
        -masm=att
        -fno-exceptions
        -ffunction-sections
        -fdata-sections
        -fomit-frame-pointer
        -fno-dwarf2-cfi-asm
        -fno-asynchronous-unwind-tables
        -g3 -gdwarf-3)

add_subdirectory(c01)
add_subdirectory(c02)
add_subdirectory(c03)
add_subdirectory(c05)
add_subdirectory(c07)
add_subdirectory(c08)
