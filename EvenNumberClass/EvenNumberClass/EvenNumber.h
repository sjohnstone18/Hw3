#pragma once

#ifndef EvenNumber_h
#define EvenNumber_h
#include <iostream>
using namespace std;

class EvenNumber {
private:
	int value;



public:
	EvenNumber();
	EvenNumber(int x);
	int getValue();
	int getNext();
	int getPrevious();
};





#endif