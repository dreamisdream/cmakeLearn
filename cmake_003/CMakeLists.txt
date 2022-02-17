cmake_minimum_required(VERSION 3.12)

add_definitions(-std=gnu++11)

set(EXECUTABLE_OUPUT ${PROJECT_BINARY}/bin)

include_directories(${CMAKE_SOURCE_DIR}/ext/jsoncpp/inc)
link_directories(${CMAKE_SOURCE_DIR}/ext/jsoncpp/lib)

aux_source_directory(src SRC)

add_executable(cmake_003 ${SRC})

target_link_libraries(cmake_003 json)
