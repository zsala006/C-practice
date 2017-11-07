#include "peg.h"


void Peg::push(int n) {
//	cout << "pushing " << n << endl;
	Disc *newdisc = new Disc;
	newdisc->num = n;
	newdisc->next = head;
	head = newdisc;
	count++;
	locateDisc(n);
	if (n % 2) 
		textColour(BACKGROUND_RED);
	else 
		textColour(BACKGROUND_BLUE);
	if (!head->next)		// base is black
		textColour(11);
	for (int i=0; i<n*2; i++)
		cout << " ";
	Sleep(delay);
}
		
int Peg::pop() {
	if (isEmpty())
		return -1;
		
	// clear disc from linked list	
	Disc *temp = head;
	int n = head->num;
	head = head->next;
	delete temp;
	
	// clear disc from screen
	textColour(BACKGROUND_GREEN);
	locateDisc(n);
	for (int i=0; i<n*2; i++)
		cout << " ";
	// reduce count of number of discs on peg	
	count--;
	Sleep(delay);

	return n;
}
		
void Peg::move(Peg &d) {
	
	int n = pop();

	if (n == -1)  // nothing to pop
		return;
	// can move to empty or onto bigger disc	
	if (d.isEmpty() || d.peek() > n) {
		moves++;
		d.push(n);
	}
}
		

void Peg::textColour(int colour){
	//sets text colour
    SetConsoleTextAttribute(hWnd, colour);
}

void Peg::locateDisc(int size) {
    
    //sets cursor position to locate text
    COORD coord;
    coord.X = location * 20 - 14 + (14 - size );	// how far acrosss
    coord.Y = 18 - count ;		// count is how high up the disc 
   
    SetConsoleCursorPosition(hWnd, coord);
    // cout << coord.Y << endl;
}

void Peg::locate(int x, int y) {
    
    //sets cursor position to locate text
    COORD coord;
    coord.X = x;
    coord.Y = y;
     
    SetConsoleCursorPosition(hWnd, coord);
}

// print number of moves and title
void Peg::printMoves(Peg &A, Peg &B) {
	int total = moves + A.getMoves() + B.getMoves();
	textColour(BACKGROUND_GREEN);
	locate(10, 2);
	cout << "Moves: " << total;
	locate(30, 2);
	cout << "TOWERS OF HANOI";
}

Peg::~Peg() {
//	cout << "Destructor !!!" << endl;
	while (!isEmpty()) 
		pop();
}


