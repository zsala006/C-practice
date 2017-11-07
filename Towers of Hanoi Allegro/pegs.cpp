#include <stdlib.h>
#include"pegs.h"
#include<iostream>

using namespace std;

//Constructor
pegs::pegs() {
	//Initializing variables
	top = -1;
}


int pegs::hanoi(int n, int peg1, int peg2, int peg3) {    // move n rings from s to d using i

	if (n > 0) {

		hanoi(n-1, peg1, peg3, peg2);         //move n-1 rings from peg1 to peg3 using 
		                                     //visual move(n, peg1, peg2)    //move ring n from s to d
		hanoi(n-1, peg3, peg2, peg1);       //move the n-1 rings from peg3 to peg2 using peg1
	}
}


//Destuctor
pegs::~pegs() {
	
}
