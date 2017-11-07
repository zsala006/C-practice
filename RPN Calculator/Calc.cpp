#include <sstream>
#include <stdlib.h>
#include <windows.h>
#include"math.h"
#include"stackclass.h"
#include"apstring.h"
#include<apstring.cpp>
#include<string.h>

using namespace std;

void gotoxy(int &x, int &y);


int main() {
	
	calculations calc;
	
	int x = 30, y = 0;
	gotoxy(x, y);
	cout << "RPN CALCULATOR" << endl;
	
	int i = 0;
	int j = 0;
	int amount = 0;
	float num = 0;  
	float answer = 0;
	char operation;	
	char again = 'y';

/*if(atof(num.c_str()) != 0) {
				calc.stackpush(atof(num.c_str()));
				i++;
			}
			else if (num == 0) {
				calc.stackpush(atof(num.c_str()));
				i++;
			}
			
			cin >> num;
			cout << endl;
			i++;

*/

	while (again == 'y' || again == 'Y') {
		
		
		cout << "how many numbers would you like to input?  ";
		cin >> amount;
		cout << endl;
		cout << "Please enter " << amount << " numbers" << endl << endl;
		
		while (i < amount) {
			cin >> num;
			calc.stackpush(num);
			cout << endl;
			i++;
		}
		
		cout << "Please enter " << amount - 1 << " operations" << endl;
		while (j<i-1) {
			cin >> operation;
			cout << endl;
			
			
			switch (operation) {
				case '+':
					cout << "adding " << endl;
					calc.add();
					answer = calc.stacktop();
				break;
				case '-':
					calc.subtract();
					answer = calc.stacktop();
				break;
				case '*':
					calc.multiply();
					answer = calc.stacktop();
				break;
				case '/':
					calc.divide();
					answer = calc.stacktop();
				break;
				default:
					cout << "INVALID OPERATION ";
					calc.clear();
					return 1;
				break;
			}
			j++;
		}
			
		cout << "The result of the equation is: " << answer << endl;
		cout << "Do you wish to continue calculating?   ";
		cin >> again;
		cout << endl << endl; 
	}
	return 0;
} 

void gotoxy(int &x, int &y) { 
    COORD coord;
    coord.X = x; 
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
