#include <iostream>
#include "Allfunc.h"

using namespace std;

void OutputDayOfWeek(int);

int MaxCountDayInMonth(int);

int Go4(void)
{
	int result;
	int year, month, day;

	cout << "Input the date.\n";
	cout << "Enter the year: ";
	cin >> year;
	if (year > 1900) {
		cout << "Enter the month: ";
		cin >> month;
		if ((month > 0) && (month < 13)){
			cout << "Enter the day: ";
			cin >> day;
			if ((day > 0) && (day <= MaxCountDayInMonth(month))){
				result = month;
				result -= 2;
				if (result <= 0){
					result += 12;
					year--;
				}
				result *= 83;
				result /= 32;
				result += day;
				result += year;
				result += year/4;
				result -= year/100;
				result += year/400;
				OutputDayOfWeek(result % 7);
			}
			else cout << "Unexpected value of day. Further actions are not possible.";
		}
		else cout << "Unexpected value of month. Further actions are not possible.";
	}
	else cout << "Unexpected value of year. Further actions are not possible.";
		
	return 0;
}

void OutputDayOfWeek(int i){
	switch (i)
	{
	case 0:
		cout << "This is Sunday.";
		break;
	case 1:
		cout << "This is Monday.";
		break;
    case 2:
		cout << "This is Tuesday.";
		break;
	case 3:
		cout << "This is Wednesday.";
		break;
	case 4:
		cout << "This is Thursday.";
		break;
	case 5:
		cout << "This is Friday.";
		break;
	case 6:
		cout << "This is Saturday.";
		break;	

	default:
		
		break;
	}
}
	
int MaxCountDayInMonth(int i){
		return 31;
}
