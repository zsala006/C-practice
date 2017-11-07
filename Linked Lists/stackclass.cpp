#include <iostream>
#include "stackclass.h"

using namespace std;

//Constructor
stclass::stclass() {
	Node *head = NULL;
	Node *tail = NULL;
	int top = -1;
}

void stclass::stackpush(float num) {
	head = NULL;
	tail = NULL;
	if (top < 100) {	
		Node* newNode = new Node;
		newNode->next = head;
		head->number = num;
		
		if (!tail) {
			tail = newNode;
			head = newNode;	
		}
		top++;
		cout << "successfully inserted into list: " << newNode->number << endl; 
	}
}

float stclass::stackpop() {
	float num;
	
	if (head) {
		num = head->number;
		Node * tail = head;
		head = head->next;
		cout << "successfully removed from list: " << tail->number << endl;
		delete tail;
		return num;
	}
	else {
		cout << "Not working";
	}
}

float stclass::stacktop() {
	float num;
	Node *newNode = new Node;
	num = tail->number;
	return num;
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
