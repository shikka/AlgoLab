#include <gtest/gtest.h>
#include <string>
#include "../algorithms/algorithms.hpp"
#include "../benchmarks/dataset.hpp"
#include "testCases.hpp"


namespace Heapsort{

    TEST(Heapsort, AscInt){
        std::array<int ,arraySize> a;
        std::array<int ,arraySize> b;
        Dataset::ascArray(a);
        b = a;
        heapsort(a);
        isSorted(a);
        isSame(a,b);
    }
    
    TEST(Heapsort, DescInt){
        std::array<int ,arraySize> a;
        std::array<int ,arraySize> b;
        Dataset::descArray(a);
        b = a;
        heapsort(a);
        isSorted(a);
        isSame(a,b);
    }

    TEST(Heapsort, RandomInt){
        std::array<int ,arraySize> a;
        std::array<int ,arraySize> b;
        Dataset::randArray(a);
        b = a;
        heapsort(a);
        isSorted(a);
        isSame(a,b);
    }

    TEST(Heapsort, AscDouble){
        std::array<double ,arraySize> a;
        std::array<double ,arraySize> b;
        Dataset::ascArray(a);
        b = a;
        heapsort(a);
        isSorted(a);
        isSame(a,b);
    }

    TEST(Heapsort, DescDouble){
        std::array<double ,arraySize> a;
        std::array<double ,arraySize> b;
        Dataset::descArray(a);
        b = a;
        heapsort(a);
        isSorted(a);
        isSame(a,b);
    }

    TEST(Heapsort, RandomDouble){
        std::array<double ,arraySize> a;
        std::array<double ,arraySize> b;
        Dataset::randArray(a);
        b = a;
        heapsort(a);
        isSorted(a);
        isSame(a,b);
    }
    TEST(Heapsort, AscString){
        std::array<std::string ,arraySize> a;
        std::array<std::string ,arraySize> b;
        Dataset::ascArray(a);
        b = a;
        heapsort(a);
        isSorted(a);
        isSame(a,b);
    }

    TEST(Heapsort, DescString){
        std::array<std::string ,arraySize> a;
        std::array<std::string ,arraySize> b;
        Dataset::descArray(a);
        b = a;
        heapsort(a);
        isSorted(a);
        isSame(a,b);
    }

    TEST(Heapsort, RandomString){
        std::array<std::string ,arraySize> a;
        std::array<std::string ,arraySize> b;
        Dataset::randArray(a);
        b = a;
        heapsort(a);
        isSorted(a);
        isSame(a,b);
    }
    
}