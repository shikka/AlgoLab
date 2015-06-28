#include <gtest/gtest.h>
#include <array>

const size_t arraySize = 1500;

template <typename T, size_t SIZE>
void isSorted(std::array<T,SIZE> &a){
    for(size_t i = 0; i < SIZE-1 ; i++ ){
        EXPECT_LE(a[i], a[i+1]); // val1 <= val2
    }
}


template<typename T, size_t SIZE>
bool hasSameElements(std::array<T, SIZE> original, std::array<T, SIZE> modified){
		
		for(const T& elem : original){
			if(std::find(modified.begin(), modified.end(), elem) == modified.end()){
				return false;
			}
		}
		return true;
}

template <typename T, size_t SIZE>
void isSame (std::array<T, SIZE> original, std::array<T, SIZE> modified){
	EXPECT_TRUE(hasSameElements(original, modified));
}



