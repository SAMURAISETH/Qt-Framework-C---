cmake_minimum_required(VERSION 3.16)

project(new)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(new
    example.cpp
    Framework.cpp
    Window.cpp
    Button.cpp
    Text.cpp
)

target_link_libraries(new
    Qt6::Widgets
)