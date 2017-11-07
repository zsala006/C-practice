#ifndef LSTRING_H
#define LSTRING_H
using namespace std;

struct Node {
    char ch;
    Node *next;
};

class LString {
	private:
		Node *head;
		Node *tail;
	public:
		LString(char *);
		LString();	
		LString(const LString& lStr); 			 // make a copy			
		void append(char);
		void append(LString);
		void insert(int pos, LString lstr);		// insert at postion given
		bool remove(int pos, int count); 	// remove number of char at given position
		int find(LString);					// find 
		int length();
		void print();
		void printDebug();
		
		~LString();
};

#endif
