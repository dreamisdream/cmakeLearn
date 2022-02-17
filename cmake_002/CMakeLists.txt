cmake_minimum_required(VERSION 3.12)

aux_source_directory(. DIR_SRCS)

add_subdirectory(json)

add_executable(cmake_002 src/main.cpp)

target_link_libraries(cmake_002 json)