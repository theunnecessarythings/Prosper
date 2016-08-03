#ifndef VARIANT_LINEAR_H
#define VARIANT_LINEAR_H

#include <iostream>
#include <vector>

class Linear {
 private:
	std::vector<int> arr;
	int size, key;

 public:
	// Linear();
	int variantSearch(std::vector<int>&, int);
	int search(std::vector<int>&, int);
};

#endif
