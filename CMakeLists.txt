cmake_minimum_required(VERSION 3.26)
project(cmake_testapp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cmake_testapp main.cpp general.cpp)
add_executable(cmake_testapp_calc calc.cpp)
add_library(cmake_testapp_lib STATIC calc_lib.cpp calc_lib.h)

target_include_directories (cmake_testapp_lib PUBLIC includes/math)
target_include_directories (cmake_testapp_lib PUBLIC includes/general)

find_library(TEST_LIBRARY cmake_testapp_lib lib)
target_link_libraries(cmake_testapp LINK_PUBLIC ${TEST_LIBRARY})

find_package(PNG REQUIRED)
include_directories(${PNG_INCLUDE_DIR})
target_link_libraries(cmake_testapp PRIVATE ${PNG_LIBRARY})

enable_testing()
add_subdirectory(ctest)