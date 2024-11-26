cmake_minimum_required(VERSION 3.28)
project(TimeWarriorV3)

set(CMAKE_CXX_STANDARD 23)

add_executable(TimeWarriorV3
        TimeWarriorV3.cpp
        main.cpp
        Objects/Room.cpp
        Objects/Room.h
        Objects/Player.cpp
        Objects/Player.h
)

target_link_libraries(TimeWarriorV3 PRIVATE
        EngineBase
        Utility
)