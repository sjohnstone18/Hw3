#include "EvenNumber.h"
#include <iostream.>
using namespace std;


int main() {
	int x;
	//cout << "please enter an even number ";
	//cin >> x;
	x = 16;
	EvenNumber num1(x);
	cout << num1.getValue() << endl;
	cout << num1.getNext() << endl;
	cout << num1.getPrevious() << endl;

	return 0;
}