cmake_minimum_required(VERSION 3.13)
project(cmake_testapp)

set(CMAKE_CXX_STANDARD 14)


# https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html#addtargets-reload
add_executable(cmake_testapp main.cpp)
add_executable(cmake_testapp_calc main.cpp calc.cpp)

# https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html#lib-targets
add_library (test_library STATIC calc.cpp)

# https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html#inc-dirs
include_directories (includes/math)
include_directories (includes/general)

# https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html#static-libs
find_library(TEST_LIBRARY test_library lib)
target_link_libraries(cmake_testapp LINK_PUBLIC ${TEST_LIBRARY})

# https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html#boost
add_subdirectory(test)