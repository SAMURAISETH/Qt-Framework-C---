#!/bin/bash
set -e

# Build
cmake -S . -B build
cmake --build build

./build/qt
