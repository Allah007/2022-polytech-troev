cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(hash LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

include(doctest.cmake)
add_executable(hash test_hash.cpp)
target_link_libraries(hash PRIVATE doctest)