#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Quicksort{

    TEST(Quicksort_hybridIf, AscInt){
		std::array<int ,arraySize> a;
		Dataset::ascArray(a);
		hybridIf(a);
		isSorted(a);
	}
	
	TEST(Quicksort_hybridIf, DescInt){
		std::array<int ,arraySize> a;
		Dataset::descArray(a);
		hybridIf(a);
		isSorted(a);
	}

	TEST(Quicksort_hybridIf, RandomInt){
		std::array<int ,arraySize> a;
		Dataset::randArray(a);
		hybridIf(a);
		isSorted(a);
	}

	TEST(Quicksort_hybridIf, AscDouble){
		std::array<double ,arraySize> a;
		Dataset::ascArray(a);
		hybridIf(a);
		isSorted(a);
	}

	TEST(Quicksort_hybridIf, DescDouble){
		std::array<double ,arraySize> a;
		Dataset::descArray(a);
		hybridIf(a);
		isSorted(a);
	}

	TEST(Quicksort_hybridIf, RandomDouble){
		std::array<double ,arraySize> a;
		Dataset::randArray(a);
		hybridIf(a);
		isSorted(a);
	}
	TEST(Quicksort_hybridIf, AscString){
		std::array<std::string ,arraySize> a;
		Dataset::ascArray(a);
		hybridIf(a);
		isSorted(a);
	}

	TEST(Quicksort_hybridIf, DescString){
		std::array<std::string ,arraySize> a;
		Dataset::descArray(a);
		hybridIf(a);
		isSorted(a);
	}

	TEST(Quicksort_hybridIf, RandomString){
		std::array<std::string ,arraySize> a;
		Dataset::randArray(a);
		hybridIf(a);
		isSorted(a);
	}
    
}