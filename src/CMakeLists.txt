cmake_minimum_required(VERSION 3.0.0)


include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(v01)
add_subdirectory(v02)
add_subdirectory(v03)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
