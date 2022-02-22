aux_source_directory(. DIR_LIB_SRCS)

# 生成链接库
set(SDS_STATES_ALL_SOURCES  ${PROJECT_SOURCE_DIR}/src/mathfunction.cpp)

set(ALL_SOURCES
    ${SDS_STATES_ALL_SOURCES}
    PARENT_SCOPE
   )

