#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Quicksort{

    TEST(Quicksort_hybridIf, AscInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		hybridIf(a);
		isSorted(a);
		isSame(a,b);
	}
	
	TEST(Quicksort_hybridIf, DescInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		hybridIf(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_hybridIf, RandomInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		hybridIf(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_hybridIf, AscDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		hybridIf(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_hybridIf, DescDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		hybridIf(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_hybridIf, RandomDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		hybridIf(a);
		isSorted(a);
		isSame(a,b);
	}
	TEST(Quicksort_hybridIf, AscString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		hybridIf(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_hybridIf, DescString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		hybridIf(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_hybridIf, RandomString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		hybridIf(a);
		isSorted(a);
		isSame(a,b);
	}
    
}