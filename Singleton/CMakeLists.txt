cmake_minimum_required(VERSION 3.14)
project(Singleton)
include_directories(include)
add_subdirectory(src)
add_executable(${PROJECT_NAME} main.cc)
target_link_libraries(${PROJECT_NAME} PUBLIC singleton)
