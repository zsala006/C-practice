#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

struct node1 {
    int data1;
    node1 *next1;
};


struct node2 {
    int data2;
    node2 *next2;
};

struct node3 {
    int data3;
    node3 *next3;
};

class hanoi {
	
	private:
		
		node1 *top1 = NULL, *p1 = NULL, *np1 = NULL;
		node2 *top2 = NULL, *p2 = NULL, *np2 = NULL;
		node3 *top3 = NULL, *p3 = NULL, *np3 = NULL;
		
	public:
		
		hanoi();
		~hanoi();
		
		int top_of_stack();
		void display1();
		void display2();
		void display3();
		void push1(int data);
		int pop1();
		void push2(int data);
		int pop2();
		void push3(int data);
		int pop3();
		void toh(int n);
};
