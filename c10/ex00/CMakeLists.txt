# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    CMakeLists.txt                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 16:15:08 by abelov            #+#    #+#              #
#    Updated: 2024/03/20 16:15:09 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cmake_minimum_required(VERSION 3.8.2)

cmake_policy(SET CMP0048 NEW) # PROJECT_VERSION

project(ex00 VERSION 0.1.0 LANGUAGES C CXX ASM)

set(FTLIB_name FTLIB_${PROJECT_NAME})
set(FTLIB_filename libft.a)
set(FTLIB_dir ${CMAKE_CURRENT_SOURCE_DIR}/lib/ft)

file(GLOB FTLIB_HEADERS "${FTLIB_dir}/*.h")
file(GLOB FTLIB_SOURCES "${FTLIB_dir}/**/ft_*.c")

add_custom_target(${FTLIB_name}_target ALL
        COMMAND make -C ${FTLIB_dir}
        BYPRODUCTS ${FTLIB_dir}/${FTLIB_filename}
        SOURCES "${FTLIB_HEADERS};${FTLIB_SOURCES}"
        COMMENT "Building 42lib")

# What are the differences between IMPORTED target and INTERFACE libraries?
# https://stackoverflow.com/questions/36648375/
add_library(${FTLIB_name} STATIC IMPORTED)
add_dependencies(${FTLIB_name} ${FTLIB_name}_target)
set_target_properties(${FTLIB_name} PROPERTIES
        IMPORTED_LOCATION ${FTLIB_dir}/${FTLIB_filename} # Make sure to use absolute path here
        INTERFACE_COMPILE_DEFINITIONS "OPTIMISTIC"
        INTERFACE_SOURCES "${FTLIB_HEADERS};${FTLIB_SOURCES}"
        INTERFACE_INCLUDE_DIRECTORIES "${FTLIB_dir};${CMAKE_CURRENT_SOURCE_DIR}/include")

find_package (Threads REQUIRED)
set(TARGET_CFLAGS
        -c -w
        -g3 -gdwarf-3
        -fno-exceptions
        -ffunction-sections
        -fdata-sections
        -fno-threadsafe-statics
        -O0)
set(TARGET_LINK_FLAGS -w -lbsd -O0)
set(THREADS_PREFER_PTHREAD_FLAG ON)

# ================= ex00 ================= #
set(TARGET_NAME "ft_display_file")

file(GLOB TARGET_HEADERS "src/*.h")
file(GLOB TARGET_SOURCES "src/*.c")

add_executable(${TARGET_NAME} ${TARGET_HEADERS} ${TARGET_SOURCES})
target_include_directories(${TARGET_NAME} PRIVATE include src)
target_compile_options(${TARGET_NAME} PRIVATE ${TARGET_CFLAGS})
target_link_options(${TARGET_NAME} PRIVATE ${TARGET_LINK_FLAGS})
target_link_libraries(${TARGET_NAME} bsd rt ${FTLIB_name} Threads::Threads)
