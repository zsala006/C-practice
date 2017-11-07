/// Test for LString class.
#include <iostream>
#include "LString.h"

using namespace std;

int main() {
    LString one;
    LString two("Hello");
    LString three(two);
    
    //two.append(", World");
    two.print();
    three.print();
    two.printDebug();
    two.append('!');
    two.print();
    cout << one.length() << endl;

   

    return 0;
}
