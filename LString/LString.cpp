#include <iostream>
#include <cstring>
#include "LString.h"

using namespace std;

LString::LString() {
	head = NULL;
	tail = NULL;
}

LString::LString(char *str) {
	head = NULL;
	tail = NULL;
	// push characters on in reverse order
	for (int i=strlen(str)-1; i>=0; i--) {
		Node* newNode = new Node;
		newNode->next = head;
		newNode->ch = str[i];
		if (!tail)
			tail = newNode;
		head = newNode;	
 	}
	
}

LString::LString(const LString& lStr)  {
	
	head = NULL;
	tail = NULL;
	for (Node *ptr=lStr.head; ptr; ptr= ptr->next) {
		Node* newNode = new Node;
		newNode->ch = ptr->ch;
		newNode->next = NULL;
		// place at back of string
		if (tail)
			tail->next = newNode;
		tail = newNode;	
		cout << "Set tail " << hex << tail << endl;
		if (!head)
			head = newNode;
 	}	
 	cout << "End tail " << hex << tail << endl;
}
	
//	// push characters on in reverse order
//	for (Node *ptr=lStr.head; ptr; ptr= ptr->next) {
//		Node* newNode = new Node;
//		newNode->next = temp.head;
//		newNode->ch = ptr->ch;
//		temp.head = newNode;	
// 	}
// 
// 	// create list in proper order
// 	for (Node *ptr= temp.head; ptr; ptr= ptr->next) {
//		Node* newNode = new Node;
//		newNode->next = head;
//		newNode->ch = ptr->ch;
//		head = newNode;	
// 	}
// 	// free memory
// 	while (temp.head) {
//    	Node *ptr = temp.head->next;
//    	delete temp.head;
//    	temp.head = ptr;
//	}
//	// another way to do this is just have a queue operation. (put at back of list).	
//}

void LString::print() {
	for (Node *ptr=head; ptr; ptr=ptr->next) 
		cout << ptr->ch;
	cout << endl;
}

void LString::printDebug() {
	cout << "Debug " << "head = " << hex << head << " " << "tail = " << tail << endl;
	for (Node *ptr=head; ptr; ptr=ptr->next) 
		cout << hex << ptr << " " << ptr->ch << endl;
	cout << endl;
}

int LString::length() {
	
	int i = 1;
	Node *ptr = head -> next;
	while(head->next != NULL) {
		ptr = head->next->next;
		i++;
	}
	
	cout << i << endl;
	// needs to be implemented
	return 0;
}


void LString::append(LString lstr) {
	// needs to be implemented  (just adjust last pointer).
	return ;
}

void LString::append(char lastchar) {
	Node* newNode = new Node;
	newNode->ch = lastchar;
	newNode->next = NULL;
	if (!head) {
		head = newNode;
	} else {
		tail->next = newNode;
	}
	tail = newNode;
	return;
}

bool remove(int pos, int count) {
	// return false if impossible.
	// note pos=0, changes head so a special case.
}

int LString::find(LString lstr) {
	// needs to be implemented
	return -1;
}

LString::~LString() {
	while (head) {
    	Node *ptr = head->next;
    	delete head;
    	head = ptr;
	}
}

