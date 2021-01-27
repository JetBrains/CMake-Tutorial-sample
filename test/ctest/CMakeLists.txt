
cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)

add_executable(ctest_exe_addvalues_zero         addvalues_zero.cpp)
add_executable(ctest_example_addvalues_negpos   addvalues_negpos.cpp)

add_test(ctest_addvalues_zero       ctest_exe_addvalues_zero)
add_test(ctest_addvalues_negpos     ctest_example_addvalues_negpos)
