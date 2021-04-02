cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME GoogleTestDemoSrc)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME} main.cpp utils/add.cpp utils/add.h utils/subtract.cpp utils/subtract.h)
