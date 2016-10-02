cmake_minimum_required(VERSION 3.2)

project(DesignPatterns)


set(CMAKE_C_COMPILER, "gcc")
set(CMAKE_CXX_COMPILER, "g++")
set(CMAKE_CXX_FLAGS, "-g -Wall -Werror -std=c++11 -D_FILE_OFFSET_BITS=64")
set(CMAKE_CXX_FLAGS_DEBUG, "-O0")
set(CMAKE_CXX_FLAGS_RELEASE, "-O2 -DNDEBUG")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_subdirectory(src)
