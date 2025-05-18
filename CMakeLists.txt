cmake_minimum_required(VERSION 3.31)
project(ECS)

set(CMAKE_CXX_STANDARD 26)

add_executable(ECS main.cpp
        src/Manager.cpp
        src/Manager.h
        src/Entity.cpp
        src/Entity.h
        src/Entities/Vehicle.cpp
        src/Entities/Vehicle.h
        src/Entities/Person.cpp
        src/Entities/Person.h
        src/Components/SpriteRenderer.cpp
        src/Components/SpriteRenderer.h
        src/Component.cpp
        src/Component.h
)
