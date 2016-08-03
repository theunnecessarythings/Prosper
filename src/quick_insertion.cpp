//Program to perform Quick-Insertion Sort
//Header file inclusion
#include "quick_sort.h"
#include "insertion_sort.h"

using namespace std;

//Perform quick Insertion Sort
void QuickSort::quickInsertionSort(vector<int> arr, int start, int end) {
	if (start < end && (end - start > 20)) {	//Till problem size reduces to 20
		int pivot = partition(arr, start, end, 1); /* Partitioning index */
		quickInsertionSort(arr, start, pivot - 1);	//Recursive calls
		quickInsertionSort(arr, pivot + 1, end);
	}
	//InsertionSort::sortIterative(arr, start, end);
}
void QuickSort::quickInSort(vector<int> arr, int start, int end) {
	quickInsertionSort(array, 0, array.size() - 1);
	InsertionSort::sortIterative(arr, start, end);//Insertion Sort on whole array
}

/*int main(void){
				QuickSort obj;
				obj.display();
				return 0;
}*/

