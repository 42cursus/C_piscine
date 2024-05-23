# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    CMakeLists.txt                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 04:58:30 by abelov            #+#    #+#              #
#    Updated: 2024/05/22 04:58:31 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cmake_minimum_required(VERSION 3.8.2)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-narrowing")

cmake_policy(SET CMP0048 NEW) # PROJECT_VERSION

project(ex05 VERSION 0.1.0 LANGUAGES C ASM)

# PROJECT_SOURCE_DIR is the source directory of the most recent project() cmd.
file(GLOB TARGET_HEADERS "${PROJECT_SOURCE_DIR}/lib/*.h")
file(GLOB TARGET_SOURCES "${PROJECT_SOURCE_DIR}/lib/ft_*.c")

#Generate static library from sources
set(TARGET_LIB_NAME "${PARENT_PROJECT_NAME}_${PROJECT_NAME}_lib")
add_library(${TARGET_LIB_NAME} STATIC ${TARGET_HEADERS} ${TARGET_SOURCES})
target_include_directories(${TARGET_LIB_NAME} PRIVATE include)
target_compile_options(${TARGET_LIB_NAME} PRIVATE ${FT_CFLAGS})

set(TARGET_NAME "${PARENT_PROJECT_NAME}_do-op")
set(TARGET_CFLAGS -c -w "${FT_CFLAGS}")
set(TARGET_LINK_FLAGS -w -O0 "-ffile-prefix-map=${PROJECT_SOURCE_DIR}=./src/")

add_executable(${TARGET_NAME} src/main.c)
target_include_directories(${TARGET_NAME} PRIVATE "." include)
target_compile_options(${TARGET_NAME} PRIVATE ${TARGET_CFLAGS})
target_link_options(${TARGET_NAME} PRIVATE ${TARGET_LINK_FLAGS})
target_link_directories(${TARGET_NAME} PRIVATE ".")
target_link_libraries(${TARGET_NAME} ${TARGET_LIB_NAME})