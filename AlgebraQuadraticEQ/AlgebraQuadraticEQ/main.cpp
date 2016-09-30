#include "QuadraticEquation.h"
#include <iostream>
using namespace std;

int main() {
	int x;
	int y;
	int z;
		
	cin >> x;
	cout << endl;
	cin >> y;
	cout << endl;
	cin >> z;
	cout << endl;

	QuadraticEquation Eq1(x, y, z);
	cout << "discriminant is " << Eq1.getDiscriminant()<< endl;

	// getDiscriminant is not cooperating, trying a variable to ease pain
	int check = Eq1.getDiscriminant();
	if (check > 0)
	{
		cout << "roots are " << Eq1.getroot1() << " and " << Eq1.getroot2() << endl;
	}
	else if (check == 0)
	{
		if (Eq1.getroot1() > Eq1.getroot2())
			cout << Eq1.getroot1();
		else
			cout << Eq1.getroot2();
	}
	else
		Eq1.ifNegative();
	return 0;
}