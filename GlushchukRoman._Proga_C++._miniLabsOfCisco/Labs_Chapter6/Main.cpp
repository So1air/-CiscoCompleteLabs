#include <iostream>
#include "RunMethodsOfLabsOfChapter6.h"

using namespace std;

int main(void) {
	int index_lab;
	while (true)
	{
		cout << "List of labworks:\n";	
		cout << "1. Lab 6.3.1 Polymorphism: part 1" << endl;//cpa_lab_6_3_5_(1)-B
		cout << "2. Lab 6.3.1 Polymorphism: part 2" << endl;//cpa_lab_6_3_6_(1)-B
		cout << "3. Lab 6.3.1 Polymorphism: part 3" << endl;//cpa_lab_6_3_7_(1)-B
		cout << "4. Lab 6.4.1 Interfaces and virtual functions: part 1" << endl;//cpa_lab_6_4_4_(1)-B
		cout << "5. Lab 6.4.2 Interfaces and virtual functions: part 2" << endl;//cpa_lab_6_4_4_(2)-C
		cout << "6. Lab 6.4.2 Interfaces and virtual functions: part 3" << endl;//cpa_lab_6_4_4_(3)-B
		cout << "7. Lab 6.4.4 Your own game" << endl;//cpa_lab_6_4_4_(4)-C
		cout << "8. Lab 6.5.1 Composition: part 1" << endl;//cpa_lab_6_5_8_(1)-C
		cout << "9. Lab 6.5.1 Composition: part 2" << endl;//cpa_lab_6_5_9_(1)-B		
		
		cout << "Select a work for run:\n";
		cin >> index_lab;
		cout << endl << endl; 

		switch (index_lab)
		{
		case 0:
			exit(0);
		case 1:
			cout << "Lab 6.3.1 Polymorphism: part 1" << endl;//cpa_lab_6_3_5_(1)-B	
			Go1();
			break;

		case 2:
			cout << "Lab 6.3.1 Polymorphism: part 2" << endl;//cpa_lab_6_3_6_(1)-B
			Go2();
			break;

		case 3:
			cout << "Lab 6.3.1 Polymorphism: part 3" << endl;//cpa_lab_6_3_7_(1)-B			
			Go3();
			break;

		case 4:		
			cout << "Lab 6.4.1 Interfaces and virtual functions: part 1" << endl;//cpa_lab_6_4_4_(1)-B
			Go4();
			break;
			
		case 5:
			cout << "Lab 6.4.2 Interfaces and virtual functions: part 2" << endl;//cpa_lab_6_4_4_(2)-C
			Go5();
			break;

		case 6:
			cout << "Lab 6.4.2 Interfaces and virtual functions: part 3" << endl;//cpa_lab_6_4_4_(3)-B
			Go6();
			break;
		
		case 7:
			cout << "Lab 6.4.4 Your own game" << endl;//cpa_lab_6_4_4_(4)-C
			Go7();
			break;

		case 8:
			cout << "Lab 6.5.1 Composition: part 1" << endl;//cpa_lab_6_5_8_(1)-C
			Go8();
			break;
			
		case 9:		
			cout << "Lab 6.5.1 Composition: part 2" << endl;//cpa_lab_6_5_9_(1)-B		
			Go9();
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