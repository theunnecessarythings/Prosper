/*Recursive Insertion Sort, Itterative Insertion Sort, Binary search based Insertion Sort & Counting Inversions */ 
#include "insertion_sort.h"
#include "utilities.h"

using namespace std;

/*InsertionSort :: InsertionSort (){
				int data;
				cout<<"Size : ";
				cin>>size;

				cout<<"Enter the array : ";
				for( int i = 0; i < size; i++ ){
								cin>>data;
								array.push_back(data);
				}
}
*/

void InsertionSort::sortIterative(vector<int>& array, int start, int end) { // iterative Insertion Sort:
	for (int pass = start + 1; pass < end - start + 1; pass++) {
		int item = array[pass];
		int index = pass - 1;
		while (item < array[index]) {
			array[index + 1] = array[index];
			index = index - 1;
		}
		array[index + 1] = item;
	}
}

/*void InsertionSort :: display (){
				sortIterative(array,0,size-1);
				for( int i = 0; i < array.size(); i++ )
								cout<<array[i]<<"\t";
				cout<<endl;
				cout<<countInversion(array);
}*/

void InsertionSort::sortRecursive(vector<int>& array, int pass) {  // recursive Insertion Sort
	if (pass < array.size()) {
		int index;
		int temp = array[pass];

		for (index = pass; index > 0 && array[index - 1] > temp; index--)
			array[index] = array[index - 1];
		array[index] = temp;

		sortRecursive(array, ++pass);
	}
}

void InsertionSort::sortUsingBinarySearch(vector<int>& array) { // binary search based Insertion Sort
	int pass, loc, index, key;

	for (pass = 1; pass < array.size(); ++pass) {
		index = pass - 1;
		key = array[pass];

		// find location where selected sould be inseretd
		loc = Utilities::binarySearch(array, key, 0, index);

		// Move all elements after location to create space
		while (index >= loc) {
			array[index + 1] = array[index];
			index--;
		}
		array[index + 1] = key;
	}
}

int InsertionSort::countInversion(vector<int>& array) {        // Counting Inversions
	int count = 0;
	for (int index_i = 0; index_i < array.size() - 1; index_i++) {
		for (int index_j = index_i + 1; index_j < array.size(); index_j++) {
			if (array[index_i] > array[index_j]) {
				count++;
			}
		}
	}
	return count;
}

/*int main(void){
				InsertionSort obj;
				obj.display();
				//obj.sort();
				//obj.display();
				return 0;
}
*/

