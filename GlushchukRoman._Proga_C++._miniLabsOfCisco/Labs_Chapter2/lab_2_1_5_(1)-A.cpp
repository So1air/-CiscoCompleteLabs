#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go1(void)
{
	int year;
    cout << "Enter a year: ";
    cin >> year;
	 
	if (year >= 1582)
		if ((year % 4) != 0)
			cout << "Common year";
		else 
			if ((year % 100) != 0)
				cout << "Leap year";
			else 
				if((year % 400) != 0)
					cout << "Common year";
				else cout << "Leap year";
	
	else cout << "This year beyond the Gregorian era."; 
	
	return 0;
}