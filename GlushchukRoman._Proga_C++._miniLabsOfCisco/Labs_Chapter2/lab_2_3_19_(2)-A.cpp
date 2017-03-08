#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go7(void)
{
	double pi4 = 0.;
	long n;
	short sign = -1;
	long tmp = 1;
	cout << "Number of iterations? ";
	cin >> n;
	if (n > 0){
		do{
			sign = -sign;			
			pi4 +=  sign * 1./tmp;
			tmp += 2;
		} while(--n > 0); 

		cout.precision(20);
		cout << "Pi = " << (pi4 * 4.) << endl;		
	}
	else printf("Number is not correct.\n");
	
	return 0;
}