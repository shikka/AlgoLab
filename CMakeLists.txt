project (Algo-Lab)

cmake_minimum_required (VERSION 2.8)

#prevent in-source build
if ( ${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR} )
    message( FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there. You may need to remove CMakeCache.txt." )
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Add gtest and enable it
add_subdirectory(thirdparty/gtest-1.7.0)
enable_testing()
# Include the gtest library
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


set(CPP_COMPILER_FLAGS " -Wall -Wextra -pedantic -g0 -std=c++11 -O3")
add_definitions("${CPP_COMPILER_FLAGS}")

# Add src subdirectory 
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src")