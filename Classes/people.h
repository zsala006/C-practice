#include <iostream>
#include <apstring.h>

#ifndef _PEOPLE
#define _PEOPLE

struct date{
	int day;
	int month; 
	int year; 
};

enum GENDER{ male, female};

class people{
	
	protected:
		date dob; 
		float height; 
		apstring name; 
		GENDER gender; 
		int age; 
	
	public:
		
		people();
		
		//accessors 
		date getdob();
		float getheight();
		apstring getname(); 
		int getage(); 
		
		//modifiers
		void setdob(date dateofbirth);
		void setheight(float heightofperson); 
		void setname(apstring personsname); 
		void setage(int personsage); 
		//destructor
		~people(); 
	
};


#endif
