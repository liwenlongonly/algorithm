# cmake_minimum_required(VERSION <specify CMake version here>)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

include_directories(sort/)

file(GLOB SOURCES "sort/*.cpp")

add_executable(algorithm main.cpp ${SOURCES})