cmake_minimum_required(VERSION 3.17)
project(hello_world)

set(CMAKE_CXX_STANDARD 14)

add_executable(hello_world main.cpp contact.cpp basic.cpp student.cpp student.h file.cpp file.h)