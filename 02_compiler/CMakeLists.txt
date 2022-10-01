cmake_minimum_required(VERSION 3.24.2)
project(hello_world LANGUAGES CXX)

set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++")

add_executable(hello_world func.cpp hello_world.cpp)
