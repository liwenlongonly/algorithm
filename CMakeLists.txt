# cmake_minimum_required(VERSION <specify CMake version here>)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

include_directories(sort/)
include_directories(list/)

file(GLOB SOURCES "sort/*.cpp" "list/*.cpp")

add_executable(algorithm main.cpp ${SOURCES})