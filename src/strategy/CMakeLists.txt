include_directories(include)
set(CMAKE_LIBRARY_PATH ${CMAKE_SOURCE_DIR}/lib)
file(GLOB SRCS src/*.cc)
add_library(strategy SHARED ${SRCS})
