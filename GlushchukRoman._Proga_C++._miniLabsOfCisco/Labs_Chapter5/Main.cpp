#include <iostream>
#include "RunMethodsOfLabsOfChapter5.h"

using namespace std;

int main(void) {
	int index_lab;
	while (true)
	{
		cout << "List of labworks:\n";	
		cout << "1. Lab 5.1.1 Classes and Objects in C++" << endl; //cpa_lab_5_1_9_(1)-A
		cout << "2. Lab 5.1.2 Restricting access to object data" << endl;//cpa_lab_5_1_9_(2)-A
		cout << "3. Lab 5.1.3 Obtaining derived data from an object" << endl;//cpa_lab_5_1_9_(3)-B
		cout << "4. Lab 5.1.4 Classes and objects: ShopItemOrder" << endl;//cpa_lab_5_1_9_(4)-B
		cout << "5. Lab 5.3.1 Flight booking system: part 1" << endl;//cpa_lab_5_3_10_(1)-B
		cout << "6. Lab 5.3.2 Flight booking system: part 2" << endl;//cpa_lab_5_3_10_(2)-B
		cout << "7. Lab 5.3.3 Flight booking system: part 3" << endl;//cpa_lab_5_3_10_(3)-C
		cout << "8. Lab 5.3.4 Gym membership management system" << endl;//cpa_lab_5_3_10_(4)-C
		cout << "9. Lab 5.3.5 Modelling fractions: part 1" << endl;//cpa_lab_5_3_10_(5)-C
		cout << "10. Lab 5.3.6 Modelling fractions: part 2" << endl;//cpa_lab_5_3_10_(6)-B
		cout << "11. Lab 5.3.7 Modelling fractions: part 3" << endl;//cpa_lab_5_3_10_(7)-B
		cout << "12. Lab 5.3.8 Points in 2D: part 1" << endl;//cpa_lab_5_3_10_(8)-A
		cout << "13. Lab 5.3.9 Points in 2D: part 2" << endl;//cpa_lab_5_3_10_(9)-B
		cout << "14. Lab 5.3.10 Points in 2D: part 3" << endl;//cpa_lab_5_3_10_(10)-B
		cout << "15. Lab 5.3.11 Inheritance basics: part 1" << endl;//cpa_lab_5_3_10_(11)-B
		cout << "16. Lab 5.3.12 Inheritance basics: part 2" << endl;//cpa_lab_5_3_10_(12)-B
		cout << "17. Lab 5.3.1 Singly linked list: part 1" << endl;//cpa_lab_5_3_13_(1)-B
		cout << "18. Lab 5.3.2 Singly linked list: part 2" << endl;//cpa_lab_5_3_13_(2)-B
		cout << "19. Lab 5.3.3 Singly linked list: part 3" << endl;//cpa_lab_5_3_13_(3)-A
		cout << "20. Lab 5.3.4 Singly linked list: part 4" << endl;//cpa_lab_5_3_13_(4)-B
		cout << "21. Lab 5.3.5 Singly linked list: part 5" << endl;//cpa_lab_5_3_13_(5)-B
		cout << "22. Lab 5.3.6 Singly linked list: part 6" << endl;//cpa_lab_5_3_13_(6)-B
		cout << "23. Lab 5.3.7 Singly linked list: part 7" << endl;//cpa_lab_5_3_13_(7)-B
		cout << "24. Lab 5.3.8 Doubly linked list" << endl;//cpa_lab_5_3_13_(8)-C
		
		cout << "Select a work for run:\n";
		cin >> index_lab;
		cout << endl << endl; 

		switch (index_lab)
		{
		case 0:
			exit(0);
		case 1:
			cout << "Lab 5.1.1 Classes and Objects in C++" << endl; //cpa_lab_5_1_9_(1)-A
			Go1();
			break;

		case 2:
			cout << "Lab 5.1.2 Restricting access to object data" << endl;//cpa_lab_5_1_9_(2)-A
			Go2();
			break;

		case 3:
			cout << "Lab 5.1.3 Obtaining derived data from an object" << endl;//cpa_lab_5_1_9_(3)-B
			Go3();
			break;

		case 4:		
			cout << "Lab 5.1.4 Classes and objects: ShopItemOrder" << endl;//cpa_lab_5_1_9_(4)-B
			Go4();
			break;
			
		case 5:
			cout << "Lab 5.3.1 Flight booking system: part 1" << endl;//cpa_lab_5_3_10_(1)-B
			Go5();
			break;

		case 6:
			cout << "Lab 5.3.2 Flight booking system: part 2" << endl;//cpa_lab_5_3_10_(2)-B	
			Go6();
			break;
		
		case 7:
			cout << "Lab 5.3.3 Flight booking system: part 3" << endl;//cpa_lab_5_3_10_(3)-C
			Go7();
			break;

		case 8:
			cout << "Lab 5.3.4 Gym membership management system" << endl;//cpa_lab_5_3_10_(4)-C
			Go8();
			break;
			
		case 9:
			cout << "Lab 5.3.5 Modelling fractions: part 1" << endl;//cpa_lab_5_3_10_(5)-C
			Go9();
			break;

		case 10:
			cout << "Lab 5.3.6 Modelling fractions: part 2" << endl;//cpa_lab_5_3_10_(6)-B
			Go10();
			break;
			
		case 11:
			cout << "Lab 5.3.7 Modelling fractions: part 3" << endl;//cpa_lab_5_3_10_(7)-B
			Go11();
			break;

		case 12:
			cout << "Lab 5.3.8 Points in 2D: part 1" << endl;//cpa_lab_5_3_10_(8)-A
			Go12();
			break;

		case 13:
			cout << "Lab 5.3.8 Points in 2D: part 2" << endl;//cpa_lab_5_3_10_(9)-B
			Go13();
			break;

		case 14:
			cout << "Lab 5.3.8 Points in 2D: part 3" << endl;//cpa_lab_5_3_10_(10)-B
			Go14();
			break;

		case 15:
			cout << "Lab 5.3.11 Inheritance basics: part 1" << endl;//cpa_lab_5_3_10_(11)-B
			Go15();
			break;

		case 16:
			cout << "Lab 5.3.11 Inheritance basics: part 2" << endl;//cpa_lab_5_3_10_(12)-B	
			Go16();
			break;
		
		case 17:
			cout << "Lab 5.3.1 Singly linked list: part 1" << endl;//cpa_lab_5_3_13_(1)-B
			Go17();
			break;

		case 18:
			cout << "Lab 5.3.1 Singly linked list: part 2" << endl;//cpa_lab_5_3_13_(2)-B
			Go18();
			break;
			
		case 19:
			cout << "Lab 5.3.1 Singly linked list: part 3" << endl;//cpa_lab_5_3_13_(3)-A
			Go19();
			break;

		case 20:
			cout << "Lab 5.3.1 Singly linked list: part 4" << endl;//cpa_lab_5_3_13_(4)-B
			Go20();
			break;
			
		case 21:
			cout << "Lab 5.3.1 Singly linked list: part 5" << endl;//cpa_lab_5_3_13_(5)-B
			Go21();
			break;

		case 22:
			cout << "Lab 5.3.1 Singly linked list: part 6" << endl;//cpa_lab_5_3_13_(6)-B
			Go22();
			break;

		case 23:
			cout << "Lab 5.3.1 Singly linked list: part 7" << endl;//cpa_lab_5_3_13_(7)-B
			Go23();
			break;

		case 24:
			cout << "Lab 5.3.8 Doubly linked list" << endl;//cpa_lab_5_3_13_(8)-C
			Go24();
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