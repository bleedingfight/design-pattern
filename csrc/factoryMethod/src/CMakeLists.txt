include_directories(${CMAKE_SOURCE_DIR}/include)
add_library(reader SHARED FileProcess.cpp IReader.cpp IReaderFactory.cpp TextFactoryReader.cpp TextReader.cpp ImageReader.cpp ImageFactoryReader.cpp)
