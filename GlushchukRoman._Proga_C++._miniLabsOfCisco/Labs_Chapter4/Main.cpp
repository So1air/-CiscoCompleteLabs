#include <iostream>
#include "RunMethodsOfLabsOfChapter4.h"

using namespace std;

int main(void){
	int index_lab;
	while (true)
	{
		cout << "List of labworks:\n";	
		cout << "1. Lab 4.1.1 Multi-dimensional arrays of variable length" << endl; //cpa_lab_4_1_9_(1)-B
		cout << "2. Lab 4.2.1 Range of integer types" << endl;//cpa_lab_4_2_5_(1)-A
		cout << "3. Lab 4.2.1 Comparing floating-point numbers" << endl;//cpa_lab_4_2_7_(1)-A
		cout << "4. Lab 4.4.1 String manipulation: pangrams" << endl;//cpa_lab_4_4_1_(1)-B
		cout << "5. Lab 4.5.1 String in functions: IP numbers" << endl;//cpa_lab_4_5_2_(1)-B
		cout << "6. Lab 4.5.1 Text manipulation: duplicate white space" << endl;//cpa_lab_4_5_6_(1)-B
		cout << "7. Lab 4.5.1 Text manipulation: eliminate duplicates" << endl;//cpa_lab_4_5_7_(1)-A
		cout << "8. Lab 4.5.2 Text manipulation: find and replace" << endl;//cpa_lab_4_5_7_(2)-B
		cout << "9. Lab 4.5.3 Text manipulation: stop word elimination" << endl;//cpa_lab_4_5_7_(3)-B
		cout << "10. Lab 4.5.4 Text manipulation: anagrams" << endl;//cpa_lab_4_5_7_(4)-A
		cout << "11. Lab 4.5.5 Text manipulation: pattern matching" << endl;//cpa_lab_4_5_7_(5)-B
		cout << "12. Lab 4.5.6 Text manipulation: plain-text formatting" << endl;//cpa_lab_4_5_7_(6)-B
		cout << "13. Lab 4.5.7 Text manipulation: password validation" << endl;//cpa_lab_4_5_7_(7)-B
		cout << "14. Lab 4.5.8 Text manipulation: templates" << endl;//cpa_lab_4_5_7_(8)-B
		
		cout << "Select a work for run:\n";
		cin >> index_lab;
		cout << endl << endl; 

		switch (index_lab)
		{
		case 1:
			cout << "Lab 4.1.1 Multi-dimensional arrays of variable length" << endl; //cpa_lab_4_1_9_(1)-B
			Go1();
			break;

		case 2:
			cout << "Lab 4.2.1 Range of integer types" << endl;//cpa_lab_4_2_5_(1)-A
			Go2();
			break;

		case 3:
			cout << "Lab 4.2.1 Comparing floating-point numbers" << endl;//cpa_lab_4_2_7_(1)-A
			Go3();
			break;

		case 4:		
			cout << "Lab 4.4.1 String manipulation: pangrams" << endl;//cpa_lab_4_4_1_(1)-B
			Go4();
			break;
			
		case 5:
			cout << "Lab 4.5.1 String in functions: IP numbers" << endl;//cpa_lab_4_5_2_(1)-B
			Go5();
			break;

		case 6:
			cout << "Lab 4.5.1 Text manipulation: duplicate white space" << endl;//cpa_lab_4_5_6_(1)-B		
			Go6();
			break;
		
		case 7:
			cout << "Lab 4.5.1 Text manipulation: eliminate duplicates" << endl;//cpa_lab_4_5_7_(1)-A
			Go7();
			break;

		case 8:
			cout << "Lab 4.5.2 Text manipulation: find and replace" << endl;//cpa_lab_4_5_7_(2)-B
			Go8();
			break;
			
		case 9:
			cout << "Lab 4.5.3 Text manipulation: stop word elimination" << endl;//cpa_lab_4_5_7_(3)-B
			Go9();
			break;

		case 10:
			cout << "Lab 4.5.4 Text manipulation: anagrams" << endl;//cpa_lab_4_5_7_(4)-A
			Go10();
			break;
			
		case 11:
			cout << "Lab 4.5.5 Text manipulation: pattern matching" << endl;//cpa_lab_4_5_7_(5)-B
			Go11();
			break;

		case 12:
			cout << "Lab 4.5.6 Text manipulation: plain-text formatting" << endl;//cpa_lab_4_5_7_(6)-B
			Go12();
			break;

		case 13:
			cout << "Lab 4.5.7 Text manipulation: password validation" << endl;//cpa_lab_4_5_7_(7)-B
			Go13();
			break;

		case 14:
			cout << "Lab 4.5.8 Text manipulation: templates" << endl;//cpa_lab_4_5_7_(8)-B
			Go14();
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