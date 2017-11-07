#include <iostream>
#include "stackclass.h"

using namespace std;

//Constructor
stclass::stclass() {
	int top = -1;
}

void stclass::stackpush(float number) {
	if (top < 100) {
		top++;
		floatstack[top] = number;
		cout << "successfully pushed: " << number << endl; 
	}
}

float stclass::stackpop() {
	float number;
	if (top > -1) {
		number = floatstack[top];
		top--;
	}
	cout << "popped " << endl;
	return number;
}

float stclass::stacktop() {
	float number;
	number = floatstack[top];
	return number;
}

void stclass::clear() {
	for (int i = 0; i < top; i++) {
		floatstack[i] = 0;
	}
	
	top = -1;
}

void stclass::print() {
	cout << "top " <<  top << endl;
	getchar();
	cout << endl;
}

//Destructor
stclass::~stclass(){
	
}
