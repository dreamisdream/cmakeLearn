cmake_minimum_required(VERSION 3.12)

project(cmake_005)

option (USE_MYMATH
	"use provided math implementation" ON	
)

configure_file(
	"${PROJECT_SOURCE_DIR}/config.h.in"
	"${PROJECT_SOURCE_DIR}/config.h"
)

if (USE_MYMATH)
	include_directories("${PROJECT_SOURCE_DIR}/math")
	add_subdirectory(math)
	set(EXTRA_LIBS ${EXTRA_LIBS} mathfunctions)
endif (USE_MYMATH)

aux_source_directory(. DIR_SRCS)

add_executable(cmake_005 ${DIR_SRCS})

target_link_libraries(cmake_005 ${EXTRA_LIBS})
