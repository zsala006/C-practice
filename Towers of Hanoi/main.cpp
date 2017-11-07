//Zakariya Salad                 ICS4U               Towers of Hanoi 
//May 2 2016

#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include"pegs.h"
#include<allegro.h>


#define WHITE makecol(255,255,255)
#define RED makecol(255,0,0)
#define BLUE makecol(0,0,255)
#define GREEN makecol(0,255,0)
#define ORANGE makecol(255,165,0)
#define YELLOW makecol(255,255,0)

using namespace std;
int main() {
	
	hanoi h;
    int n, i;
    cout<<"enter the number of disksn";
    cin>>n;
    
	for (i = n; i >= 1; i--) {
        h.push1(i);
    }
    
    h.toh(n);
    return 0;
}



void display() {
	
	int y1 = 200;
	int y2 = 100;
	int x1 = 100;
	int x2 = 300;
		
		
	int x3 = 350;
	int x4 = 550;
		
	int x5 = 600;
	int x6 = 800;	
	
	
	rectfill(screen, x1, y1, x2, y2, RED);
    rectfill(screen, x3, y1, x4, y2, RED);
    rectfill(screen, x5, y1, x6, y2, RED);
    	
    rectfill(screen, 170, 700, 230, 200, BLUE);
    rectfill(screen, 420, 700, 480, 200, BLUE);
    rectfill(screen, 670, 700, 730, 200, BLUE);
    
    
    
    
}
	
	
	
	
