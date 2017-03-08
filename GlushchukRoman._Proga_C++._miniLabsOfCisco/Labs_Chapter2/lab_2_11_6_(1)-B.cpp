#include <iostream>
#include "Allfunc.h"

using namespace std;


int Go23(void)
{	
	struct Time{
		int hour, minute;
	};
	Time TimeBegining, TimeEnding;
	int time_duration;
	cout << "Enter time begining \n";
	do{
		cout << "...hour(in range 0..23): ";
		cin >> TimeBegining.hour;
	} while ((TimeBegining.hour < 0) || (TimeBegining.hour > 23));
	do{
		cout << "...minute(in range 0..59): ";
		cin >> TimeBegining.minute;
	} while ((TimeBegining.minute < 0) || (TimeBegining.minute > 59));
	do{
	cout << "Enter a duration(positive integer number - count minutes) event: \n";
	cin >> time_duration; 
	} while (time_duration <= 0);

	TimeEnding.minute = TimeBegining.minute + time_duration;
	TimeEnding.hour = TimeBegining.hour;
	while(TimeEnding.minute > 59){
		TimeEnding.minute -= 60;
		TimeEnding.hour++;
		if (TimeEnding.hour > 23)
			TimeEnding.hour = 0;
	}
	printf("Time ending event   %d:%d", TimeEnding.hour, TimeEnding.minute);

	return 0;
}