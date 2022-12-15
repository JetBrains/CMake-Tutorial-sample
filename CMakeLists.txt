cmake_minimum_required(VERSION 3.24)
project(cmake_testapp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cmake_testapp main.cpp)
add_executable(cmake_testapp_calc main.cpp calc.cpp)

add_library (test_library STATIC calc.cpp)

target_include_directories (cmake_testapp_calc PUBLIC includes/math)
target_include_directories (cmake_testapp_calc PUBLIC includes/general)

find_library(TEST_LIBRARY test_library lib)
target_link_libraries(cmake_testapp LINK_PUBLIC ${TEST_LIBRARY})

add_subdirectory(test)

enable_testing()
add_subdirectory(test/ctest)