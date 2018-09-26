cmake_minimum_required(VERSION 3.12)
project(Learn_Vector)

set(CMAKE_CXX_STANDARD 14)

add_executable(Learn_Vector main.cpp)

configure_file(numbers.txt numbers.txt COPYONLY)