cmake_minimum_required(VERSION 3.10)
project(VideoGameManagement)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Enable debug symbols
set(CMAKE_BUILD_TYPE Debug)

# Include header files
include_directories(include)

# Find all source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Set output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Create the executable
add_executable(VideoGameManagement ${SOURCES})

# Specify the path for the file to be created
set(FILE_PATH "${CMAKE_BINARY_DIR}/bin/Library.txt")

# Ensure the bin directory exists
file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Create the file if it doesn't exist (empty file)
if(NOT EXISTS ${FILE_PATH})
    file(WRITE ${FILE_PATH} "")
endif()

