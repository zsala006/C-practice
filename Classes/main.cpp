//Zakariya Salad            ICS4U                   March 22 2016

#include <iostream>
#include "people.h"
#include "worker.h"
#include <apstring.h>
#include <apstring.cpp>

using namespace std; 
int main() {
	
	//creating a worker's name, nick
	worker nick;
	
	//setting arbitrary valued for this worker
	nick.setname("Nick Gallaway"); 
	nick.setretired(false); 
	nick.setage(38); 
	nick.setplaceofwork("Canada Post"); 
	
	//print some information about the worker
	cout << nick.getname() << " is " << nick.getage() << " years old" << endl; 
	
	return 0; 
}
