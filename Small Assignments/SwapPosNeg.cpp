#include<iostream>
#include"apvector.h"



using namespace std;

int SwapNeg(apvector<int> &v);
int SwapPos(apvector<int> &v);

/*int main() {
	
	apvector<double> num;
	
	num = SwapPosNeg(v);
	
	for (int i = 0; i < num.length(); i++) {
		cout << num[i] << ", ";
	}
	return 0;
}


void SwapPosNeg(apvector<double> &v) {

	//int size = v.length();
	int i = 0;
	int j = v.length() - 1;

	double temp;

	while (i < j) {

		if (v[i] < 0) {
			cout << v[i] << " " ;
		}
	}
	
	i = 0;
	while (i < j) {

		if (v[i] > 0) {
			cout << v[i] << " " ;
		}
	}
	

}*/

int main() {
   
    int posNum[5];
    int negNum[5];
    int i = 0;
    
    posNum = SwapPos(v);
    negNum = SwapNeg(v);
    
    for (i = 0; i < 4; i++) {
    	cout << negNum[i] << ", " ;
    }
    for (i = 0; i < 4; i++) {
    	cout << PosNum[i] << ", " ;
    }
    
    return 0;    
}

int SwapNeg(apvector<int> &v) {

	//int size = v.length();
	int negativeSet[5];
	int i = 0;
	int j = v.length() - 1;

	double temp;

	while (i < j) {
		if (v[i] < 0) {
			negativeSet[i] = v[i];
		}
		i++;
	}
	
	return negativeSet[0];

}


int SwapPos(apvector<int> &v) {

	//int size = v.length();
	int negativeSet[5];
	int positiveSet[5];
	int i = 0;
	int j = v.length() - 1;


	while (i < j) {
		if (v[i] > 0) {
			positiveSet[i] = v[i];
		}
	i++;
	}
	
	return negativeSet[0];

}


