cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME GoogleTestDemoTest)
project(${PROJECT_NAME})

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")

set(CMAKE_CXX_STANDARD 14)

# add gtest
if (NOT TARGET gtest_main)
    add_subdirectory(googletest)
endif ()

include_directories(${gtest_SOURCE_DIR}/include ${gmock_SOURCE_DIR}/include)

# 要测试的文件
set(SRC_ROOT ../src)
set(SRC_FILE ${SRC_ROOT}/utils/add.h ${SRC_ROOT}/utils/add.cpp
        ${SRC_ROOT}/utils/subtract.cpp ${SRC_ROOT}/utils/subtract.h)
# 测试文件
set(TEST_FILE test_add.cpp test_subtract.cpp)

add_executable(${PROJECT_NAME} main.cpp ${SRC_FILE} ${TEST_FILE})
target_link_libraries(${PROJECT_NAME} gtest_main gtest gmock)
