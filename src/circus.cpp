/*A circus is designing a tower routine consisting of people standing atop one another’s
shoulders. For practical and aesthetic reasons, each person must be both shorter and lighter than
the person below him. Given the heights and weights of each person in the circus, write a method
to compute the largest possible number of people in such a tower*/

#include "circus.h"

using namespace std;

bool cmp(person p1, person p2) {    
	if (p1.h == p2.h)                  // comparing weight when heights are same
		return p1.w < p2.w;
	else
		return p1.h < p2.h;        //  comparing height
}

void Circus::calc_LIS(vector<int>& weight, vector<int>& height) { //Funtion to Find Largest Increasing Sequence 
	vector<vector<int>> Lweight(weight.size());                  // Lweight[i] = array of longest increasing subsequence that ends with i th element                    
	vector<vector<int>> Lheight(weight.size());                //  Lheight[i] = array of longest increasing subsequence that ends with i th element                         
	int max, maxIndex;
	Lweight[0].push_back(weight[0]);                         // inserting first person's weight                           
	Lheight[0].push_back(height[0]);                        // inserting first person's height
	for (int i = 1; i < weight.size(); i++) {              // Forming Lweight and Lheight
		for (int j = 0; j < i; j++) {                   
			if ((weight[j] <= weight[i]) &&
					(Lheight[i].size() < Lheight[j].size() + 1)) {
				Lweight[i] = Lweight[j];
				Lheight[i] = Lheight[j];
			}
		}
		Lweight[i].push_back(weight[i]);
		Lheight[i].push_back(height[i]);
	}
	max = Lweight[0].size();                            // Finding the max size among the size of the subsequence         
	maxIndex = 0;
	for (int i = 1; i < weight.size(); i++) {
		if (Lweight[i].size() > max) {
			max = Lweight[i].size();
			maxIndex = i;
		}
	}

	// print
	cout << "Max Height of the tower : " << Lweight[maxIndex].size() << endl;
	for (int i = 0; i < Lweight[maxIndex].size(); i++)
		cout << Lweight[maxIndex][i] << " " << Lheight[maxIndex][i] << endl;
}

void Circus::makeTower() {
	vector<int> weight, height;        // ARRAYS OF WEIGHTS AND HEIGHTS                 
	cout << "Enter no of people : ";
	int size;
	cin >> size;
	cout << "Enter the heights and weights : " << endl;
	for (int i = 0; i < size; ++i) cin >> p[i].w >> p[i].h;
	sort(p, p + size, cmp);            // Calling Inbuild 'sort()' in "algorithm" ... SORTING WRT HEIGHT And WEIGHT
	for (int i = 0; i < size; i++) {
		cout << p[i].w << " " << p[i].h << endl;
		weight.push_back(p[i].w);
		height.push_back(p[i].h);
	}
	calc_LIS(weight, height);
}
/*int main(void){
				Circus obj;

				obj.makeTower();

				return 0;
}*/
