# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    CMakeLists.txt                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 23:04:10 by abelov            #+#    #+#              #
#    Updated: 2024/03/11 23:04:13 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cmake_minimum_required(VERSION 3.8)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_SYSTEM_PROCESSOR i386)
set(CMAKE_LIBRARY_ARCHITECTURE i386-linux-gnu)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32")

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_C_STANDARD_REQUIRED OFF)

cmake_policy(SET CMP0048 NEW) # PROJECT_VERSION

set(THIS_PROJECT_NAME C04)

set(THIS_PROJECT_NAME ${THIS_PROJECT_NAME} PARENT_SCOPE)
project(${THIS_PROJECT_NAME} VERSION 0.1.0 LANGUAGES C ASM)

include_directories(include)

set(FT_CFLAGS
        -Wall -Wextra -Werror
        -O0
        -ffunction-sections
        -fdata-sections
        -masm=att
        -fno-exceptions
        -ffunction-sections
        -fdata-sections
        -fomit-frame-pointer
        -fno-dwarf2-cfi-asm
        -fno-asynchronous-unwind-tables
        -g3
        -ggdb3)

file(GLOB TARGET_HEADERS "ex*/*.h")
file(GLOB TARGET_SOURCES "ex*/*.c")

#Generate static library from sources
set(TARGET_LIB_NAME "C04_lib")

add_library(${TARGET_LIB_NAME} STATIC ${TARGET_HEADERS} ${TARGET_SOURCES})
target_include_directories(${TARGET_LIB_NAME} PRIVATE include)
target_compile_options(${TARGET_LIB_NAME} PRIVATE ${FT_CFLAGS})

set(CMAKE_EXE_LINKER_FLAGS "-static")
#set(CMAKE_SHARED_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")

set(TEST_TARGET_NAME "${THIS_PROJECT_NAME}_test")
file(GLOB TEST_TARGET_HEADERS "tests/*.h")
file(GLOB TEST_TARGET_SOURCES "tests/*.c")

set(TEST_TARGET_CFLAGS
        -c -w
        "${FT_CFLAGS}")
set(TEST_TARGET_LINK_FLAGS -w -lbsd -O0)
set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package (Threads REQUIRED)
add_executable(${TEST_TARGET_NAME} ${TEST_TARGET_HEADERS} ${TEST_TARGET_SOURCES})
target_include_directories(${TEST_TARGET_NAME} PRIVATE include src)
target_compile_options(${TEST_TARGET_NAME} PRIVATE ${TEST_TARGET_CFLAGS})
target_link_options(${TEST_TARGET_NAME} PRIVATE ${TEST_TARGET_LINK_FLAGS})
target_link_libraries(${TEST_TARGET_NAME} bsd rt ${TARGET_LIB_NAME} Threads::Threads)
