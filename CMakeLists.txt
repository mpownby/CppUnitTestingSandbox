cmake_minimum_required(VERSION 3.17)
project(CppUnitTesting)

set(CMAKE_CXX_STANDARD 17)

# embed google test
option(INSTALL_GTEST "Enable installation of googletest. (Projects embedding googletest may want to turn this OFF.)" OFF)
add_subdirectory("thirdparty/googletest-release-1.10.0")

add_subdirectory("src")
add_subdirectory("test")
