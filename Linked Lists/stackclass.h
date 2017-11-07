#include <iostream>
#include <string.h> 
#include <stack>
#include <sstream>
#include <stdlib.h>
#include <windows.h>


#ifndef _STCLASS
#define _STCLASS

struct Node {
	float number;
	Node *next;	
};

class stclass  {
	
	protected:
		Node *head;
		Node *tail;
		int top;
		float floatstack[100];
	
	public:
		
		stclass();
		~stclass();
		
		
		void stackpush(float num);
		float stackpop();
		float stacktop();
		void clear();
		void print();
};

#endif
