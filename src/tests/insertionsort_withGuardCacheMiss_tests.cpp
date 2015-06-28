#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Insertionsort{

    TEST(Insertionsort_withGuardCacheMiss, AscInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		withGuardCacheMiss(a);
		isSorted(a);
		isSame(a,b);
	}
	
	TEST(Insertionsort_withGuardCacheMiss, DescInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		withGuardCacheMiss(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_withGuardCacheMiss, RandomInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		withGuardCacheMiss(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_withGuardCacheMiss, AscDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		withGuardCacheMiss(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_withGuardCacheMiss, DescDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		withGuardCacheMiss(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_withGuardCacheMiss, RandomDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		withGuardCacheMiss(a);
		isSorted(a);
		isSame(a,b);
	}
	TEST(Insertionsort_withGuardCacheMiss, AscString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		withGuardCacheMiss(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_withGuardCacheMiss, DescString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		withGuardCacheMiss(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_withGuardCacheMiss, RandomString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		withGuardCacheMiss(a);
		isSorted(a);
		isSame(a,b);
	}
    
}