#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go13(void)
{
	const int fact0 = 1;
	int n;
	cout << "Enter a base of factorial: ";
	cin >> n;

	if (n > -1)
		if (n == 0)
			cout << "Value of factorial = " << fact0;
		else {
		    long factorial = fact0;
			do{
				factorial *= n;
			} while(--n > 0);
			cout << "Value of factorial = " << factorial;
		}
	else printf("Number is not correct.");
	
	return 0;
}