list(APPEND SRC_SORTALGORITHMS
	algorithms/algorithms.hpp
	algorithms/insertionsort.hpp
	algorithms/mergesort.hpp
	algorithms/quicksort.hpp
	algorithms/heapsort.hpp
)

list(APPEND SRC_TESTS
	tests/testCases.hpp
	tests/insertionsort_normal_tests.cpp
	tests/insertionsort_withGuardCacheMiss_tests.cpp
	tests/insertionsort_withGuardCacheOp_tests.cpp
	tests/insertionsort_inBound_tests.cpp
	tests/mergesort_bottomUp_tests.cpp
	tests/mergesort_natural_tests.cpp
	tests/quicksort_quicksort_tests.cpp
	tests/quicksort_hybridIf_tests.cpp
	tests/quicksort_hybridElse_tests.cpp
	tests/heapsort_tests.cpp
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