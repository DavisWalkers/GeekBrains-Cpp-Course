CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(les-3)
 
add_executable(les-3 src/les-3.cpp)
 
target_include_directories(les-3 PRIVATE $(CMAKE_CURRENT_SOURCE_DIR)/include)
