#include <iostream>
#include "RunMethodsOfLabsOfChapter7.h"

using namespace std;

int main(void) {
	int index_lab;
	while (true)
	{
		cout << "List of labworks:\n";	
		cout << "1. " << endl;//
		cout << "2. " << endl;//
		cout << "3. " << endl;//
		cout << "4. " << endl;//
		cout << "5. " << endl;//
		cout << "6. " << endl;//
		cout << "7. " << endl;//
		cout << "8. " << endl;//
		cout << "9. " << endl;//
		cout << "10. " << endl;//		
		
		cout << "Select a work for run:\n";
		cin >> index_lab;
		cout << endl << endl; 

		switch (index_lab)
		{
		case 0:
			exit(0);
		case 1:
			cout << "" << endl; //
			Go1();
			break;

		case 2:
			cout << "" << endl;//
			Go2();
			break;

		case 3:
			cout << "" << endl;//
			Go3();
			break;

		case 4:		
			cout << "" << endl;//
			Go4();
			break;
			
		case 5:
			cout << "" << endl;//
			Go5();
			break;

		case 6:
			cout << "" << endl;//	
			Go6();
			break;
		
		case 7:
			cout << "" << endl;//
			Go7();
			break;

		case 8:
			cout << "" << endl;//
			Go8();
			break;
			
		case 9:
			cout << "" << endl;//
			Go9();
			break;

		case 10:
			cout << "" << endl;//
			Go10();
			break;
		
		default:
			cout << "The index not in the list!\n\n\n";
			break;
		}

		cout << endl;
		system("pause");
		cout << endl << endl;
	}
	
	return 0;
}