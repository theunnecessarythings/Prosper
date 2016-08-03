#ifndef CIRCUS_H
#define CIRCUS_H

#include <iostream>
#include <vector>
#include <algorithm>

#define MAXN 100
struct person {
	int h, w;
};
bool cmp(person p1, person p2);
class Circus {
 private:
	person p[MAXN];

 public:
	void calc_LIS(std::vector<int>& weight, std::vector<int>& height);
	void makeTower();
};

#endif

