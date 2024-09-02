cmake_minimum_required(VERSION 3.10)
project(MyProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加源文件
add_executable(hello src/main.cpp)

# 添加 Google Test
add_subdirectory(googletest)
include_directories(googletest/googletest/include)

# 添加测试
enable_testing()
add_executable(test_main tests/test_main.cpp)
target_link_libraries(test_main gtest gtest_main)
add_test(NAME MyTest COMMAND test_main)
