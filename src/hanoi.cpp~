//Program to show the moves to solve Tower of Hanoi Problem
//Includeing header file
#include "hanoi.h"

using namespace std;

/*Hanoi::Hanoi() {
				cout << "Enter no of disks : ";
				cin >> size;
				A.push_back(0);
				B.push_back(0);
				C.push_back(0);
				for(int i=size;i>=1;i--)
								A.push_back(i);


}*/
//Make function 
void Hanoi::make() {
	cout << "Enter no of disks : ";
	cin >> size;	//Reading no of disks
	A.push_back(0);	//Initialising the pegs with 0 to avoid vector.size() problem
	B.push_back(0);
	C.push_back(0);
	for (int i = size; i >= 1; i--) A.push_back(i);	//Pushing back n disks on Peg A
	display();
	makeTower(size, A, B, C);			//Calling makeTower()
}

//Function to make the tower at Peg C
void Hanoi::makeTower(int n, vector<int>& fromPeg, vector<int>& auxPeg, vector<int>& toPeg) {
	if (n > 0) {
		makeTower(n - 1, fromPeg, toPeg, auxPeg);	//Recursive call
		toPeg.push_back(fromPeg.back());
		fromPeg.pop_back();			//moving the disk from the fromPeg to toPeg
		display();
		makeTower(n - 1, auxPeg, fromPeg, toPeg);	//Recursive call
	}
}

//Display the tower
void Hanoi::display() {
	cout << "A:";
	for (int i = 1; i < A.size(); i++) cout << A[i] << " ";
	cout << endl;
	cout << "B:";
	for (int i = 1; i < B.size(); i++) cout << B[i] << " ";
	cout << endl;
	cout << "C:";
	for (int i = 1; i < C.size(); i++) cout << C[i] << " ";
	cout << endl << endl;
}

/*int main(void) {
				Hanoi obj;

				return 0;
}*/
