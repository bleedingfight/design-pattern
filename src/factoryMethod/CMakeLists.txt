cmake_minimum_required(VERSION 3.16)
project(factoryMethod)

set(CMAKE_CXX_STANDARD 14)
include_directories(include)
add_subdirectory(src)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} reader)