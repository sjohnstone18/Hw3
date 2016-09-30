#include "Fan.h"
#include <iostream>
using namespace std;




int main()
{
	//implemenation
	Fan fan1(3, true, 10);
	Fan fan2(2, false, 5);
	cout << "first's speed " << fan1.getspeed() << endl;
	cout << "second's speed " << fan2.getspeed() << endl;

	return 0;
}