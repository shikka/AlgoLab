#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Mergesort{

    TEST(Mergesort_natural, AscInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		natural(a);
		isSorted(a);
		isSame(a,b);
	}
	
	TEST(Mergesort_natural, DescInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		natural(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Mergesort_natural, RandomInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		natural(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Mergesort_natural, AscDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		natural(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Mergesort_natural, DescDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		natural(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Mergesort_natural, RandomDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		natural(a);
		isSorted(a);
		isSame(a,b);
	}
	TEST(Mergesort_natural, AscString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		natural(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Mergesort_natural, DescString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		natural(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Mergesort_natural, RandomString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		natural(a);
		isSorted(a);
		isSame(a,b);
	}
    
}