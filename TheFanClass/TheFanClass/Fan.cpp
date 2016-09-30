#include "Fan.h"
#include <iostream>

//constructors, fleshing things out.  
int Fan::getspeed() {
	return speed;
}
int Fan::getradius() {
	return radius;
}

Fan::Fan()
{
	speed = 1;
	on = false;
	radius = 5;
}
Fan::Fan(int a, bool b, int c)
{
	speed = a;
	on = b;
	radius = c;
}