include_directories(include)
file(GLOB SRCS src/*.cc)
add_library(simple SHARED ${SRCS})
