#include <gtest/gtest.h>
#include <string>
#include "../algorithms/insertionsort.hpp"
#include "../benchmarks/dataset.hpp"
#include "../testUtils.hpp"

namespace Insertionsort{
	
	TEST(Insertionsort_withGuardCacheOp, AscInt){
		std::array<int ,arraySize> a;
		Dataset::ascArray(a);
		normal(a);
		isSorted(a);
	}
	
	TEST(Insertionsort_withGuardCacheOp, DescInt){
		std::array<int ,arraySize> a;
		Dataset::descArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheOp, RandomInt){
		std::array<int ,arraySize> a;
		Dataset::randArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheOp, AscDouble){
		std::array<double ,arraySize> a;
		Dataset::ascArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheOp, DescDouble){
		std::array<double ,arraySize> a;
		Dataset::descArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheOp, RandomDouble){
		std::array<double ,arraySize> a;
		Dataset::randArray(a);
		normal(a);
		isSorted(a);
	}
	TEST(Insertionsort_withGuardCacheOp, AscString){
		std::array<std::string ,arraySize> a;
		Dataset::ascArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheOp, DescString){
		std::array<std::string ,arraySize> a;
		Dataset::descArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheOp, RandomString){
		std::array<std::string ,arraySize> a;
		Dataset::randArray(a);
		normal(a);
		isSorted(a);
	}
}