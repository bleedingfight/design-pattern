include_directories(${CMAKE_SOURCE_DIR}/include)
file(GLOB SRCS *.cc)
add_library(mediator SHARED ${SRCS})
