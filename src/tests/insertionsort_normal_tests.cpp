#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "../testUtils.hpp"

namespace Insertionsort{
	
	TEST(Insertionsort_normal, AscInt){
		std::array<int ,arraySize> a;
		Dataset::ascArray(a);
		normal(a);
		isSorted(a);
	}
	
	TEST(Insertionsort_normal, DescInt){
		std::array<int ,arraySize> a;
		Dataset::descArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_normal, RandomInt){
		std::array<int ,arraySize> a;
		Dataset::randArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_normal, AscDouble){
		std::array<double ,arraySize> a;
		Dataset::ascArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_normal, DescDouble){
		std::array<double ,arraySize> a;
		Dataset::descArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_normal, RandomDouble){
		std::array<double ,arraySize> a;
		Dataset::randArray(a);
		normal(a);
		isSorted(a);
	}
	TEST(Insertionsort_normal, AscString){
		std::array<std::string ,arraySize> a;
		Dataset::ascArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_normal, DescString){
		std::array<std::string ,arraySize> a;
		Dataset::descArray(a);
		normal(a);
		isSorted(a);
	}

	TEST(Insertionsort_normal, RandomString){
		std::array<std::string ,arraySize> a;
		Dataset::randArray(a);
		normal(a);
		isSorted(a);
	}
}