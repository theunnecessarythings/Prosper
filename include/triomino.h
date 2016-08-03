#ifndef TRIOMINO_H
#define TRIOMINO_H

#include <iostream>
using namespace std;

class Triomino {
 private:
	int board[100][100];
	int ch;
	int board_size, x_missing, y_missing, stage;

 public:
	Triomino();
	void fillBoard(int, int, int, int, int);
	void display(int, int, int);
};

#endif
