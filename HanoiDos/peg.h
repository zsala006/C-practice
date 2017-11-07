// Peg class, handles the stack and all writing to the screen. 

#include <iostream>
#include <windows.h>
using namespace std;
const int oddColour = BACKGROUND_RED;
const int evenColour = BACKGROUND_BLUE;
const int clearColour = BACKGROUND_GREEN;
extern std::ofstream debug;
const int delay = 200;		// milliseconds between each move 

struct Disc {
	int num;
	Disc *next;
};

class Peg {
	private:	
		int location;				// which physical peg it is, 1, 2 or 3
		int moves;					// how many moves made on this peg
		HANDLE hWnd;
		Disc *head;					// top of linked list
		int count;					// number of pegs on tower
		void locate(int, int);		// position cursor
		void locateDisc(int);		// position disc
		void textColour(int colour);   // set colour
	public:
		Peg() {
			head = NULL;
			count = 0;
			moves = 0;
		}
		set(HANDLE h, int n) {
			hWnd = h;
			location = n;
		}
		void move(Peg &d);				// move from this peg to destination
		int pop();						// remove from this peg
		void push(int);					// add to this peg
		int getMoves() {return moves;};		// so we can sum up moves from all pegs
		int getLoc() {return location;};	// just for debug so we can print moves from main	
		void printMoves(Peg &A, Peg &B);	// display  number of moves and title
		int peek() {						// look at top so that bigger disc isn't placed on smaller one
			if (head)
				return head->num;
			else
				return -1;	// for towers
		}
				
		bool isEmpty() {					// if we didn't have a base disc, we would need to see if empty
			return head == NULL;
		}
		
		~Peg();							// free up memory
		
};



