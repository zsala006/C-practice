#include <iostream>
#include "stackclass.h"
//#include <apstring.h>
#include<string.h>

#ifndef _CALCULATIONS
#define _CALCULATIONS

class calculations : public stclass {
	
	private: 
	
		
	public: 
		calculations(); 
		~calculations(); 
		
		void add();
		void subtract(); 
		void multiply(); 
		void divide();
		 
};

#endif
