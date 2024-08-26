
cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)

add_executable(ctest_exe_addvalues_zero addvalues_zero.cpp)

target_link_libraries(ctest_exe_addvalues_zero LINK_PUBLIC cmake_testapp_lib)

add_test(NAME ctest_addvalues_zero COMMAND ctest_exe_addvalues_zero)

# Set the expected exit code (e.g., 0 for success)
set_tests_properties(ctest_addvalues_zero PROPERTIES PASS 0)
