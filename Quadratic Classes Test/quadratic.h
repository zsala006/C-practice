    // Start of Factored Form Quadratic Class
	// Create 2 constructors, one without arguments, one with a, s, t 
	// Move print function to quadratic.cpp file. Some code can be inline
	// but show you can creat both inline and regular methods (functions)
	// Add a destructor that just prints a debug line showing it being called.
	// Add a print Axis of Symmetry method , x = midpoint of s and t. 
	// Add two accessor to get all three values (one for ints and one for floats) (overload function) 
	// Add one modifier (mutator) to set all three values.
	// Add a helper function to calculate c
	// Add a print function for standard form.  y = ax^2 + bx + c , using helper functions.

#include <iostream>
#include <cmath>

using namespace std;

#ifndef _QUADRATIC
#define _QUADRATIC

class Quadratic {
	
	private: 
	
		float a;
		float b;
		float c;
		float s;
		float t;
		float vX;
		float vY;
		float calculateB() { return a*(s + t);}		//private helper function
		float calculateC() { return a*(s * t);}		//private helper function
		
	public:
		
		Quadratic();
		~Quadratic();
		
		
		void printRoots();
		void printSymmetry();
		void print();
	
		float getandsetValues(float aValue, float sValue, float tValue);
		
};	

#endif	
