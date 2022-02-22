cmake_minimum_required(VERSION 3.12)

project(cmake_002)

aux_source_directory(./src DIR_SRCS)

add_executable(cmake_002 ${DIR_SRCS})
