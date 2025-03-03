# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    CMakeLists.txt                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 02:14:09 by abelov            #+#    #+#              #
#    Updated: 2024/03/17 02:14:10 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cmake_minimum_required(VERSION 3.8.2)

cmake_policy(SET CMP0048 NEW) # PROJECT_VERSION

project(c05 VERSION 0.1.0 LANGUAGES C CXX ASM)

include_directories(include)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_REQUIRED_LIBRARIES "-lbsd")

file(GLOB TARGET_HEADERS "ex*/*.h")
file(GLOB TARGET_SOURCES "ex*/ft_*.c")

#Generate static library from sources
set(TARGET_LIB_NAME "${PROJECT_NAME}_lib")
add_library(${TARGET_LIB_NAME} STATIC ${TARGET_HEADERS} ${TARGET_SOURCES})
target_include_directories(${TARGET_LIB_NAME} PRIVATE include)
target_compile_options(${TARGET_LIB_NAME} PRIVATE ${FT_CFLAGS})

set(TEST_TARGET_NAME "${PROJECT_NAME}_test")
file(GLOB TEST_TARGET_HEADERS "tests/*.h")
file(GLOB TEST_TARGET_SOURCES "tests/*.c")

set(TEST_TARGET_CFLAGS "${FT_CFLAGS}")
set(TEST_TARGET_LINK_FLAGS ${COMMON_LDFLAGS})
set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package (Threads REQUIRED)
add_executable(${TEST_TARGET_NAME} ${TEST_TARGET_HEADERS} ${TEST_TARGET_SOURCES})
target_include_directories(${TEST_TARGET_NAME} PRIVATE include)
target_compile_options(${TEST_TARGET_NAME} PRIVATE ${TEST_TARGET_CFLAGS})
target_link_options(${TEST_TARGET_NAME} PRIVATE ${TEST_TARGET_LINK_FLAGS})
target_link_libraries(${TEST_TARGET_NAME} bsd rt ${TARGET_LIB_NAME} Threads::Threads)

set_target_properties(${TEST_TARGET_NAME} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}"
        OUTPUT_NAME "${PROJECT_NAME}")
