#!/bin/bash

g++ *.cpp -o example $(pkg-config --cflags --libs Qt6Widgets)

./example