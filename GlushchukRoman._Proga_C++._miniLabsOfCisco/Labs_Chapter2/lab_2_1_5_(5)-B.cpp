#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go5(void)
{
	int year;
	
	cout << "Enter the year: ";
	cin >> year;
	if (year > 1900) {
		int a, b, c, d, e;
		a = year % 19;
		b = year % 4;
		c = year % 7;
		d = (a * 19 + 24) % 30;
		e = (2 * b + 4 * c + 6 * d + 5) % 7;
		if ((d + e) < 10) 
			printf("Easter falls on %dth day of March.\n", d + e + 22); 
		else printf("Easter falls on %dth day of April.\n", d + e - 9);
	}
	else cout << "Unexpected value of year. Further actions are not possible.";
	
	return 0;
}