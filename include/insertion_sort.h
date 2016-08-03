
#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <iostream>
#include <vector>

class InsertionSort {
 private:
	std::vector<int> array;	// Change this to vector later
	size_t size;	// make it dynamic
 public:
	// InsertionSort();
	void sortUsingBinarySearch(std::vector<int>&);
	static void sortIterative(std::vector<int>&, int, int);
	void sortRecursive(std::vector<int>&, int);
	int countInversion(std::vector<int>&);
	// void display();
};

#endif
