cmake_minimum_required(VERSION 3.21)
project(labo3)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(labo3
        src/generador.cpp
        src/generador.h
        src/main.cpp
        src/vectores.cpp
        src/vectores.h)
