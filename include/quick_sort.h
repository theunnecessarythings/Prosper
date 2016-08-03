

#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <vector>
#include <cstdlib>
#include <iostream>

class QuickSort {
 private:
	std::vector<int> array;	// Change this to vector later
	size_t size;	// make it dynamic
 public:
	// QuickSort();
	void sort(std::vector<int>&, int, int, int);
	// void display();
	int partition(std::vector<int>&, int, int, int);
	int selectPivot(int, int, int);
	void quickInsertionSort(std::vector<int>, int, int);
	void quickInSort(std::vector<int>, int, int);
};

#endif
