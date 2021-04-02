# GoogleTestDemo
[Google Test](https://github.com/google/googletest)框架的一个例子（可能项目结构不太科学）。

步骤：

1. 编写功能的源码，全部写在`src/`下（可能需要修改`src/CMakeLists.txt`）;

2. 从[Google Test](https://github.com/google/googletest)下载最新的版本，解压后将其放到`test`目录下（如项目中的`test/googletest`）；

3. 修改`test/CMakeLists.txt`，如下：

``` 
cmake_minimum_required(VERSION 3.16)

# 项目名(改成自己的)
set(PROJECT_NAME GoogleTestDemoTest)
project(${PROJECT_NAME})

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")

set(CMAKE_CXX_STANDARD 14)

# add gtest
if (NOT TARGET gtest_main)
    add_subdirectory(googletest)
endif ()

include_directories(${gtest_SOURCE_DIR}/include ${gmock_SOURCE_DIR}/include)

# 要测试的文件 (改成自己的)
set(SRC_ROOT ../src)
set(SRC_FILE ${SRC_ROOT}/utils/add.h ${SRC_ROOT}/utils/add.cpp
        ${SRC_ROOT}/utils/subtract.cpp ${SRC_ROOT}/utils/subtract.h)
# 测试文件 (改成自己的)
set(TEST_FILE test_add.cpp test_subtract.cpp)

add_executable(${PROJECT_NAME} main.cpp ${SRC_FILE} ${TEST_FILE})
target_link_libraries(${PROJECT_NAME}gtest_main gtest gmock)

```

4. 在项目**根目录**下的`CMakeLists.txt`最后加上：

```
add_subdirectory(src)
add_subdirectory(test)
```

<hr/>

以上在Clion中操作成功。

