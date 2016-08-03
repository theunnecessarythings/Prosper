//Program to perform Variant Linear Search and Linear Search
//Header file inclusion
#include "variant_linear.h"

using namespace std;

/*Linear::Linear(){
				cout<<"Enter the size: ";
				cin>>size;
				int data;
				for(int i=0;i<size;i++){
								cin>>data;
								arr.push_back(data);
				}
				cout<<"Enter the key : ";
				cin>>key;

				if(search(arr,key)!=-1)
								cout<<"Key is found at "<<search(arr,key)<<endl;
				else
								cout<<"Key is not found "<<endl;
}*/
//Variant Linear Search
int Linear::variantSearch(vector<int>& arr, int key) {
	for (int i = 0; i <= (arr.size()) / 2; i++) {
		if (arr[i] == key) return i;				//From front
		if (arr[arr.size() - 1 - i] == key) return arr.size() - 1 - i;	//From back
	}
	return -1; //Key not found
}
int Linear::search(vector<int>& arr, int key) {
	for (int i = 0; i < arr.size(); i++)
		if (arr[i] == key) return i;

	return -1;	//Key not found
}
/*int main(void){
				Linear obj;
				return 0;
}	*/
