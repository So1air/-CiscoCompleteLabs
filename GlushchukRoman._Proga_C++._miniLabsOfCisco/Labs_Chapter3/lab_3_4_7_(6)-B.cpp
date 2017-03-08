#include <iostream>
#include "RunMethodsOfLabsOfChapter3.h"

using namespace std;

bool isPrime(int num) {
	if(num > 1){
		for (int probable_divider = 2; probable_divider < num/probable_divider + 1; probable_divider++)
			if(num % probable_divider == 0)
				return false;
		return true;
	} 
	else return false; 
}

int Go8(void){
	cout << "\nPrime numbers: \n";
	for(int i = 0; i <= 201; i++)
		if(isPrime(i))
			cout << i << " ";
	cout << endl;

	return 0;
}