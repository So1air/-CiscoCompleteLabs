#include <iostream>
#include "RunMethodsOfLabsOfChapter3.h"
#include "Function of time.h"

using namespace std;

int Go5(void){
	Date d;
	cout << "Enter year, month, day: \n";
	cout << "Y > "; 
	cin >> d.year;
	cout << "M > "; 
	cin	>> d.month;
	cout << "D > "; 
	cin	>> d.day;
	cout << "This is the " << dayOfYear(d) << "th day of that year."<< endl;

	return 0;
}

int dayOfYear(Date date) {
	int result = 0;
	if ((date.day > 0) && (date.day <= monthLength(date.year, date.month))) {
		for(int i = 1; i < date.month; i++)
			result += monthLength(date.year, i);
		result += date.day;
	}
	return result;
}