#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Quicksort{

    TEST(Quicksort_quicksort, AscInt){
		std::array<int ,arraySize> a;
		Dataset::ascArray(a);
		quicksort(a);
		isSorted(a);
	}
	
	TEST(Quicksort_quicksort, DescInt){
		std::array<int ,arraySize> a;
		Dataset::descArray(a);
		quicksort(a);
		isSorted(a);
	}

	TEST(Quicksort_quicksort, RandomInt){
		std::array<int ,arraySize> a;
		Dataset::randArray(a);
		quicksort(a);
		isSorted(a);
	}

	TEST(Quicksort_quicksort, AscDouble){
		std::array<double ,arraySize> a;
		Dataset::ascArray(a);
		quicksort(a);
		isSorted(a);
	}

	TEST(Quicksort_quicksort, DescDouble){
		std::array<double ,arraySize> a;
		Dataset::descArray(a);
		quicksort(a);
		isSorted(a);
	}

	TEST(Quicksort_quicksort, RandomDouble){
		std::array<double ,arraySize> a;
		Dataset::randArray(a);
		quicksort(a);
		isSorted(a);
	}
	TEST(Quicksort_quicksort, AscString){
		std::array<std::string ,arraySize> a;
		Dataset::ascArray(a);
		quicksort(a);
		isSorted(a);
	}

	TEST(Quicksort_quicksort, DescString){
		std::array<std::string ,arraySize> a;
		Dataset::descArray(a);
		quicksort(a);
		isSorted(a);
	}

	TEST(Quicksort_quicksort, RandomString){
		std::array<std::string ,arraySize> a;
		Dataset::randArray(a);
		quicksort(a);
		isSorted(a);
	}
    
}