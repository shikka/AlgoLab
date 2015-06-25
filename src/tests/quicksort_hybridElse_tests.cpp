#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Quicksort{

    TEST(Quicksort_hybridElse, AscInt){
		std::array<int ,arraySize> a;
		Dataset::ascArray(a);
		hybridElse(a);
		isSorted(a);
	}
	
	TEST(Quicksort_hybridElse, DescInt){
		std::array<int ,arraySize> a;
		Dataset::descArray(a);
		hybridElse(a);
		isSorted(a);
	}

	TEST(Quicksort_hybridElse, RandomInt){
		std::array<int ,arraySize> a;
		Dataset::randArray(a);
		hybridElse(a);
		isSorted(a);
	}

	TEST(Quicksort_hybridElse, AscDouble){
		std::array<double ,arraySize> a;
		Dataset::ascArray(a);
		hybridElse(a);
		isSorted(a);
	}

	TEST(Quicksort_hybridElse, DescDouble){
		std::array<double ,arraySize> a;
		Dataset::descArray(a);
		hybridElse(a);
		isSorted(a);
	}

	TEST(Quicksort_hybridElse, RandomDouble){
		std::array<double ,arraySize> a;
		Dataset::randArray(a);
		hybridElse(a);
		isSorted(a);
	}
	TEST(Quicksort_hybridElse, AscString){
		std::array<std::string ,arraySize> a;
		Dataset::ascArray(a);
		hybridElse(a);
		isSorted(a);
	}

	TEST(Quicksort_hybridElse, DescString){
		std::array<std::string ,arraySize> a;
		Dataset::descArray(a);
		hybridElse(a);
		isSorted(a);
	}

	TEST(Quicksort_hybridElse, RandomString){
		std::array<std::string ,arraySize> a;
		Dataset::randArray(a);
		hybridElse(a);
		isSorted(a);
	}
    
}