#include <gtest/gtest.h>
#include <array>

const size_t arraySize = 1000;

template <typename T, size_t SIZE>
void isSorted(std::array<T,SIZE> &a){
	for(size_t i = 0; i < SIZE-1 ; i++ ){
		EXPECT_LE(a[i], a[i+1]); //EXPECT_LE(val1, val2); 	val1 <= val2
	}
}