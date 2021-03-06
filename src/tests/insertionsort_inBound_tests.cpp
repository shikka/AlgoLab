#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Insertionsort{

    TEST(Insertionsort_inBound, AscInt){
		std::array<int ,arraySize > a;
		std::array<int ,arraySize > b;
		Dataset::ascArray(a);
		b = a;
		inBound(a,0,arraySize -1);
		isSorted(a);
		isSame(a,b);
	}
	
	TEST(Insertionsort_inBound, DescInt){
		std::array<int ,arraySize > a;
		std::array<int ,arraySize > b;
		Dataset::descArray(a);
		b = a;
		inBound(a,0,arraySize -1);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_inBound, RandomInt){
		std::array<int ,arraySize > a;
		std::array<int ,arraySize > b;
		Dataset::randArray(a);
		b = a;
		inBound(a,0,arraySize -1);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_inBound, AscDouble){
		std::array<double ,arraySize > a;
		std::array<double ,arraySize > b;
		Dataset::ascArray(a);
		b = a;
		inBound(a,0,arraySize -1);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_inBound, DescDouble){
		std::array<double ,arraySize > a;
		std::array<double ,arraySize > b;
		Dataset::descArray(a);
		b = a;
		inBound(a,0,arraySize -1);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_inBound, RandomDouble){
		std::array<double ,arraySize > a;
		std::array<double ,arraySize > b;
		Dataset::randArray(a);
		b = a;
		inBound(a,0,arraySize -1);
		isSorted(a);
		isSame(a,b);
	}
	TEST(Insertionsort_inBound, AscString){
		std::array<std::string ,arraySize > a;
		std::array<std::string ,arraySize > b;
		Dataset::ascArray(a);
		b = a;
		inBound(a,0,arraySize -1);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_inBound, DescString){
		std::array<std::string ,arraySize > a;
		std::array<std::string ,arraySize > b;
		Dataset::descArray(a);
		b = a;
		inBound(a,0,arraySize -1);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_inBound, RandomString){
		std::array<std::string ,arraySize > a;
		std::array<std::string ,arraySize > b;
		Dataset::randArray(a);
		b = a;
		inBound(a,0,arraySize -1);
		isSorted(a);
		isSame(a,b);
	}
    
}