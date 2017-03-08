#include <iostream>
#include "RunMethodsOfLabsOfChapter3.h"
#include "Function of time.h"

using namespace std;

int Go6(void){
	Date since,till;
	cout << "Enter first date (y m d): \n";
	cout << "Y > "; 
	cin >> since.year;
	cout << "M > "; 
	cin	>> since.month;
	cout << "D > "; 
	cin	>> since.day;
	
	cout << "Enter second date (y m d): \n";
	cout << "Y > "; 
	cin >> till.year;
	cout << "M > "; 
	cin	>> till.month;
	cout << "D > "; 
	cin	>> till.day;
	
	cout <<"The difference between the dates of " << daysBetween(since,till) << " days."<< endl;	

	return 0;
}

int daysBetween(Date d1, Date d2) {
	int result = -1;
	
	int dOfYear_1 = dayOfYear(d1), dOfYear_2 = dayOfYear(d2);
	if ((dOfYear_1 != 0) && (dOfYear_2 != 0))
		if (d1.year <= d2.year)
			if (d1.year < d2.year){
				if(isLeap(d1.year))
					result += 366 - dOfYear_1;
				else result += 365 - dOfYear_1;

				short complete_years_between_the_dates = d2.year - d1.year - 1;
				for (int i = 1; i <= complete_years_between_the_dates; i++)
					if(isLeap(d1.year + i))
						result += 366;
					else result += 365;

				result += dOfYear_2;
				result++;
			}
			else 
				if (dOfYear_1 <= dOfYear_2)
					result = dOfYear_2 - dOfYear_1;				
	
	return result;				
}