cmake_minimum_required(VERSION 3.31)
project(ECS)

set(CMAKE_CXX_STANDARD 26)

add_executable(ECS main.cpp
        src/Manager.cpp
        src/Manager.h
        src/Component.cpp
        src/Component.h
        src/Components/Vehicle.cpp
        src/Components/Vehicle.h
)
