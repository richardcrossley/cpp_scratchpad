# CMake minimum version
cmake_minimum_required(VERSION 3.16)

# Project name
project(SimpleCalc)

# C++ Standard
set(CMAKE_CXX_STANDARD 14)

# Add the SimpleCalc_lib directory to the project
add_subdirectory(SimpleCalc_lib)

# Executable output and component source files
add_executable(SimpleCalc main.cpp)

# Libraries in sub-directories to be linked.
target_link_libraries(SimpleCalc SimpleCalc_lib)