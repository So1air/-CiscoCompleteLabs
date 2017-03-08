#include <iostream>
#include "Allfunc.h"

using namespace std;

int main(void){
	int index_lab;
	while (true)
	{
		cout << "List of labworks:\n";		
		cout << "1. Lab 2.1.1 Essentials of if-else statement" << endl;							//lab_2_1_5_(1)-A
		cout << "2. Lab 2.1.2 Some actual evaluations - taxes" << endl;							//lab_2_1_5_(2)-B
		cout << "3. Lab 2.1.3 Some actual evaluations - converting measurement systems" << endl;//lab_2_1_5_(3)-B
		cout << "4. Lab 2.1.4 Some actual evaluations - finding day of week" << endl;			//lab_2_1_5_(4)-B
		cout << "5. Lab 2.1.5 Some actual evaluations - finding date of Easter" << endl;		//lab_2_1_5_(5)-B
		cout << "6. Lab 2.3.1 Collatz's hypothesis" << endl;									//lab_2_3_19_(1)-B
		cout << "7. Lab 2.3.2 Some actual evaluations - finding value of Pi" << endl;			//lab_2_3_19_(2)-A
		cout << "8. Lab 2.3.3 Finding positive powers of 2" << endl;							//lab_2_3_19_(3)-A
		cout << "9. Lab 2.3.4 Finding negative powers of 2" << endl;							//lab_2_3_19_(4)-B
		cout << "10. Lab 2.3.5 Drawing squares (actually: rectangles)" << endl;					//lab_2_3_19_(5)-B
		cout << "11. Lab 2.3.6 Postcard from Gizah" << endl;									//lab_2_3_19_(6)-B
		cout << "12. Lab 2.3.7 Do it yourself: Fibonacci sequence" << endl;						//lab_2_3_19_(7)-A
		cout << "13. Lab 2.3.8 Do it yourself: factorials" << endl;								//lab_2_3_19_(8)-A
		cout << "14. Lab 2.3.9 The riddle (a bit tricky one)" << endl;							//lab_2_3_19_(9)-C	
		cout << "15. Lab 2.4.1 Counting bits (the ones)" << endl;								//lab_2_4_23_(1)-A
		cout << "16. Lab 2.4.2 Bitwise palindromes" << endl;									//lab_2_4_23_(2)-B
		cout << "17. Lab 2.5.1 A real and usable calculator" << endl;							//lab_2_5_4_(1)-B		
		cout << "18. Lab 2.9.1 Simple vector manipulations" << endl;							//lab_2_9_8_(1)-A		
		cout << "19. Lab 2.9.2 Collecting banknotes" << endl;									//lab_2_9_8_(2)-C		
		cout << "20. Lab 2.9.3 Palindromes once again" << endl;									//lab_2_9_8_(3)-A		
		cout << "21. Lab 2.9.4 Evaluating different kinds of means" << endl;					//lab_2_9_8_(4)-B		
		cout << "22. Lab 2.9.5 Two dimensional square array - symmetric or not?" << endl;		//lab_2_9_8_(5)-B		
		cout << "23. Lab 2.11.1 Structure of time or time of structure" << endl;				//lab_2_11_6_(1)-B		
		cout << "24. Lab 2.11.2 Times and durations" << endl;									//lab_2_11_6_(2)-B

		cout << "Select a work for run:\n";
		cin >> index_lab;
		cout << endl << endl; 

		switch (index_lab)
		{
		case 1:
			cout << "Lab 2.1.1 Essentials of if-else statement" << endl;
			Go1();
			break;

		case 2:
			cout << "Lab 2.1.2 Some actual evaluations - taxes" << endl;
			Go2();
			break;

		case 3:
			cout << "Lab 2.1.3 Some actual evaluations - converting measurement systems" << endl;
			Go3();
			break;

		case 4:
			cout << "Lab 2.1.4 Some actual evaluations - finding day of week" << endl;
			Go4();
			break;
			
		case 5:
			cout << "Lab 2.1.5 Some actual evaluations - finding date of Easter" << endl;
			Go5();
			break;

		case 6:
			cout << "Lab 2.3.1 Collatz's hypothesis" << endl;
			Go6();
			break;
		
		case 7:
			cout << "Lab 2.3.2 Some actual evaluations - finding value of π" << endl;
			Go7();
			break;

		case 8:
			cout << "Lab 2.3.3 Finding positive powers of 2" << endl;
			Go8();
			break;
			
		case 9:
			cout << "Lab 2.3.4 Finding negative powers of 2" << endl;
			Go9();
			break;

		case 10:
			cout << "Lab 2.3.5 Drawing squares (actually: rectangles)" << endl;
			Go10();
			break;
			
		case 11:
			cout << "Lab 2.3.6 Postcard from Gizah" << endl;
			Go11();
			break;

		case 12:
			cout << "Lab 2.3.7 Do it yourself: Fibonacci sequence" << endl;
			Go12();
			break;
		
		case 13:
			cout << "Lab 2.3.8 Do it yourself: factorials" << endl;
			Go13();
			break;

		case 14:
			cout << "Lab 2.3.9 The riddle (a bit tricky one)" << endl;
			Go14();
			break;
		
		case 15:
			cout << "Lab 2.4.1 Counting bits (the ones)" << endl;
			Go15();
			break;

		case 16:
			cout << "Lab 2.4.2 Bitwise palindromes" << endl;
			Go16();
			break;
		
		case 17:
			cout << "Lab 2.5.1 A real and usable calculator" << endl;
			Go17();
			break;

		case 18:
			cout << "Lab 2.9.1 Simple vector manipulations" << endl;
			Go18();
			break;
		
		case 19:
			cout << "Lab 2.9.2 Collecting banknotes" << endl;
			Go19();
			break;

		case 20:
			cout << "Lab 2.9.3 Palindromes once again" << endl;
			Go20();
			break;
		
		case 21:
			cout << "Lab 2.9.4 Evaluating different kinds of means" << endl;
			Go21();
			break;

		case 22:
			cout << "Lab 2.9.5 Two dimensional square array - symmetric or not?" << endl;
			Go22();
			break;
		
		case 23:
			cout << "Lab 2.11.1 Structure of time or time of structure" << endl;
			Go23();
			break;

		case 24:
			cout << "Lab 2.11.2 Times and durations" << endl;
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

