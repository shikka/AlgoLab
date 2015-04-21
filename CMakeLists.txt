project (AlgoLAb)

cmake_minimum_required (VERSION 2.8)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# GTest
ADD_SUBDIRECTORY ("thirdparty/gtest-1.7.0")
enable_testing()

# Include the gtest library
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(CPP_COMPILER_FLAGS " -Wall -Wextra -pedantic -g0 -std=c++11 -O3")
add_definitions("${CPP_COMPILER_FLAGS}")

# Add src subdirectory 
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src")