#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Mergesort{

    TEST(Mergesort_bottomUp, AscInt){
		std::array<int ,arraySize> a;
		Dataset::ascArray(a);
		bottomUp(a);
		isSorted(a);
	}
	
	TEST(Mergesort_bottomUp, DescInt){
		std::array<int ,arraySize> a;
		Dataset::descArray(a);
		bottomUp(a);
		isSorted(a);
	}

	TEST(Mergesort_bottomUp, RandomInt){
		std::array<int ,arraySize> a;
		Dataset::randArray(a);
		bottomUp(a);
		isSorted(a);
	}

	TEST(Mergesort_bottomUp, AscDouble){
		std::array<double ,arraySize> a;
		Dataset::ascArray(a);
		bottomUp(a);
		isSorted(a);
	}

	TEST(Mergesort_bottomUp, DescDouble){
		std::array<double ,arraySize> a;
		Dataset::descArray(a);
		bottomUp(a);
		isSorted(a);
	}

	TEST(Mergesort_bottomUp, RandomDouble){
		std::array<double ,arraySize> a;
		Dataset::randArray(a);
		bottomUp(a);
		isSorted(a);
	}
	TEST(Mergesort_bottomUp, AscString){
		std::array<std::string ,arraySize> a;
		Dataset::ascArray(a);
		bottomUp(a);
		isSorted(a);
	}

	TEST(Mergesort_bottomUp, DescString){
		std::array<std::string ,arraySize> a;
		Dataset::descArray(a);
		bottomUp(a);
		isSorted(a);
	}

	TEST(Mergesort_bottomUp, RandomString){
		std::array<std::string ,arraySize> a;
		Dataset::randArray(a);
		bottomUp(a);
		isSorted(a);
	}
    
}