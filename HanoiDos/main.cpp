// Mr. Creelman  April 2016
// Character based towers of hanoi illustration

#include <iostream>
#include <windows.h>
#ifdef	DEBUG
#include <fstream> 		
#endif
#include "peg.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int nDiscs = 7;
void textColour(int colour);
void hanoi(int n, Peg &A, Peg &B, Peg &C);


int main(int argc, char** argv) {
	HANDLE hWnd;

#ifdef	DEBUG		
	ofstrearm debug("debug.txt");
	debug << "Moves" << endl;
#endif 
	hWnd = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTitle("Towers Of Hanoi");
	SetConsoleTextAttribute(hWnd, BACKGROUND_GREEN);
	system("cls");    
	
	Peg A[3];
	
	for (int i=0; i<3; i++)
		A[i].set(hWnd, i+1);

	for (int i=nDiscs+1; i>=1; i--) {
		A[0].push(i);   
	} 
	A[1].push(nDiscs+1);
	A[2].push(nDiscs+1);
	hanoi(nDiscs, A[0], A[2], A[1]);
    
    getchar(); 
	return 0;
}

void hanoi(int n, Peg &A, Peg &B, Peg &C) {
	
	if (n >= 1) {
		hanoi(n-1, A, C, B);
		A.move(B);
#ifdef	DEBUG 
		debug << "Move from " << A.getLoc() << " to " << C.getLoc() << endl;
#endif 
		A.printMoves(B, C);
		hanoi(n-1, C, B, A);
	}
}




