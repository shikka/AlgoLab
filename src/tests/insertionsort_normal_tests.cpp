#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Insertionsort{

    TEST(Insertionsort_normal, AscInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		normal(a);
		isSorted(a);
		isSame(a,b);
	}
	
	TEST(Insertionsort_normal, DescInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		normal(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_normal, RandomInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		normal(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_normal, AscDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		normal(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_normal, DescDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		normal(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_normal, RandomDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		normal(a);
		isSorted(a);
		isSame(a,b);
	}
	TEST(Insertionsort_normal, AscString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		normal(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_normal, DescString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		normal(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_normal, RandomString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		normal(a);
		isSorted(a);
		isSame(a,b);
	}
    
}