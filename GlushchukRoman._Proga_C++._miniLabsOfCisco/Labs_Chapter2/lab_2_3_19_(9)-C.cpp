#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go14(void)
{
	int side;
	cout << "Enter a side square: ";
	cin >> side;
	cout << "Find value   " << side * side - 2 * (side - 1) << endl;
	
	return 0;
}