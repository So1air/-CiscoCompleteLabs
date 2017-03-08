#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go16(void)
{
	const int counting_bits_in_short = sizeof(short) * 8;
	unsigned short int val;
	bool ispalindrome = true;
	cout << "value = ";
	cin >> val;
	unsigned short int mask1 = pow(2 , counting_bits_in_short - 1), mask2 = 1;
	
	for (int i = 0; (i < counting_bits_in_short / 2) && ispalindrome; i++, mask1 >>= 1, mask2 <<= 1)
		if (bool(mask1 & val) != bool(mask2 & val))
			ispalindrome = false;
	
	if(ispalindrome)
		cout << val << " is a bitwise palindrome" << endl;
	else
		cout << val << " is not a bitwise palindrome" << endl;

	return 0;
}