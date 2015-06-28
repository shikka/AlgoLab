#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Mergesort{

    TEST(Mergesort_bottomUp, AscInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		bottomUp(a);
		isSorted(a);
		isSame(a,b);
	}
	
	TEST(Mergesort_bottomUp, DescInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		bottomUp(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Mergesort_bottomUp, RandomInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		bottomUp(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Mergesort_bottomUp, AscDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		bottomUp(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Mergesort_bottomUp, DescDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		bottomUp(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Mergesort_bottomUp, RandomDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		bottomUp(a);
		isSorted(a);
		isSame(a,b);
	}
	TEST(Mergesort_bottomUp, AscString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		bottomUp(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Mergesort_bottomUp, DescString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		bottomUp(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Mergesort_bottomUp, RandomString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		bottomUp(a);
		isSorted(a);
		isSame(a,b);
	}
    
}