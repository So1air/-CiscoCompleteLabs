#include <iostream>
#include "RunMethodsOfLabsOfChapter3.h"

using namespace std;

int main(void){
	int index_lab;
	while (true)
	{
		cout << "List of labworks:\n";	
		cout << "1. Lab 3.2.1 Vectors and pointers: first try" << endl; //lab_3_2_12_(1)-A
		cout << "2. Lab 3.2.2 Matrices and pointers - a step inside" << endl;//lab_3_2_12_(2)-B
		cout << "3. Lab 3.4.1 Old problems - new methods: functions" << endl;//lab_3_4_7_(1)-B
		cout << "4. Lab 3.4.2 One step further: finding length of months" << endl;//lab_3_4_7_(2)-B
		cout << "5. Lab 3.4.3 Second step further: finding day of year" << endl;//lab_3_4_7_(3)-B
		cout << "6. Lab 3.4.4 Third step further - counting days" << endl;//lab_3_4_7_(4)-B
		cout << "7. Lab 3.4.5 A foretaste of system programming - obtaining current date" << endl;//lab_3_4_7_(5)-B
		cout << "8. Lab 3.4.6 Prime numbers - how to find them?" << endl;//lab_3_4_7_(6)-B
		cout << "9. Lab 3.6.1 Modifying function argument's value - how to do it?" << endl;//lab_3_6_3_(1)-A
		cout << "10. Lab 3.8.1 Overloading functions" << endl;//lab_3_8_7_(1)-A
		cout << "11. Lab 3.10.1 Using pseudorandom values - a little lottery" << endl;//lab_3_10_8_(1)-B
		cout << "12. Lab 3.10.2 Dynamic data - how to obtain it and how to get rid of it" << endl;//lab_3_10_8_(2)-A
		
		
		cout << "Select a work for run:\n";
		cin >> index_lab;
		cout << endl << endl; 

		switch (index_lab)
		{
		case 1:
			cout << "Lab 3.2.1 Vectors and pointers: first try" << endl; //lab_3_2_12_(1)-A
			Go1();
			break;

		case 2:
			cout << "Lab 3.2.2 Matrices and pointers - a step inside" << endl;//lab_3_2_12_(2)-B
			Go2();
			break;

		case 3:
			cout << "Lab 3.4.1 Old problems - new methods: functions" << endl;//lab_3_4_7_(1)-B
			Go3();
			break;

		case 4:		
			cout << "Lab 3.4.2 One step further: finding length of months" << endl;//lab_3_4_7_(2)-B
			Go4();
			break;
			
		case 5:
			cout << "Lab 3.4.3 Second step further: finding day of year" << endl;//lab_3_4_7_(3)-B
			Go5();
			break;

		case 6:
			cout << "Lab 3.4.4 Third step further - counting days" << endl;//lab_3_4_7_(4)-B
			Go6();
			break;
		
		case 7:
			cout << "Lab 3.4.5 A foretaste of system programming - obtaining current date" << endl;//lab_3_4_7_(5)-B
			Go7();
			break;

		case 8:
			cout << "Lab 3.4.6 Prime numbers - how to find them?" << endl;//lab_3_4_7_(6)-B
			Go8();
			break;
			
		case 9:
			cout << "Lab 3.6.1 Modifying function argument's value - how to do it?" << endl;//lab_3_6_3_(1)-A
			Go9();
			break;

		case 10:
			cout << "Lab 3.8.1 Overloading functions" << endl;//lab_3_8_7_(1)-A
			Go10();
			break;
			
		case 11:
			cout << "Lab 3.10.1 Using pseudorandom values - a little lottery" << endl;//lab_3_10_8_(1)-B
			Go11();
			break;

		case 12:
			cout << "Lab 3.10.2 Dynamic data - how to obtain it and how to get rid of it" << endl;//lab_3_10_8_(2)-A
			Go12();
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
