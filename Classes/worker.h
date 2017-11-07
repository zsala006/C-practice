#include <iostream>
#include "people.h"
#include <apstring.h>

#ifndef _WORKER
#define _WORKER

class worker : public people{
	
	private: 
		int id; 
		apstring placeofwork; 
		int numyears; 
		int numjobs; 
		bool isretired; 
		
	public: 
		worker(); 
		~worker(); 
				
		//accessors
		apstring getplaceofwork(); 
		int getnumyears(); 
		int getnumjobs();
		bool retired(); 
		
		//modifiers
		void setplaceofwork(apstring workerplace);
		void setnumyears(int workeryears); 
		void setnumjobs(int numofjobs); 
		void setretired(bool retired); 
		 
		
};

#endif
