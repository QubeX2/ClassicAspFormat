cmake_minimum_required(VERSION 3.0.0)
project(ClassicAspFormat VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories("include")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
add_executable(caspfmt src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
