cmake_minimum_required(VERSION 3.8.2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-narrowing")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-narrowing")

cmake_policy(SET CMP0048 NEW) # PROJECT_VERSION

project(c06 VERSION 0.1.0 LANGUAGES C CXX ASM)

include_directories(include)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_REQUIRED_LIBRARIES "-lbsd")

find_package (Threads REQUIRED)
set(THREADS_PREFER_PTHREAD_FLAG ON)

set(TEST_TARGET_CFLAGS "${FT_CFLAGS}")
set(TEST_TARGET_LINK_FLAGS ${COMMON_LDFLAGS})

# ================= ex00 ================= #
set(TARGET_NAME "${PROJECT_NAME}_ex00")

file(GLOB TARGET_HEADERS "ex00/*.h")
file(GLOB TARGET_SOURCES "ex00/*.c")

add_executable(${TARGET_NAME} ${TARGET_HEADERS} ${TARGET_SOURCES})
target_include_directories(${TARGET_NAME} PRIVATE include src)
target_compile_options(${TARGET_NAME} PRIVATE ${TARGET_CFLAGS})
target_link_options(${TARGET_NAME} PRIVATE ${TARGET_LINK_FLAGS})
target_link_libraries(${TARGET_NAME} bsd rt Threads::Threads)

# ================= ex01 ================= #
set(TARGET_NAME "${PROJECT_NAME}_ex01")

file(GLOB TARGET_HEADERS "ex01/*.h")
file(GLOB TARGET_SOURCES "ex01/*.c")

add_executable(${TARGET_NAME} ${TARGET_HEADERS} ${TARGET_SOURCES})
target_include_directories(${TARGET_NAME} PRIVATE include src)
target_compile_options(${TARGET_NAME} PRIVATE ${TARGET_CFLAGS})
target_link_options(${TARGET_NAME} PRIVATE ${TARGET_LINK_FLAGS})
target_link_libraries(${TARGET_NAME} bsd rt Threads::Threads)

# ================= ex02 ================= #
set(TARGET_NAME "${PROJECT_NAME}_ex02")

file(GLOB TARGET_HEADERS "ex02/*.h")
file(GLOB TARGET_SOURCES "ex02/*.c")

add_executable(${TARGET_NAME} ${TARGET_HEADERS} ${TARGET_SOURCES})
target_include_directories(${TARGET_NAME} PRIVATE include src)
target_compile_options(${TARGET_NAME} PRIVATE ${TARGET_CFLAGS})
target_link_options(${TARGET_NAME} PRIVATE ${TARGET_LINK_FLAGS})
target_link_libraries(${TARGET_NAME} bsd rt Threads::Threads)

# ================= ex03 ================= #
set(TARGET_NAME "${PROJECT_NAME}_ex03")

file(GLOB TARGET_HEADERS "ex03/*.h")
file(GLOB TARGET_SOURCES "ex03/*.c")

add_executable(${TARGET_NAME} ${TARGET_HEADERS} ${TARGET_SOURCES})
target_include_directories(${TARGET_NAME} PRIVATE include src)
target_compile_options(${TARGET_NAME} PRIVATE ${TARGET_CFLAGS})
target_link_options(${TARGET_NAME} PRIVATE ${TARGET_LINK_FLAGS})
target_link_libraries(${TARGET_NAME} bsd rt Threads::Threads)