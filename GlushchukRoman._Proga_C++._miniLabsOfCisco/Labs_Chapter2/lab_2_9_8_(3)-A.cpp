#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go20(void)
{
	int n;
	cout << "Enter a count elements in vector: ";
	cin >> n;
	if (n > 0){
		int *vector = new int[n];
		for(int i = 0; i < n; i++){
			printf("[%d]: ", i);
			cin >> vector[i];
		}
		//int vector[] = {1, 7, 3, 8, 3, 7, 1};
		bool ispalindrome = true;
		//int n = sizeof(vector) / sizeof(vector[0]);
	
		for(int l = 0, r = n - 1; (l < r) && ispalindrome; l++, r--)
			if (vector[l] != vector[r])
				ispalindrome = false;
		delete[] vector;

		if(ispalindrome)
			cout << "It's a palindrome";
		else
			cout << "It isn't a palindrome";
		cout << endl;
	} else printf("Number is not correct.\n");

	return 0;
}