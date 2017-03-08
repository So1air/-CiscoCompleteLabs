#include <iostream>
#include "Allfunc.h"


using namespace std;

int Go8(void)
{
	unsigned long long powers_two = 1;
	short exponent;
	
	cout << "Input exponent two:  ";
	cin >> exponent;
	if ((exponent >= 0) && (exponent < 64)){
		while(exponent-- > 0)
			powers_two *= 2;
		cout << "Result  --  " << powers_two << ".";
	}
	else printf("Number is not correct.");	
	
	return 0;
}