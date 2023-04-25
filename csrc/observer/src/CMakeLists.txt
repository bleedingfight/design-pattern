include_directories(${CMAKE_SOURCE_DIR}/include)
file(GLOB files ${CMAKE_SOURCE_DIR}/src/*.cc)
message(STATUS "file:${files}")
add_library(utils SHARED ${files})
