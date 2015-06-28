#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Quicksort{

    TEST(Quicksort_hybridElse, AscInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		hybridElse(a);
		isSorted(a);
		isSame(a,b);
	}
	
	TEST(Quicksort_hybridElse, DescInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		hybridElse(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_hybridElse, RandomInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		hybridElse(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_hybridElse, AscDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		hybridElse(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_hybridElse, DescDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		hybridElse(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_hybridElse, RandomDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		hybridElse(a);
		isSorted(a);
		isSame(a,b);
	}
	TEST(Quicksort_hybridElse, AscString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		hybridElse(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_hybridElse, DescString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		hybridElse(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_hybridElse, RandomString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		hybridElse(a);
		isSorted(a);
		isSame(a,b);
	}
    
}