#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go19(void)
{
	int banknotes[] = {50, 20, 10, 5, 1};
	int money;
	cout << "Enter the desired amount of money: ";
	cin >> money;

	if (money > 0){
		cout << "Needed banknote: ";
		int ind_bnknt = 0;
		while (money)
			if (money >= banknotes[ind_bnknt]){
				money -= banknotes[ind_bnknt];
				cout << banknotes[ind_bnknt] << "  ";
			}
			else ind_bnknt++;
	}	
	else cout << "Number is not correct.";

	return 0;
}