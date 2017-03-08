#include <iostream>
#include "RunMethodsOfLabsOfChapter3.h"
#include "Function of time.h"

using namespace std;

int Go4(void){
	for(int yr = 2000; yr < 2002; yr++) {
		for(int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr,mo) << " ";
		cout << endl;
	}

	return 0;
}

int monthLength(int year, int month) {
	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;
		break;

	case 4: case 6: case 9: case 11:
		return 30;
		break;

	case 2:
		if (isLeap(year))
			return 29;
		else return 28;

	default:
		return 0;
		break;
	}
}