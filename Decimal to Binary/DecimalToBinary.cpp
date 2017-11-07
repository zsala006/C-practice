//Zakariya Salad
//Decimal to Binary Conversion Program
//April 25 2016

#include <iostream>

using namespace std;

long toBinary(int decimalNum);

int main(){

    long binaryNum;
    int decimalNum;
    
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    binaryNum = toBinary(decimalNum);
    cout << "Binary value is: " << binaryNum << endl;
    
    return 0;
}

long toBinary(int decimalNum) {

    static long binaryNum, remainder, factor = 1;

    if (decimalNum != 0) {
         remainder = decimalNum % 2;
         binaryNum = binaryNum + remainder * factor;
         factor = factor * 10;
         toBinary(decimalNum / 2);
    }

    return binaryNum;
}








