CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(les-2)

add_executable(les-2 src/les-2.cpp)

target_include_directories(les-2 PRIVATE $(CMAKE_CURRENT_SOURCE_DIR)/include)
