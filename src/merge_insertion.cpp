//Perform classical merge sort till the problem size reduces to 20.For the problem size 20, perform insertion sort
#include "merge_sort.h"
#include "insertion_sort.h"
using namespace std;

void MergeSort::mergeInsertionSort(vector<int> &arr, int low, int high) {
	int mid;

	if (high - low <= 20) InsertionSort::sortIterative(arr, low, high);//base case condition
	if (low < high) {
		mid = (low + high) / 2;
		mergeInsertionSort(arr, low, mid);
		mergeInsertionSort(arr, mid + 1, high);
		merge(arr, low, high, mid);
	}
}

/*int main(void){
				MergeSort obj;
				obj.sort();
				obj.display();
				return 0;
}*/

