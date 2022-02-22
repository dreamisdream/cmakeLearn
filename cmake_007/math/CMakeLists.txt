aux_source_directory(. DIR_LIB_SRCS)

add_library(mathfunctions ${DIR_LIB_SRCS})

install (TARGETS mathfunctions DESTINATION lib)
install (FILES matnfunction.h DESTINATION include)
