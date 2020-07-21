CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(program)

add_executable(les-1 src/les-1.cpp)

target_include_directories(les-1 PRIVATE $(CMAKE_CURRENT_SOURCE_DIR)/include)
