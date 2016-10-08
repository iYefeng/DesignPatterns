cmake_minimum_required(VERSION 3.4)

project(DesignPatterns)

#ADD_DEFINITIONS(
#    -std=c++11 # Or -std=c++0x
#    # Other flags
#)
#set(CMAKE_CXX_STANDARD 11)

set(CMAKE_C_COMPILER, "gcc")
set(CMAKE_CXX_COMPILER, "g++")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -Wall -Werror -D_FILE_OFFSET_BITS=64")
set(CMAKE_CXX_FLAGS_DEBUG, "${CMAKE_CXX_FLAGS_DEBUG} -O0")
set(CMAKE_CXX_FLAGS_RELEASE, "${CMAKE_CXX_FLAGS_RELEASE} -O2 -DNDEBUG")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_subdirectory(src)
