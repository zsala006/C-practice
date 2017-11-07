#include <iostream>
#include "stackclass.h"

using namespace std;

//Constructor
stclass::stclass() {
	Node *head = NULL;
	Node *tail = NULL;
	int top = -1;
}

void stclass::stackpush(float number) {
	if (top < 100) {
		
		Node* newNode = new Node;
		newNode->next = head;
		newNode->number = number;
		
		if (!tail) {
			tail = newNode;
			head = newNode;	
		}
		top++;
		cout << "successfully pushed: " << number << endl; 
	}
}

float stclass::stackpop() {
	float number;
	if (top > -1) {
		number = tail;
		delete(tail);
		top--;
	}
	cout << "popped " << endl;
	return number;
}

float stclass::stacktop() {
	float number;
	Node *newNode = new Node;
	return number;
}

void stclass::clear() {
	for (int i = 0; i < top; i++) {
		floatstack[i] = 0;
	}
	
	top = -1;
}

void stclass::print() {
	cout << "top " <<  top << endl;
	getchar();
	cout << endl;
}

//Destructor
stclass::~stclass(){
	
}
