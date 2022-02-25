# source CMakelists.txt
CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

PROJECT(TEST)

SET(CMAKE_CXX_STANDARD 14)

SET(SRC_LIST main.cpp)

INCLUDE_DIRECTORIES(.)

ADD_EXECUTABLE(hello ${SRC_LIST})

find_package(OpenCV REQUIRED)
target_link_libraries(hello ${OpenCV_LIBS})
