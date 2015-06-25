#pragma once
#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <map>
#include <functional>
#include <vector>
#include <chrono>

#include "dataset.hpp"
#include "../algorithms/algorithms.hpp"

namespace Benchmark{

 	typedef std::map<std::string, std::vector<std::chrono::milliseconds>> benchmarkdata;//microseconds
		struct benchmarkdataset{
			benchmarkdata asc,desc,rand;
		};



	void flushCache(){
		const size_t SIZE = 20*1024*1024; // Allocate 20M. Set much larger then L2
		auto tmp = new std::array<double, SIZE>;
		Dataset::randArray(*tmp);
		delete tmp;
	} 



	template <typename T, size_t S>
	std::chrono::milliseconds stoptime(std::function<void(std::array<T,S>&)> f, std::array<T,S> &a){
		std::chrono::time_point<std::chrono::system_clock> start, end;
		flushCache();
		start = std::chrono::system_clock::now();
		f(a);
		end = std::chrono::system_clock::now();
		return std::chrono::duration_cast<std::chrono::milliseconds>(end-start); // nanoseconds
	}

	template <typename T, size_t I>
	void benchmarkIterator(benchmarkdataset& data){
		benchmarkIterator<T,I-1>(data);
		const size_t S = 10000 * (1 << (I - 1));
		std::vector<std::pair<std::string, std::function<void(std::array<T,S>&)>>> sfv;
		sfv= { {"Insertionsort",Insertionsort::normal<T,S>},
				{"Insertionsort with Guard",Insertionsort::withGuardCacheMiss<T,S>},
				{"Insertionsort with Guard (Cache optimized)",Insertionsort::withGuardCacheOp<T,S>},
				{"Mergesort Bottom-Up",Mergesort::bottomUp<T,S>},
				{"Mergesort Natural",Mergesort::natural<T,S>},
				{"Quicksort",Quicksort::quicksort<T,S>},
				{"Quicksort Hybrid IF",Quicksort::hybridIf<T,S>},
				{"Quicksort Hybrid Else",Quicksort::hybridElse<T,S>},
				{"Heapsort Bottom-Up",Heapsort::heapsort<T,S>},
			};

		auto aAsc = new std::array<T, S>;
		Dataset::ascArray(*aAsc);
		auto aDesc = new std::array<T, S>;
		Dataset::descArray(*aDesc);
		auto aRand = new std::array<T, S>;
		Dataset::randArray(*aRand);
		std::vector<
		std::pair<std::array<T ,S>&,benchmarkdata& >>arrays;
		arrays = { {*aAsc,data.asc},
		{*aDesc,data.desc},
		{*aRand,data.rand}
		};
		std::cout << "Array Size: " << S << std::endl;
		for(auto &arr : arrays){
			for(auto sf : sfv){
				if(!((sf.first == "Insertionsort" ||
				sf.first == "Insertionsort with Guard" ||
				sf.first == "Insertionsort with Guard (Cache optimized)") && S > 640000)){ //640000
					auto cp = new std::array<T, S>(arr.first);
					auto time = stoptime(sf.second,*cp);
					std::cout << " " << sf.first << ": " << time.count() << std::endl;
					arr.second[sf.first].push_back(time);
					delete cp;
				}
			}
		}
		std::cout << "-----------------------" << std::endl;
		delete aAsc;
		delete aDesc;
		delete aRand;
	}

	template<>
	void benchmarkIterator<double,0>(benchmarkdataset& ){
	}



	void writeDataToCSV(std::ostream& stream,benchmarkdata data,size_t iterations){
		stream << "Array Size";
		for(size_t i = 1; i <= iterations ; i++ ){
			stream << "," << (10000 << (i-1));
		}
		stream << std::endl;
		for(auto v : data){
			stream << v.first;
			for(auto time : v.second){
				stream << "," << time.count();
			}
			stream << std::endl;
		}
	}

	 void printCSV(benchmarkdataset data,size_t iterations){
		std::ofstream csv("benchmark.csv");
		csv << "Ascending" << std::endl;
		writeDataToCSV(csv,data.asc,iterations);
		csv << "Descending"<< std::endl;
		writeDataToCSV(csv,data.desc,iterations);
		csv << "Random"<< std::endl;
		writeDataToCSV(csv,data.rand,iterations);
		csv.close();
	}

	void benchmark(){
		const size_t iterations = 12;
		benchmarkdataset data;
		benchmarkIterator<double,iterations>(data);
		printCSV(data,iterations);
	}
}