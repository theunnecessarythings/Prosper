#ifndef LADDER_CLIMB_H
#define LADDER_CLIMB_H
#include <iostream>
#include <vector>
using namespace std;

class Ladder {
 private:
	std::vector<int> arr;

 public:
	void printArray(std::vector<int>& arr, int size);
	void printCompositions(int n, int i);
	int countPossibleWays(int n);
};

#endif
