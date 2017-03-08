#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go9(void)
{
	double neg_powers_two = 1;
	short exponent;
	
	cout << "Input exponent two:  ";
	cin >> exponent;
	if ((exponent >= 0) && (exponent < 64)){
		while(exponent-- > 0)
			neg_powers_two /= 2;
		cout.precision(20);
		cout << "Result  --  " << neg_powers_two;
	}
	else printf("Number is not correct.");	
	
	return 0;
}