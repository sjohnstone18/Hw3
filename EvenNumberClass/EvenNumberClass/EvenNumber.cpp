#include "EvenNumber.h"
#include <iostream>


EvenNumber::EvenNumber() {
	value = 0;
}

EvenNumber::EvenNumber(int x) {
	if (x % 2 == 0)
		value = x;
	else
		cout << "please enter a even number, not odd";
}
int EvenNumber::getValue() {
	return value;
}
int EvenNumber::getNext() {
	return value + 2;
}
int EvenNumber::getPrevious() {
	return value - 2;
}