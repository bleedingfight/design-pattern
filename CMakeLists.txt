cmake_minimum_required(VERSION 3.15)
project(design_pattern)
set(CMAKE_CXX_STANDARD 20)
# 设置静态地址检查
set(CMAKE_CXX_FLAGS_DEBUG
    "$ENV{CXXFLAGS} -O0 -g -fsanitize=address -fno-omit-frame-pointer")

# 设置gprof性能分析
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pg")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -pg")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -pg")

option(BUILD_TEST "Build the Test" ON)
add_subdirectory(src)
if(BUILD_TEST)
  add_subdirectory(test)
endif()
