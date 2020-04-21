# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 3.15)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

include_directories(sort/)
include_directories(list/)

file(GLOB SOURCES "sort/*.cpp" "list/*.cpp")

add_executable(algorithm main.cpp ${SOURCES})