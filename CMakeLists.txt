cmake_minimum_required(VERSION 3.5.0)
project(string_utils VERSION 1.0.0 LANGUAGES CXX)

#include(CTest)
#enable_testing()
include_directories(./include)

set(SOURCE_LIB ./src/string_utils.cpp)

add_library(string_utils ${SOURCE_LIB})

#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)
