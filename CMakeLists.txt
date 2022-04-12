cmake_minimum_required(VERSION 3.5)
project(ClassicAspFormat VERSION 0.1.0)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_CXX_STANDARD 20)

include(CTest)
enable_testing()

include_directories("include")

set(SOURCE_DIR ${PROJECT_SOURCE_DIR}/src/)

file(GLOB MY_SOURCES ${SOURCE_DIR}/*.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
add_executable(caspfmt ${MY_SOURCES})

include(CPack)
