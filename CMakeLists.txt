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

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_C_STANDARD 99)

set(COMMON_LDFLAGS
        -fsanitize=address
        -fsanitize=undefined
        -fno-sanitize-recover
        -fsanitize=float-divide-by-zero
        -fsanitize=float-cast-overflow)

set(FT_CFLAGS
        -Wall -Wextra -Werror
        -Wwrite-strings
        -Wimplicit -Wnarrowing
        -O0
        -masm=att
        -fno-exceptions
        -ffunction-sections
        -fdata-sections
        -fno-omit-frame-pointer
        -fdwarf2-cfi-asm
        -fcf-protection=none
        -mmanual-endbr
        -g3 -gdwarf-3
        -fasynchronous-unwind-tables
        -fsanitize=address
        -fsanitize=undefined
        -fno-sanitize-recover
        -fsanitize=float-divide-by-zero
        -fsanitize=float-cast-overflow)

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
