cmake_minimum_required(VERSION 3.0.0)
project(TestRunWithCmake VERSION 0.1.0)

# include(CTest)
# enable_testing()

aux_source_directory(. DIR_SRCS)
add_subdirectory(LogModule)

add_executable(TestRunWithCmake ${DIR_SRCS})
# 添加链接库
target_link_libraries(TestRunWithCmake LogFunctions)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
