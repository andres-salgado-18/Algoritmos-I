
cmake_minimum_required(VERSION 3.6)
project(Labo_7)

#set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)


set(SOURCE_FILES main.cpp
        cases.cpp
        cases.h
        ejercicios.cpp
        ejercicios.h
        )

add_executable(Labo_7 ${SOURCE_FILES})

target_link_libraries(Labo_7 gtest gtest_main)