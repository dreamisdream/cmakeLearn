# cmake 版本要求
cmake_minimum_required(VERSION 3.12)

# 工程名称
project(cmake_study_001)

# c++ 版本要求
set(CMAKE_CXX_STANDARD 11)

# 目标
add_executable(cmake_001 src/main.cpp)