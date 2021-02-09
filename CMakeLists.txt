cmake_minimum_required(VERSION 3.17)
project(luftschloss)

set(CMAKE_CXX_STANDARD 17)

add_executable(luftschloss main.cpp src/buffer.cpp src/buffer.hpp src/vstring.hpp src/vstring.cpp src/config.hpp)