cmake_minimum_required(VERSION 3.14)
project(factorySample)
option(FACTORY OFF)
set(CMAKE_CXX_STANDARD 20)
add_executable(${PROJECT_NAME} main.cc)
include_directories(simple/include include)
if(FACTORY)
  add_definitions(-DFACTORY)
  add_subdirectory(simple)
  target_link_libraries(${PROJECT_NAME} simple)
else()
  add_subdirectory(src)
  target_link_libraries(${PROJECT_NAME} factory)
endif()
