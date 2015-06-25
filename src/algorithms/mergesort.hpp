#pragma once
#include <array>
#include <memory>
#include <iostream>
#include <fstream>
#include <algorithm>

namespace Mergesort{

    template <typename T, size_t SIZE>
    void merge(std::array<T,SIZE> &a, std::array<T,SIZE> *aux , size_t low, size_t middle, size_t high, bool asc){

		size_t left = low;
		size_t right = high-1;

		for(size_t j = left; j < high; j++)
		{
			if (left < middle && (right < middle || a[left] < a[right] || (asc && a[left] == a[right] ))){
				(*aux)[j] = a[left];
				left++;
			}else{
				(*aux)[j] = a[right];
				right--;
			}
		}
		
		if(asc)
			std::copy(aux->begin() + low, aux->begin() + high, a.begin() + low);

		if(!asc)
			std::reverse_copy(aux->begin() + low, aux->begin() + high, a.begin() + low);

    }


    template <typename T, size_t SIZE>
    void bottomUp(std::array<T,SIZE> &a){

    	if(SIZE <= 1)
			return;

		auto aux = std::make_shared<std::array<T,SIZE>>(a);
		bool asc = true;

		for(size_t width = 1; width < SIZE; width = 2 * width){
			
			asc = true;

			for(size_t i = 0; i < SIZE; i += 2 * width){

				merge(a, aux.get(), i, std::min(i + width, SIZE), std::min(i + 2 * width, SIZE), asc);

				asc = !asc;
			}
		}
    }

    template <typename T, size_t SIZE>
    void natural(std::array<T,SIZE> &a){

        auto aux = std::make_shared<std::array<T,SIZE>>();

        bool sorted = false;
        bool asc = true;
        size_t high = 0;
        size_t middle = 0;
        size_t low = 0;
        T x;

        while (!sorted){
            asc= true;
            high = 0;

           do{
                
                low = high;
                
                do {
                    x = a[high++];
                }while(high < SIZE && x <= a[high]); //ascending
                
                middle = high;

                while (high < SIZE && x >= a[high]){ //descending
                    x = a[high++];
                }

                if(middle <= high)
                    merge (a, aux.get(), low, middle,high, asc);
         
                asc = ! asc;
                if(low == 0 && middle >= SIZE)
                    sorted = true;

            } while (high < SIZE );

                    

        }
    }
    

}