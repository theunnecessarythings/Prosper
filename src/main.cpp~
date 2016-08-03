#include "main.h"
//Live Long and Prosper
using namespace std;

int main(void) {
	int opt, step;
	char ch;
	
	start:
	
	system( "clear" );
	cout << "\t\t\tProsper\n1.Analyse Sorting Algorithms\n2.Tower of "
					"Hanoi\n3.Monkey Climbing Ladder\n4.Circus Tower Problem\n5.Triomino "
					"Tiling\n0.Exit\n";
	cout << "Enter the option : ";
	cin >> opt;
	switch (opt) {
		case 0:
			cout << "Thank you for using Prosper"<<endl<<"Live Long and Prosper\nNow get out"<<endl;
			return 0;			
		case 1: {
			analysisObj.estimateTimeIns();
			analysisObj.estimateTimeQui();
			analysisObj.estimateTimeHyb();
			analysisObj.plot();
			break;
		}
		case 2: {
			hanoiObj.make();
			cout << "Press any key to continue\n"; 
			cin >> ch;
			break;
		}
		case 3: {
			cout << "Enter no of steps : ";
			cin >> step;
			cout << "Different compositions form " << endl;
			ladderObj.printCompositions(step, 0);
			cout << "No of Possible Ways are " << ladderObj.countPossibleWays(step)
					 << endl;
			cout << "Press any key to continue\n"; 
			cin >> ch;
			break;
		}
		case 4: {
			circusObj.makeTower();
			cout << "Press any key to continue\n"; 
			cin >> ch;
			break;
		}
		case 5: {
			Triomino triominoObj;
			cout << "Press any key to continue\n"; 
			cin >> ch;
			break;
		}
		default:
			cout << "Invalid Option..Sorry\n";
			cout << "Press any key to continue\n"; 
			cin >> ch;
			goto start;
	}
	goto start;
}
