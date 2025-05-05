cmake_minimum_required(VERSION 3.8)

PROJECT(dmformat)

INCLUDE(${CMAKE_SOURCE_DIR}/cmake/ModuleImport.cmake)
INCLUDE(${CMAKE_SOURCE_DIR}/cmake/ModuleCompileOptions.cmake)
ModuleSetCompileOptions()

ADD_DEFINITIONS(-DUSE_DMFORMAT)

if(PROJECT_IS_TOP_LEVEL)
    ExeImport("test" "")
endif()
