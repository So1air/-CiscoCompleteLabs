#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go15(void)
{
	const int counting_bits_in_int = sizeof(unsigned long) * 8;
	unsigned long number;
	
	cout << "Enter a number(in range 0 .. 4294967295) " << endl;
	cin >> number;
	unsigned long mask = 1;
	int number_of_ones = 0;
	for(int i = 0; i < counting_bits_in_int; i++, mask <<= 1)
		if (mask & number)
			number_of_ones++;	
	
	cout << "Number of \"ones\"-bits = " << number_of_ones;

	return 0;
}