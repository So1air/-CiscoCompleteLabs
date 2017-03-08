#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go6(void)
{
	int c0, steps = 0;
	cout << "Input any positive integer number:";
	cin >> c0;
	if (c0 > 0){
		while(c0 != 1) {
			if(c0 % 2 == 0)
				c0 /= 2;
			else c0 = 3 * c0 + 1;
			printf("%d\n", c0);
			steps++;
		}
		printf("steps = %d", steps); 
	}
	else printf("Number is not correct.");
	
	return 0;
}