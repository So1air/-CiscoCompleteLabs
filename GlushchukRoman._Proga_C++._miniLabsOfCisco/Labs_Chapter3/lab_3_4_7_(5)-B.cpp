#include <iostream>
#include "RunMethodsOfLabsOfChapter3.h"
#include "Function of time.h"
#include <ctime>

using namespace std;

void COutNameMonth(int i){
	switch (i)
	{
	case 1:
		cout << "January";
		break;
	case 2:
		cout << "February";
		break;
	case 3:
		cout << "March";
		break;
	case 4:
		cout << "April";
		break;
	case 5:
		cout << "May";
		break;
	case 6:
		cout << "June";
		break;
	case 7:
		cout << "July";
		break;
	case 8:
		cout << "August";
		break;
	case 9:
		cout << "September";
		break;
	case 10:
		cout << "October";
		break;
	case 11:
		cout << "November";
		break;
	case 12:
		cout << "December";
		break;
	default:
		break;
	}
}

int Go7(void){	
	Date t = today();
	cout << "\nToday, ";
	COutNameMonth(t.month);
	cout << " " << t.day<< ", " << t.year << "." << endl;

	return 0;
}

Date today(void){
	time_t t = time(NULL);
	tm tl;
	localtime_s(&tl, &t);
	Date today;
	today.year = tl.tm_year+1900;
	today.month = tl.tm_mon+1;
	today.day = tl.tm_mday;
	return today;
}