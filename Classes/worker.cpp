#include <iostream>
#include "worker.h"

//Constructor
worker::worker() {

	//Initializing variables
	id = 000000;
	placeofwork = "No School";
	numyears = 50;
	numjobs = 4;
	isretired = false;
}

//Accessors

//get the worker's place of work
apstring worker::getplaceofwork() {
	return placeofwork;
}

//get the amount of years the worker has been working
int worker::getnumyears() {
	return numyears;
}

//get the number of jobs the worker has
int worker::getnumjobs() {
	return numjobs;
}

//get weather the worker is retired
bool worker::retired() {
	return isretired;
}

//Modiefiers

//set the worker's place of work
void worker::setplaceofwork(apstring workerplace) {
	placeofwork = workerplace; 
}

//set the worker's number of years working
void worker::setnumyears(int workeryears) {
	numyears = workeryears; 
}

//set the worker's number of jobs
void worker::setnumjobs(int numofjobs) {
	numjobs = numofjobs;
}

//set weather the worker is retired 
void worker::setretired(bool retired) {
	isretired = retired; 
}

//Destuctor
worker::~worker() {
	
}
