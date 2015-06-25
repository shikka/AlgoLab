#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Insertionsort{

    TEST(Insertionsort_inBound, AscInt){
		std::array<int ,arraySize > a;
		Dataset::ascArray(a);
		inBound(a,0,arraySize -1);
		isSorted(a);
	}
	
	TEST(Insertionsort_inBound, DescInt){
		std::array<int ,arraySize > a;
		Dataset::descArray(a);
		inBound(a,0,arraySize -1);
		isSorted(a);
	}

	TEST(Insertionsort_inBound, RandomInt){
		std::array<int ,arraySize > a;
		Dataset::randArray(a);
		inBound(a,0,arraySize -1);
		isSorted(a);
	}

	TEST(Insertionsort_inBound, AscDouble){
		std::array<double ,arraySize > a;
		Dataset::ascArray(a);
		inBound(a,0,arraySize -1);
		isSorted(a);
	}

	TEST(Insertionsort_inBound, DescDouble){
		std::array<double ,arraySize > a;
		Dataset::descArray(a);
		inBound(a,0,arraySize -1);
		isSorted(a);
	}

	TEST(Insertionsort_inBound, RandomDouble){
		std::array<double ,arraySize > a;
		Dataset::randArray(a);
		inBound(a,0,arraySize -1);
		isSorted(a);
	}
	TEST(Insertionsort_inBound, AscString){
		std::array<std::string ,arraySize > a;
		Dataset::ascArray(a);
		inBound(a,0,arraySize -1);
		isSorted(a);
	}

	TEST(Insertionsort_inBound, DescString){
		std::array<std::string ,arraySize > a;
		Dataset::descArray(a);
		inBound(a,0,arraySize -1);
		isSorted(a);
	}

	TEST(Insertionsort_inBound, RandomString){
		std::array<std::string ,arraySize > a;
		Dataset::randArray(a);
		inBound(a,0,arraySize -1);
		isSorted(a);
	}
    
}