cmake_minimum_required(VERSION 3.12)

project(cmake_006)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

configure_file(
	"${PROJECT_SOURCE_DIR}/config.h.in"
	"${PROJECT_SOURCE_DIR}/config.h"
)

option(USE_MYMATH
	"use provided math implementation" ON
)

if (USE_MYMATH)
	include_directories ("${PROJECT_SOURCE_DIR}/math")
	add_subdirectory(math)
	set(EXTRA_LIB ${EXTRA_LIBS} mathfunctions)
endif (USE_MYMATH)

aux_source_directory(. DIR_SRCS)

add_executable(cmake_006 ${DIR_SRCS})

target_link_libraries(cmake_006 ${EXTRA})


enable_testing()

# test program is normal
add_test(test_run cmake_006 5 2)

# test assistant can display
add_test (test_usage cmake_006)
set_tests_properties(test_usage 
	PROPERTIES PASS_REGULAR_EXPRESSION "usage: .* base exponent"
) 

add_test(test_5_2 cmake_006 5 2)

set_tests_properties(test_5_2
	PROPERTIES PASS_REGULAR_EXPRESSION " is 25"
)

macro (do_test arg1 arg2 result)
	add_test(test_${arg1}_${arg2} cmake_006 ${arg1} ${arg2})
	set_tests_properties(test_${arg1}_${arg2}
		PROPERTIES PASS_REGULAR_EXPRESSION ${result})
endmacro(do_test)


do_test(3 4 "is 81")
do_test(10 4 "10000")


