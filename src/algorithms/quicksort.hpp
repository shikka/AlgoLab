#pragma once
#include <array>
#include <memory>

#include "mergesort.hpp"
#include "insertionsort.hpp"

namespace Quicksort {
	
	template <typename T, size_t SIZE>
	void threeWayPartitioning (std::array<T,SIZE> &a, int left, int right){

        if(right <= left){
            return;
        }

        int low = left-1;
        int high = right;

        int pLow = left-1;
        int pHigh = right;

        int middle = (left+right)/2;
        T pivot = a[middle];
        std::swap(a[middle] , a[right]);


        for(;;){
            
            while( a[++low] < pivot );
         
            while( pivot < a[--high] ){
                if(high == left)
                    break;
            }

            if(low >= high)
                break;
            std::swap(a[low] , a[high]);

            if(a[low] == pivot){
                pLow++;
                std::swap(a[pLow] , a[low]);
            }

            if(pivot == a[high]){
                pHigh--;
                std::swap(a[high] , a[pHigh]);
            }
        }
        std::swap(a[low] , a[right]);
        high = low-1;
        low = low +1;

        int k;
        for(k = left ; k <= pLow ; k++,high--){
            std::swap(a[k] , a[high]);
        }

        for(k = right-1 ; k > pHigh ; k--, low++){
            std::swap(a[k] , a[low]);
        }
        threeWayPartitioning(a,left,high);

        threeWayPartitioning(a,low,right);
    }

   	

    template <typename T, size_t SIZE>
	void quicksort (std::array<T,SIZE> &a){
     	if (SIZE <= 1){
            return;
        }
        threeWayPartitioning(a, 0, SIZE-1);

	}




	template <typename T, size_t SIZE>
    void hybridSortIf(std::array<T,SIZE> &a, std::array<T,SIZE> *aux, int left, int right){
        
        if(right-left < 25){
            Insertionsort::inBound(a,left,right);
            return;
        }

        int low = left-1;
        int high = right;

        int pLow = left-1;
        int pHigh = right;

        int middle = (left+right)/2;
        T pivot = a[middle];
        std::swap(a[middle] , a[right]);


        for(;;){
            
            while( a[++low] < pivot );
         
            while( pivot < a[--high] ){
                if(high == left)
                    break;
            }

            if(low >= high)
                break;
            std::swap(a[low] , a[high]);

            if(a[low] == pivot){
                pLow++;
                std::swap(a[pLow] , a[low]);
            }

            if(pivot == a[high]){
                pHigh--;
                std::swap(a[high] , a[pHigh]);
            }
        }
        std::swap(a[low] , a[right]);
        high = low-1;
        low = low +1;

        int k;
        for(k = left ; k <= pLow ; k++,high--){
            std::swap(a[k] , a[high]);
        }

        for(k = right-1 ; k > pHigh ; k--, low++){
            std::swap(a[k] , a[low]);
        }

        if((high-left)*100 < right-low || high-left > (right-low)*100){
            hybridSortIf(a,aux,left,middle);
            hybridSortIf(a,aux,middle,right);
            std::reverse( a.begin() + middle, a.begin() + right);
            Mergesort::merge(a, aux,left, middle, right, true);
            return;
        }
        hybridSortIf(a,aux,left,high);
        hybridSortIf(a,aux,low,right);
    }

    template <typename T, size_t SIZE>
    void hybridIf(std::array<T,SIZE> &a){
        
        if (SIZE <= 1){
            return;
        }
        auto aux = std::make_shared<std::array<T, SIZE>>();
        hybridSortIf(a,aux.get(), 0, SIZE-1);
    }


    template <typename T, size_t SIZE>
    void hybridSortElse(std::array<T,SIZE> &a, std::array<T,SIZE> *aux, int left, int right){
        

        if(right-left < 25){
            Insertionsort::inBound(a,left,right);
            return;
        }

        int low = left-1;
        int high = right;

        int pLow = left-1;
        int pHigh = right;

        int middle = (left+right)/2;
        T pivot = a[middle];
        std::swap(a[middle] , a[right]);


        for(;;){
            
            while( a[++low] < pivot );
         
            while( pivot < a[--high] ){
                if(high == left)
                    break;
            }

            if(low >= high)
                break;
            std::swap(a[low] , a[high]);

            if(a[low] == pivot){
                pLow++;
                std::swap(a[pLow] , a[low]);
            }

            if(pivot == a[high]){
                pHigh--;
                std::swap(a[high] , a[pHigh]);
            }
        }
        std::swap(a[low] , a[right]);
        high = low-1;
        low = low +1;

        int k;
        for(k = left ; k <= pLow ; k++,high--){
            std::swap(a[k] , a[high]);
        }

        for(k = right-1 ; k > pHigh ; k--, low++){
            std::swap(a[k] , a[low]);
        }

        if((high-left)*100 < right-low || high-left > (right-low)*100){
            
            hybridSortElse(a,aux,left,middle);
            hybridSortElse(a,aux,middle,right);
            std::reverse( a.begin() + middle, a.begin() + right);
            Mergesort::merge(a, aux,left, middle, right, true);
        }else{
	        hybridSortElse(a,aux,left,high);
	        hybridSortElse(a,aux,low,right);
    	}
    }

    template <typename T, size_t SIZE>
    void hybridElse(std::array<T,SIZE> &a){
        
        if (SIZE <= 1){
            return;
        }
        auto aux = std::make_shared<std::array<T, SIZE>>();
        hybridSortElse(a, aux.get(), 0, SIZE-1);
    }



}