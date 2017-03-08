#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go10(void)
{
	int n;
	cout << "Enter a positive integer value greater than 1 and less 41: \n";
	cin >> n;
	if (n > 1) 
		if (n < 41){
			cout << '+';
			for(int i = 0; i < n - 2; i++)
				cout << '-';
			cout << '+' << endl;
			for(int i = 0; i < n - 2; i++) {
				cout << '|';
				for(int j = 0; j < n - 2; j++)
					cout << ' ';
				cout << '|' << endl;
			}
			cout << '+';
			for(int i = 0; i < n - 2; i++)
				cout << '-';
			cout << '+' << endl;
		} 
		else cout << "Sorry, side size is too big\n";
	else printf("The number is not greater than 1.\n");	
	
	return 0;
}