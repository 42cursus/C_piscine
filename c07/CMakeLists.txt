cmake_minimum_required(VERSION 3.8)
project(с07 LANGUAGES C ASM)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_SYSTEM_PROCESSOR i386)
set(CMAKE_LIBRARY_ARCHITECTURE i386-linux-gnu)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32")

set(CMAKE_C_STANDARD 99)

include_directories(include)

set(FT_CFLAGS
        -g
        -Wall -Wextra -Werror
        -O0)


set(FTLIB_HEADERS
        "")
set(FTLIB_SOURCES
        "")

file(GLOB FTLIB_HEADERS "ex*/*.h")
file(GLOB FTLIB_SOURCES "ex*/*.c")


#Generate the shared library from the sources
add_library(ft1 STATIC ${FTLIB_HEADERS} ${FTLIB_SOURCES})
target_include_directories(ft1 PRIVATE include)
target_compile_options(ft1 PRIVATE ${FT_CFLAGS})

set(CMAKE_EXE_LINKER_FLAGS "-static")
#set(CMAKE_SHARED_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")

set(TARGET_NAME main)
set(TARGET_HEADERS
        "")
set(TARGET_SOURCES
        "")

file(GLOB TARGET_HEADERS "src/*.h")
file(GLOB TARGET_SOURCES "src/*.c")

set(TARGET_CFLAGS
        -c -w
        -g
        -fno-exceptions
        -ffunction-sections
        -fdata-sections
        -fno-threadsafe-statics
        -O0)
set(TARGET_LINK_FLAGS -w -lbsd -O0)
set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package (Threads REQUIRED)
add_executable(${TARGET_NAME} ${TARGET_HEADERS} ${TARGET_SOURCES})
target_include_directories(${TARGET_NAME} PRIVATE include src)
target_compile_options(${TARGET_NAME} PRIVATE ${TARGET__CFLAGS})
target_link_options(${TARGET_NAME} PRIVATE ${DMP_LINK_FLAGS})
target_link_libraries(${TARGET_NAME} bsd rt ft1 Threads::Threads)


