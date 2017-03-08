#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go12(void)
{
	const int fib0 = 0, fib1 = 1;
	int fib_n;
	int n;
	cout << "Enter a index number Fibonacci: ";
	cin >> n;
	if (n >= 0){
		if (n == 0)
			fib_n = fib0;
		else if (n == 1)
			fib_n = fib1;
		else {
			int a = fib0, b = fib1; 
			do{				
				fib_n = a + b;
				a = b; 
				b = fib_n;
			} while (--n > 1);					
		}
		cout << "Value = " << fib_n;
	} else printf("Number is not correct.");
	
	return 0;
}