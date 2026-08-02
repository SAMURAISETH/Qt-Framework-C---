cmake_minimum_required(VERSION 3.16)

project(qt)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(qt
    examples/example.cpp
    src/Framework.cpp
    src/components/Window.cpp
    src/components/Button.cpp
    src/components/Text.cpp
    src/components/Widget.cpp
    src/layouts/Layout.cpp
    src/layouts/VerticalLayout.cpp
    src/layouts/HorizontalLayout.cpp
)

target_include_directories(qt PRIVATE
    src
    src/components
    src/layouts
)

target_link_libraries(qt
    Qt6::Widgets
)
