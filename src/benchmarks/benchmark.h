#pragma once
#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <map>
#include <functional>
#include <vector>
#include <chrono>

namespace Benchmark{




	void flushCache{
		const size_t SIZE = 20*1024*1024; // Allocate 20M. Set much larger then L2
		auto tmp = new std::array<double, SIZE>;
		Dataset::randArray(*tmp);
		delete tmp;
	} 

	void benchmark(){

	}
}