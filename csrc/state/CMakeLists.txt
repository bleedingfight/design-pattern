include_directories(${CMAKE_SOURCE_DIR}/include)
set(CMAKE_LIBRARY_PATH ${CMAKE_SOURCE_DIR}/lib)
file(GLOB SRCS *.cc)
add_library(state SHARED ${SRCS})
