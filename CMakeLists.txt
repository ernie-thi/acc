cmake_minimum_required(VERSION 3.10)
project(accLibProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add subdirectories
add_subdirectory(src)
