//Zakariya Salad                               ICS4U                              Birthdays Program
//This program figures out the probability of 2 people in a group having the same birthday


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define TOTAL_DAYS 365
#define TRIES 10000

void clearArray (bool * array) {
    for (int i = 0; i < TOTAL_DAYS; i++) {
        array[i] = false;
    }
}

int main() {
    
	srand(time(NULL));
    bool birthdays[TOTAL_DAYS]; //Attempting to get the same day in a year twice
    int r, numMatches;

    for(int i = 2; i < 20; i++) {
        numMatches = 0;

        for(int j = 0; j < TRIES; j++) {
            clearArray(birthdays);

            for(int k = 0; k < i; k++) {
                r = rand() % TOTAL_DAYS; // == 0-364
                if (birthdays[r]) {
                    numMatches++;       //Increase number of matches
                    break;  // 2 people already have same birthdays here
                }
                birthdays[r] = true;
            }
        }
	
        cout << "Probability of 2 people having same birthday in room of " << i << " people is "<< (float)numMatches / TRIES << endl;   //Calculating percent chance
    }
}
