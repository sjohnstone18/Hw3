#pragma once
#ifndef QuadraticEquation_h
#define QuadraticEquation_h
#include <iostream>
using namespace std;
class QuadraticEquation {
private:
	int a, b, c;



public:
	int geta();
	int getb();
	int getc();
	//void seta(int x);
	//void setb(int y);
	//void setc(int z);
	QuadraticEquation(int x, int y, int z);
	int getDiscriminant();
	int getroot1();
	int getroot2();
	void ifZero();
	void ifNegative();

};
#endif // !QuadraticEquation.h
