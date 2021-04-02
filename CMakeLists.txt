cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME GoogleTestDemo)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)
add_subdirectory(test)
