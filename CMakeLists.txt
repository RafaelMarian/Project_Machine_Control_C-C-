cmake_minimum_required(VERSION 3.10)
project(FOCCpp)

set(CMAKE_CXX_STANDARD 17)

include_directories(include config)

add_executable(trifazic_simulator
    src/main.cpp
    src/TriFazicSource.cpp
)
