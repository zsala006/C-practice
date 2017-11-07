// Practical Classes Test
// Zakariya Salad   Friday April 15 2016  

#include <iostream>
#include"quadratic.h"
using namespace std;


int main(int argc, char** argv) {
	// Test Quadratic class  
	// Use both constructors and all the methods.
	Quadratic q;
	
	float aValue;
	float sValue;
	float tValue;
	
	cout << "Please enter an a value followed by a the roots of the quadratic function" << endl;
	cin >> aValue >> sValue >> tValue ;
	cout << endl;
	
	q.getandsetValues(aValue, sValue, tValue);
	q.printRoots();
	q.printSymmetry();
	q.print();
	
	return 0;
}
