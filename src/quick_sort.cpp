#include "quick_sort.h"
#include "utilities.h"

using namespace std;

/*QuickSort :: QuickSort (){
				int data;
				cout<<"Size : ";
				cin>>size;
				cout<<"Enter the array : ";
				for( int i = 0; i < size; i++ ){
								cin>>data;
								array.push_back(data);
				}
}

void QuickSort :: display (){
				quickInsertionSort(array,0,size-1);
				for( int i = 0; i < size; i++ )
								cout<<array[i]<<"\t";
				cout<<endl;
}*/

int QuickSort::selectPivot(int start, int end, int opt) {
	switch (opt) {
		case 1:
			return start;

		case 2:
			return start + (end - start) / 2;

		case 3:
			return start + rand() % (end - start + 1);

		default:
			return end;
	}
}

int QuickSort::partition(vector<int> &arr, int start, int end, int opt) {
	int pivot_index = selectPivot(start, end, opt);
	int pivot = arr[pivot_index];

	Utilities::swap(&arr[pivot_index], &arr[end]);	// swap random pivot to end.
	pivot_index = end;
	int i = start - 1;

	for (int j = start; j <= end - 1; j++) {
		if (arr[j] <= pivot) {
			i++;
			Utilities::swap(&arr[i], &arr[j]);
		}
	}
	Utilities::swap(&arr[i + 1],
									&arr[pivot_index]);	// place the pivot to right place

	return i + 1;
}

void QuickSort::sort(vector<int> &arr, int start, int end, int opt) {
	if (start < end) {
		int pivot = partition(arr, start, end, opt); /* Partitioning index */
		sort(arr, start, pivot - 1, opt);
		sort(arr, pivot + 1, end, opt);
	}
}

/*int main(void){
				QuickSort obj;
				obj.display();
				return 0;
}*/

