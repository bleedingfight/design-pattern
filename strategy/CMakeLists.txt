cmake_minimum_required(VERSION 3.14)
project(strategy)
add_subdirectory(src)
include_directories(include)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} currency utils)