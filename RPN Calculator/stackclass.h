#include <iostream>
#include <string.h> 
#include <stack>
#include <sstream>
#include <stdlib.h>
#include <windows.h>


#ifndef _STCLASS
#define _STCLASS

class stclass  {
	
	protected:
		
		int top;
		float floatstack[100];
	
	public:
		
		stclass();
		~stclass();
		
		
		void stackpush(float number);
		float stackpop();
		float stacktop();
		void clear();
		void print();
};

#endif
