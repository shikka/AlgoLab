#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Insertionsort{

    TEST(Insertionsort_withGuardCacheOp, AscInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		withGuardCacheOp(a);
		isSorted(a);
		isSame(a,b);
	}
	
	TEST(Insertionsort_withGuardCacheOp, DescInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		withGuardCacheOp(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_withGuardCacheOp, RandomInt){
		std::array<int ,arraySize> a;
		std::array<int ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		withGuardCacheOp(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_withGuardCacheOp, AscDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		withGuardCacheOp(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_withGuardCacheOp, DescDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		withGuardCacheOp(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_withGuardCacheOp, RandomDouble){
		std::array<double ,arraySize> a;
		std::array<double ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		withGuardCacheOp(a);
		isSorted(a);
		isSame(a,b);
	}
	TEST(Insertionsort_withGuardCacheOp, AscString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::ascArray(a);
		b = a;
		withGuardCacheOp(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_withGuardCacheOp, DescString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::descArray(a);
		b = a;
		withGuardCacheOp(a);
		isSorted(a);
		isSame(a,b);
	}

	TEST(Insertionsort_withGuardCacheOp, RandomString){
		std::array<std::string ,arraySize> a;
		std::array<std::string ,arraySize> b;
		Dataset::randArray(a);
		b = a;
		withGuardCacheOp(a);
		isSorted(a);
		isSame(a,b);
	}
    
}