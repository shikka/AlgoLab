#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Heapsort{

    TEST(Heapsort, AscInt){
        std::array<int ,arraySize> a;
        Dataset::ascArray(a);
        heapsort(a);
        isSorted(a);
    }
    
    TEST(Heapsort, DescInt){
        std::array<int ,arraySize> a;
        Dataset::descArray(a);
        heapsort(a);
        isSorted(a);
    }

    TEST(Heapsort, RandomInt){
        std::array<int ,arraySize> a;
        Dataset::randArray(a);
        heapsort(a);
        isSorted(a);
    }

    TEST(Heapsort, AscDouble){
        std::array<double ,arraySize> a;
        Dataset::ascArray(a);
        heapsort(a);
        isSorted(a);
    }

    TEST(Heapsort, DescDouble){
        std::array<double ,arraySize> a;
        Dataset::descArray(a);
        heapsort(a);
        isSorted(a);
    }

    TEST(Heapsort, RandomDouble){
        std::array<double ,arraySize> a;
        Dataset::randArray(a);
        heapsort(a);
        isSorted(a);
    }
    TEST(Heapsort, AscString){
        std::array<std::string ,arraySize> a;
        Dataset::ascArray(a);
        heapsort(a);
        isSorted(a);
    }

    TEST(Heapsort, DescString){
        std::array<std::string ,arraySize> a;
        Dataset::descArray(a);
        heapsort(a);
        isSorted(a);
    }

    TEST(Heapsort, RandomString){
        std::array<std::string ,arraySize> a;
        Dataset::randArray(a);
        heapsort(a);
        isSorted(a);
    }
    
}