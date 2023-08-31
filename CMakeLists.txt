cmake_minimum_required(VERSION 3.5.0)
project(string_utils VERSION 1.0.0 LANGUAGES CXX)

#include(CTest)
#enable_testing()

add_library(string_utils string_utils.cpp)

#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)
