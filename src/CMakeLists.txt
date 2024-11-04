cmake_minimum_required(VERSION 3.28)
project(TimeWarriorV3)

set(CMAKE_CXX_STANDARD 23)

add_executable(TimeWarriorV3
        TimeWarriorV3.cpp
        Objects/Player.cpp
        main.cpp
        Textures/TextureController.cpp
)

target_link_libraries(TimeWarriorV3 PRIVATE
        EngineBase
        Utility
)