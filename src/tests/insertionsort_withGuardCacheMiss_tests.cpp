#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Insertionsort{

    TEST(Insertionsort_withGuardCacheMiss, AscInt){
		std::array<int ,arraySize> a;
		Dataset::ascArray(a);
		withGuardCacheMiss(a);
		isSorted(a);
	}
	
	TEST(Insertionsort_withGuardCacheMiss, DescInt){
		std::array<int ,arraySize> a;
		Dataset::descArray(a);
		withGuardCacheMiss(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheMiss, RandomInt){
		std::array<int ,arraySize> a;
		Dataset::randArray(a);
		withGuardCacheMiss(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheMiss, AscDouble){
		std::array<double ,arraySize> a;
		Dataset::ascArray(a);
		withGuardCacheMiss(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheMiss, DescDouble){
		std::array<double ,arraySize> a;
		Dataset::descArray(a);
		withGuardCacheMiss(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheMiss, RandomDouble){
		std::array<double ,arraySize> a;
		Dataset::randArray(a);
		withGuardCacheMiss(a);
		isSorted(a);
	}
	TEST(Insertionsort_withGuardCacheMiss, AscString){
		std::array<std::string ,arraySize> a;
		Dataset::ascArray(a);
		withGuardCacheMiss(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheMiss, DescString){
		std::array<std::string ,arraySize> a;
		Dataset::descArray(a);
		withGuardCacheMiss(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheMiss, RandomString){
		std::array<std::string ,arraySize> a;
		Dataset::randArray(a);
		withGuardCacheMiss(a);
		isSorted(a);
	}
    
}