# Read Me
Not much to preview as this is a starter but look in **example.cpp** and you see a example c plus plus file that will show you a example of how the framework looks like in every way possible 

## Pros
1. less lines of code
2. This is a little project so more to come

## Cons
There are not much you can do with the functions inside if this **Framework** right now
like you can't control what happens when you click on the button using the button function and you cannot control where the elements i like to call it, but *PS* *enjoy :)*
1. File Organization(you'll have to do your own organization)
# Future
In the Future we will be adding ways to have more control over the things you have on your window like the element position as you cannot control where things are right now which is a very bad or shitty limitation for now but this is early code/project so it gets better or worse idk i don't control time so we'll see PS Make this framework better if you want my contacts are
and maybe add code docs to README or just make a website on it:)


# How To Set up Ready to build/run
 first what you wanna do is add a file called CMakeLists.txt and add 
 ```cmake
  cmake_minimum_required(VERSION 3.16)

project(project_name)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(prject_name
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

after that make a sh file(optional)
```sh

rm -rf build
mkdir build
cd build
cmake ../CMakeLists.txt
make
./project_name
```

but if you'll wanna do it your self to build without errors: 
step 1 `mkdir build(name you wan't)`


step 2 `cd build`


step 3 `cmake ../CMakeLists.txt`


step 4 `make`


step 5 run the `executable` inside of build called `projet_name` or the executable your `CMakeLists` says.
