#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go17(void)
{
	int choice;
	long double op1, op2;
	do{
		cout << "MENU: \n 0 - exit \n 1 - addition \n 2 - subtraction \n 3 - multiplication \n 4 - division \n Your choice?\n";
		cin >> choice;
		if ((choice > 0) && (choice < 5)){
			cout << "Enter first operand \n";
			cin >> op1;
			cout << "Enter second operand \n";
			cin >> op2;

			cout << "Result = ";
		}

		switch (choice){
		case 0:
			break;
		case 1:
			cout << op1 + op2;
			break;
		case 2:
			cout << op1 - op2;
			break;
		case 3:
			cout << op1 * op2;
			break;
		case 4:
			if (op2)
				cout << op1 / op2;
			else cout << "indeterminacy(division by zero)";
			break;
		default:
			cout << "Unexpected number! Enter a correct number.";
			break;
		}
		cout << endl;
	} while(choice);

	return 0;
}