include_directories(${CMAKE_SOURCE_DIR}/include)
file(GLOB files ${CMAKE_SOURCE_DIR}/src/*.cpp)
message(STATUS "file:${files}")
add_library(utils SHARED ${files})