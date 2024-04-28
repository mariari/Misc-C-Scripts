cmake_minimum_required(VERSION 3.25)
project(misc_c_scripts)

set(CMAKE_CXX_STANDARD 17)


add_executable(misc_c_scripts src/C/first.c)
add_executable(misc_cpp_scripts src/CPP/main.cpp src/CPP/this.cpp src/CPP/this.h)