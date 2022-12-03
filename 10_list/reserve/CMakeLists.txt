cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(reverse_ll LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

include(doctest.cmake)
add_executable(test_reverse_ll test_reverse_ll.cpp)
target_link_libraries(tests PRIVATE doctest)