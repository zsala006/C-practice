#include <stdlib.h>
#include <windows.h>
#include"math.h"
#include<iostream>

using namespace std;

//Constructor
calculations::calculations() {
	//Initializing variables
	top = -1;
}

void calculations::add() {
	cout <<"asdf";
	float num1 = stackpop();
	float num2 = stackpop(); 
	float result = num1 + num2;
	stackpush(result);
}

void calculations::subtract() {
	float num1 = stackpop();
	float num2 = stackpop(); 
	float result = num1 - num2;
	stackpush(result);
}

void calculations::multiply() {
	float num1 = stackpop();
	float num2 = stackpop(); 
	float result = num1 * num2;
	stackpush(result);
}

void calculations::divide() {
	float num1 = stackpop();
	float num2 = stackpop(); 
	float result = num1 / num2;
	stackpush(result);
}

//Destuctor
calculations::~calculations() {
	
}
