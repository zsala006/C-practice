#include <iostream>
//#include "stackclass.h"
//#include <apstring.h>
#include<string.h>

#ifndef _PEGS
#define _PEGS

class pegs {//public stclass {
	
	private: 
		int top;
		
	public: 
		
		pegs(); 
		~pegs(); 
		
		int hanoi(int rings, int peg1, int peg2, int peg3);
		 
};

#endif
