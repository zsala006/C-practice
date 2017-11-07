#include <iostream>
#include "people.h"

//Constructor
people::people() {

	//Initializing people variables
	dob.day = 0;
	dob.month = 0;
	dob.year = 0;
	gender = male;
	age = 0;
	height = 175.0;
}

//get the person's date of birth
date people::getdob() {
	return dob;
}

//get the person's height
float people::getheight() {
	return height;
}

//get the person's name
apstring people::getname() {
	return name;
}

//get the person's age
int people::getage() {
	return age;
}

//Modifiers 

//set the person's date of birth
void people::setdob(date dateofbirth){
	dob = dateofbirth; 
}

//set the person's height
void people::setheight(float heightofperson){
	height = heightofperson; 
}

//set the person's name
void people::setname(apstring personsname){
	name = personsname; 
}

//set the person's name
void people::setage(int personsage){
	age = personsage; 
}

//Destructor
people::~people(){
	
}


