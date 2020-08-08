# CMake minimum version
cmake_minimum_required(VERSION 3.16)

# Project name
project(SimpleCalc)

# C++ Standard
set(CMAKE_CXX_STANDARD 14)

# Executable output and component source files
add_executable(SimpleCalc main.cpp)

# Add the SimpleCalc_lib directory to the project
include_directories(SimpleCalc_lib)
add_subdirectory(SimpleCalc_lib)

# Libraries in sub-directories to be linked.
target_link_libraries(SimpleCalc SimpleCalc_lib)

# Add Google_tests to the project
# https://www.jetbrains.com/help/clion/unit-testing-tutorial.html#adding-framework
add_subdirectory(Google_tests)
