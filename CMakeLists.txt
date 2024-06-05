cmake_minimum_required(VERSION 3.8)

PROJECT(dmexprtk)

INCLUDE(${CMAKE_SOURCE_DIR}/cmake/ModuleImport.cmake)
INCLUDE(${CMAKE_SOURCE_DIR}/cmake/ModuleCompileOptions.cmake)

ModuleSetCompileOptions()

ModuleImportAll("thirdparty")
InterfaceImport("dmexprtk" "include" "")

if (PROJECT_IS_TOP_LEVEL)
    ExeImport("test" "dmexprtk")
endif(PROJECT_IS_TOP_LEVEL)

