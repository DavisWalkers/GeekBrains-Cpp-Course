#!/bin/bash
echo "Number of the lesson"
read number
`mkdir Lesson-$number`
cd Lesson-$number
`mkdir build src include`
`touch src/les-$number.cpp`
`touch include/les-$number.h`
`touch CMakeLists.txt`
echo "CMAKE_MINIMUM_REQUIRED(VERSION 2.8)" >> CMakeLists.txt
echo "PROJECT(les-$number)" >> CMakeLists.txt
echo " " >> CMakeLists.txt
echo "add_executable(les-$number src/les-$number.cpp)" >> CMakeLists.txt
echo " " >> CMakeLists.txt
echo "target_include_directories(les-$number PRIVATE \$(CMAKE_CURRENT_SOURCE_DIR)/include)" >> CMakeLists.txt
