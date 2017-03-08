#include <iostream>
#include "RunMethodsOfLabsOfChapter4.h"

using namespace std;

int Go2(void){
	const int max = 100000;
	int number, not_correct = 0;
	bool f = false;
	do{
		
		do{	//цикл проверки ввода некорректного выражения(наличие букв или других недопустимых символов для целых чисел, ...)
			f = false;
			cout << "Enter a number (in the range 1 .. " << max << "), to which you want to calculate the sum of natural numbers. \n";
			cin >> number;
			if(cin.fail()){
				f = true;
				//cin.ignore();
				cin.clear();
				cin.sync();
			}
		} while(f);

		if((number < 1) || (number > max)){
			cout << "Enter a correct number! \n";
			not_correct = 1;
		}
	} while (not_correct--);
	
	//first variant(good)
	cout << "Summ1 = " << number * (number + 1) / 2 << endl;

	//second variant(bad)
	long sum = 0;
	do {
		sum += number;
	} while (--number);
	cout << "Summ2 = " << sum << endl;
	 
	
	return 0;
} 