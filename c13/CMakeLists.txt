# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    CMakeLists.txt                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 08:32:19 by abelov            #+#    #+#              #
#    Updated: 2024/03/19 02:13:48 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cmake_minimum_required(VERSION 3.8.2)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-narrowing")

cmake_policy(SET CMP0048 NEW) # PROJECT_VERSION

project(C13 VERSION 0.1.0 LANGUAGES C ASM)

include_directories(include)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_REQUIRED_LIBRARIES "-lbsd")

set(PARENT_PROJECT_NAME "${PROJECT_NAME}")


# PROJECT_SOURCE_DIR is the source directory of the most recent project() cmd.
file(GLOB TARGET_HEADERS "${PROJECT_SOURCE_DIR}/ex*/*.h")
file(GLOB TARGET_FT_SOURCES "${PROJECT_SOURCE_DIR}/ex*/ft_*.c")
file(GLOB TARGET_SOURCES "${PROJECT_SOURCE_DIR}/ex*/btree_*.c")
list(APPEND TARGET_SOURCES "${TARGET_FT_SOURCES}")

#Generate static library from sources
set(TARGET_LIB_NAME "${PROJECT_NAME}_lib")
add_library(${TARGET_LIB_NAME} STATIC ${TARGET_HEADERS} ${TARGET_SOURCES})
target_include_directories(${TARGET_LIB_NAME} PRIVATE include)
target_compile_options(${TARGET_LIB_NAME} PRIVATE ${FT_CFLAGS})

set(TEST_TARGET_NAME "${PROJECT_NAME}_test")
file(GLOB TEST_TARGET_HEADERS "tests/*.h")
file(GLOB TEST_TARGET_SOURCES "src/tests/*.c")
file(GLOB UTILS_TARGET_SOURCES "src/utils/*.c")
list (APPEND TEST_TARGET_SOURCES ${UTILS_TARGET_SOURCES})

set(TEST_TARGET_CFLAGS
        -c -w
        -fno-omit-frame-pointer
        -fsanitize=address
        -fsanitize=leak
        "${FT_CFLAGS}")
set(TEST_TARGET_LINK_FLAGS -w -lbsd -O0)
set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package (Threads REQUIRED)
add_executable(${TEST_TARGET_NAME}
        ${TEST_TARGET_HEADERS}
        ${TEST_TARGET_SOURCES} src/main.c)
target_include_directories(${TEST_TARGET_NAME} PRIVATE include)
target_compile_options(${TEST_TARGET_NAME} PRIVATE ${TEST_TARGET_CFLAGS})
target_link_options(${TEST_TARGET_NAME} PRIVATE ${TEST_TARGET_LINK_FLAGS})
target_link_directories(${TEST_TARGET_NAME} PRIVATE "")
target_link_libraries(${TEST_TARGET_NAME} asan lsan bsd rt ${TARGET_LIB_NAME} Threads::Threads)
