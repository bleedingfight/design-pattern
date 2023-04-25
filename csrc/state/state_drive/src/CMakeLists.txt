include_directories(include)
file(GLOB SRCS *.cc)
message("==> $SRCS")
add_library(utils SHARED $SRCS)
