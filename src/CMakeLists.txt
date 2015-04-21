list(APPEND SRC_SORTALGORITHMS
	algorithms/algorithms.hpp
	algorithms/insertionsort.hpp
)

list(APPEND SRC_TESTS
	testUtils.hpp
	tests/insertionsort_normal_tests.cpp
	tests/insertionsort_withGuardCacheMiss.cpp
	tests/insertionsort_withGuardCacheOp.cpp
)

list(APPEND SRC_BENCHMARK
	main.cpp
	benchmarks/benchmark.hpp
)

list(APPEND SRC_DATASET
	benchmarks/dataset.hpp
)

include_directories(${CMAKE_CURRENT_DIR})
add_executable(${PROJECT_NAME}_benchmarks ${SRC_SORTALGORITHMS} ${SRC_DATASET} ${SRC_BENCHMARK})
add_executable(${PROJECT_NAME}_tests ${SRC_SORTALGORITHMS} ${SRC_DATASET} ${SRC_TESTS})
target_link_libraries (${PROJECT_NAME}_tests gtest gtest_main)