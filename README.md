# C++ GUI Framework

A simple Qt6-based C++ GUI framework designed to reduce boilerplate and make creating basic GUI applications easier.

> **Note:** This project is still in its early stages. Features are limited, but more functionality is planned over time.

## Getting Started

The best place to learn how the framework works is by looking at **`example.cpp`**, which demonstrates the available features and shows how the framework is intended to be used.

## Features

* Less boilerplate code compared to using Qt directly.
* Simple and easy to understand.
* Good starting point for learning or experimenting with GUI development.

## Current Limitations

This framework is still a work in progress. Some current limitations include:

* Button callbacks are not yet customizable.
* UI element positions cannot currently be controlled.
* File organization is left entirely up to the user.
* Only a small set of GUI components is currently available.

## Future Plans

Some features planned for future releases include:

* Custom button event handlers.
* Positioning and layout controls for UI elements.
* More built-in GUI components.
* Improved documentation.
* A dedicated documentation website.

Contributions, suggestions, and improvements are always welcome.

---

# Building the Project

## Requirements

Before building, make sure you have:

* A C++17 compatible compiler
* CMake 3.16 or newer
* Qt6 (Widgets module)

## Create a `CMakeLists.txt`

Create a file named `CMakeLists.txt` with the following contents:

```cmake
cmake_minimum_required(VERSION 3.16)

project(Qt-Framework-C---)

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

## Build

### Option 1: Build Script (Linux/macOS)

Create a script named `build.sh`:

```sh
#!/bin/sh

rm -rf build
mkdir build
cd build

cmake ..
make

./project_name
```

Make it executable:

```sh
chmod +x build.sh
```

Then run:

```sh
./build.sh
```

### Option 2: Manual Build

```sh
mkdir build
cd build
cmake ..
make
./Qt-Framework-C---

```

Replace `project_name` with the executable name defined in your `CMakeLists.txt`.

## Project Structure

A typical project using this framework might look like:

```text
project/
├── CMakeLists.txt
├── example.cpp
├── Framework.cpp
├── Window.cpp
├── Button.cpp
├── Text.cpp
└── build/
```

## Contributing

This project is still in its early stages, so contributions are appreciated. Feel free to improve the framework, add new features, fix bugs, or improve the documentation.

## License

This project is licensed under the **GNU General Public License v2.0 (GPL-2.0)**.

You are free to use, modify, and distribute this software under the terms of the GPLv2. Any derivative works must also be distributed under the same license.

For the full license text, see the `LICENSE` file included with this project.
