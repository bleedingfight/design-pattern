file(GLOB SRCS *.cc)
include_directories(${CMAKE_SOURCE_DIR}/include)
add_library(intepretion SHARED ${SRCS})
