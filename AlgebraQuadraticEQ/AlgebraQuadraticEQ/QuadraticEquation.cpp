#include "QuadraticEquation.h"
#include <iostream>
#include <math.h>


//constructors
int QuadraticEquation::geta() {
	return a;
	}
int QuadraticEquation::getb() {
	return b;
	}
int QuadraticEquation::getc() {
	return c;
}

/*void QuadraticEquation::seta(int x) {
	a = x;
}
void QuadraticEquation::setb(int y) {
	b = y;
}
void QuadraticEquation::setc(int z) {
	c = z;
}*/
QuadraticEquation::QuadraticEquation(int x, int y, int z) {
	a = x;
	b = y;
	c = z;
	}
int QuadraticEquation::getDiscriminant() {
	int dis;
	dis = pow(b, 2) - (4 * a*c);
		return dis;
}
int QuadraticEquation::getroot1() {
	double r1 =  (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	return r1;
}
int QuadraticEquation::getroot2() {
	double r2 =(-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	return r2;
}
void QuadraticEquation::ifZero() {
	
}
void QuadraticEquation::ifNegative() {
	cout << "there are no root \n";
}