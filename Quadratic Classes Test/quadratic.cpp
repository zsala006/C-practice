#include <iostream>
#include <cmath>
#include "quadratic.h"

using namespace std;

//Constructor
Quadratic::Quadratic() {
	float a;
	float b;
	float c;
	float s;
	float t;
	float vX;
	float vY;
}

//Modifier
float Quadratic::getandsetValues(float aValue, float sValue, float tValue) {
	a = aValue;
	s = sValue;
	t = tValue;	
	b = calculateB();
	c = calculateC();
}

//Accessor
void Quadratic::printRoots() { 
	cout << "roots are " << s << " and " << t << endl;
}

//Modifier
void Quadratic::printSymmetry() {
	
	float xValue;
	if (s < t) {
		xValue = s;
		xValue += (t - s) / 2;
	}
	if (t < s) {
		xValue = t;
		xValue += (s - t) /2;
	}
	if (s == t) {
		xValue = s;
	}
	vX = xValue;
	cout << "Axis of Symmetry at x = " << xValue << endl << endl;
}

//Accessor
void Quadratic::print() {
	
	char sign1 = '-', sign2 = '-', sign3 = '-', sign4 = '-';
	
	if (s < 0) {
		sign1 = '+';
	}
	if (t < 0) {
		sign2 = '+';
	}
	if (b >= 0) {
		sign3 = '+';
	}
	if (c >= 0) {
		sign4 = '+';
	}
	
	cout << "FACTORED FORM" << endl;
	cout << "y = " << a ;
	cout << "(x " << sign1 << " " << fabs(s) << ") ";
	cout << "(x " << sign2 << " " << fabs(t) << ") " << endl << endl;
	
	cout << "STANDARD FORM" << endl;
	cout << "y = " << a ;
	cout << "x^2 " << sign3 << " " << b << "x " << sign4 << " " << c << endl;
}

Quadratic::~Quadratic() {
	
}
