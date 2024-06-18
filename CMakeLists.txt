# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    CMakeLists.txt                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 16:14:59 by abelov            #+#    #+#              #
#    Updated: 2024/03/20 16:15:00 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cmake_minimum_required(VERSION 3.8.2)

#set(CMAKE_C_COMPILER /usr/bin/clang)

project(c_piscine LANGUAGES C CXX ASM)
set(PARENT_PROJECT_NAME "${PROJECT_NAME}")

#set(CMAKE_CXX_STANDARD 98)
#set(CMAKE_C_STANDARD 99)

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

add_subdirectory(c00)
add_subdirectory(c01)
add_subdirectory(c02)
add_subdirectory(c03)
add_subdirectory(c04)
add_subdirectory(c05)
add_subdirectory(c06)
add_subdirectory(c07)
add_subdirectory(c08)
add_subdirectory(c10)
add_subdirectory(c11)
add_subdirectory(c12)
add_subdirectory(c13)
