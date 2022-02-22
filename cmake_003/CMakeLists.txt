cmake_minimum_required(VERSION 3.12)

project(cmake_003)

set(CMAKE_CXX_STANDARD 11)

aux_source_directory(src SRC)

add_subdirectory(math)

add_executable(cmake_003 ${SRC})

target_link_libraries(cmake_003 mathfunctions)
