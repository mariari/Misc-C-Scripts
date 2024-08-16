cmake_minimum_required(VERSION 3.25)
project(misc_c_scripts)

set(CMAKE_CXX_STANDARD 17)

find_package(Catch2 3 REQUIRED)

add_executable(misc_c_scripts src/C/first.c src/C/dynamic.c)

add_executable(misc_cpp_scripts src/CPP/main.cpp src/CPP/this.cpp src/CPP/this.h)

add_executable(tests src/CPP/testing.cpp)

add_library(shared SHARED src/C/dynamic.c)

target_link_libraries(shared m)
target_link_libraries(misc_c_scripts m)


target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
include(CTest)
include(Catch)
catch_discover_tests(tests)