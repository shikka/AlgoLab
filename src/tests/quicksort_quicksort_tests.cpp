#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Quicksort{

    TEST(Quicksort_quicksort, AscInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		quicksort(a);
		isSorted(a);
		isSame(a,b);
	}
	
	TEST(Quicksort_quicksort, DescInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		quicksort(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_quicksort, RandomInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		quicksort(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_quicksort, AscDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		quicksort(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_quicksort, DescDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		quicksort(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_quicksort, RandomDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		quicksort(a);
		isSorted(a);
		isSame(a,b);
	}
	TEST(Quicksort_quicksort, AscString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		quicksort(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_quicksort, DescString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		quicksort(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Quicksort_quicksort, RandomString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		quicksort(a);
		isSorted(a);
		isSame(a,b);
	}
    
}