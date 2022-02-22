cmake_minimum_required (VERSION 3.12)

project (cmake_004)

set(ALL_SOURCES CACHE INTERNAL "All sources to be 
compiled in this project" )

add_subdirectory(src)

# 指定生成目标
include_directories(src)

add_executable(cmake_004 main.cpp ${ALL_SOURCES})

