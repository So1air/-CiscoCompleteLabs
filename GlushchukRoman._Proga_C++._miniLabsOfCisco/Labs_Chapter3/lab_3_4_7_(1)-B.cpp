#include <iostream>
#include "RunMethodsOfLabsOfChapter3.h"
#include "Function of time.h";

using namespace std;

int Go3(void){
	for(int yr = 1995; yr < 2017; yr++)
		cout << yr << " -> " << isLeap(yr) << endl;
	int Your_variant;
	cout << endl << "Your_variant: " << endl;
	cin >> Your_variant;
	cout << Your_variant << " -> " << isLeap(Your_variant) << endl;

	return 0;
}

bool isLeap(int year) {
	if (year >= 1582)
		if ((year % 4) != 0)
			return false;
		else 
			if ((year % 100) != 0)
				return true;
			else 
				if((year % 400) != 0)
					return false;
				else return true;
	else return false;
}