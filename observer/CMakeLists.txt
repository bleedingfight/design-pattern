cmake_minimum_required(VERSION 3.16)
project(observer)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(src)
include_directories(include)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} utils)