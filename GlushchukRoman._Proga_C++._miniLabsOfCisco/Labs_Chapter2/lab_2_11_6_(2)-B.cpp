#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go24(void)
{
	struct Time{
		int hour, minute;
	};
	Time timeBegining, timeEnding, timeDifference;
	bool not_correct_input;
	cout << "Enter a time begining \n";
	do{
		not_correct_input = false;
		cout << "hour: ";
		cin >> timeBegining.hour;
		if((timeBegining.hour < 0) || (timeBegining.hour > 23)){
			not_correct_input = true;
			cout << "Enter correct number hours.\n";
		}
	} while(not_correct_input);
	do{
		not_correct_input = false;
		cout << "minute: ";
		cin >> timeBegining.minute;
		if((timeBegining.minute < 0) || (timeBegining.minute > 59)){
			not_correct_input = true;
			cout << "Enter correct number hours.\n";
		}
	} while(not_correct_input);

	cout << "Enter a time ending \n";
	do{
		not_correct_input = false;
		cout << "hour: ";
		cin >> timeEnding.hour;
		if((timeEnding.hour < 0) || (timeEnding.hour > 23)){
			not_correct_input = true;
			cout << "Enter correct number hours.\n";
		} else if (timeBegining.hour > timeEnding.hour){
			not_correct_input = true;
			cout << "Number hours begining great number hours ending. It is unacceptable.\n";
		}		
	} while(not_correct_input);

	do{
		not_correct_input = false;
		cout << "minute: ";
		cin >> timeEnding.minute;
		if((timeEnding.minute < 0) || (timeEnding.minute > 59)){
			not_correct_input = true;
			cout << "Enter correct number hours.";				
		} else 
			if (timeBegining.hour == timeEnding.hour)
				if(timeBegining.minute > timeEnding.minute){
					not_correct_input = true;
					cout << "Time ending earlier than time begining. It is unacceptable.\n";
				}		
	} while(not_correct_input);
    
	timeDifference.hour = timeEnding.hour - timeBegining.hour;
	timeDifference.minute = timeEnding.minute - timeBegining.minute;
	if(timeDifference.minute < 0){
		timeDifference.hour--;
		timeDifference.minute += 60;
	}
	printf("Difference in time  %d:%d .\n", timeDifference.hour, timeDifference.minute);

	return 0;
}