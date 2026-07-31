# instructions
inorder to run the  program you'll need to set up cmake and call `the file CMakeLists.txt` then it should conatian this
```cmake
cmake_minimum_required(VERSION 3.16)

project(project_name)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(project_name
    example.cpp
    Framework.cpp
    Window.cpp
    Button.cpp
    Text.cpp
)

target_link_libraries(project_name
        Qt6::Widgets
)
```

    
