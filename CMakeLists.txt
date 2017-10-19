cmake_minimum_required(VERSION 3.8)
project(hostSeatingEfficency)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp restaurant.cpp restaurant.h section.cpp section.h rotation.cpp rotation.h command.cpp command.h)
add_executable(hostSeatingEfficency ${SOURCE_FILES})