#ifndef HANOI_H
#define HANOI_H

#include <iostream>
#include <vector>

class Hanoi {
 private:
	std::vector<int> A, B, C;
	int size;

 public:
	void display();
	void make();
	// Hanoi();
	void makeTower(int n, std::vector<int>& fromPeg, std::vector<int>& auxPeg,
								 std::vector<int>& toPeg);
};

#endif
