//Utilities functions to perform various operations
//Header file inclusion
#include "utilities.h"

using namespace std;

//Function to perform binary search	
int Utilities::binarySearch(vector<int>& array, int item, int low, int high) {
	if (high <= low) return (item > array[low]) ? (low + 1) : low;	//Return Index

	int mid = (low + high) / 2;	//Setting mid 

	if (item == array[mid]) return mid + 1;	//Item found at mid

	if (item > array[mid]) return binarySearch(array, item, mid + 1, high);	//Recursive calls
	return binarySearch(array, item, low, mid - 1);	//Recursive calls
}

//Swap Utility function
void Utilities::swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

