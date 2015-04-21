#include <gtest/gtest.h>
#include <string>
#include "../algorithms/insertionsort.hpp"
#include "../benchmarks/dataset.hpp"
#include "../testUtils.hpp"

namespace Insertionsort{
	
	TEST(Insertionsort_withGuardCacheMiss, AscInt){
		std::array<int ,arraySize> a;
		Dataset::ascArray(a);
		normal(a);
		isSorted(a);
	}
	
	TEST(Insertionsort_withGuardCacheMiss, DescInt){
		std::array<int ,arraySize> a;
		Dataset::descArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheMiss, RandomInt){
		std::array<int ,arraySize> a;
		Dataset::randArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheMiss, AscDouble){
		std::array<double ,arraySize> a;
		Dataset::ascArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheMiss, DescDouble){
		std::array<double ,arraySize> a;
		Dataset::descArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheMiss, RandomDouble){
		std::array<double ,arraySize> a;
		Dataset::randArray(a);
		normal(a);
		isSorted(a);
	}
	TEST(Insertionsort_withGuardCacheMiss, AscString){
		std::array<std::string ,arraySize> a;
		Dataset::ascArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheMiss, DescString){
		std::array<std::string ,arraySize> a;
		Dataset::descArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_withGuardCacheMiss, RandomString){
		std::array<std::string ,arraySize> a;
		Dataset::randArray(a);
		normal(a);
		isSorted(a);
	}
}