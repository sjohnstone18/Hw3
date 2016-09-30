#pragma once
#ifndef Fan_h
#define Fan_h
#include <iostream>
using namespace std;
class Fan {

private:
	int speed;
	bool on;
	double radius;
	//static int speedPull;
	//static bool onPull;
	//static int radPull;

public:

	//telling it these exist
	int getspeed();
	int getradius();
	Fan();
	Fan(int a, bool b, int c);


};









#endif // !Fan_h
