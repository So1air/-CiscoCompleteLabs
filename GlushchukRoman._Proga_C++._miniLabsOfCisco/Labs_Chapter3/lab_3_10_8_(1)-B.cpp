#include <iostream>
#include "RunMethodsOfLabsOfChapter3.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int Go11(void){
	
	int maxball;
	int ballsno;
	do{
	cout << "Max ball number(in range 1 .. 100)?\n ";
	cin >> maxball;
	} while ((maxball <= 0) || (maxball > 100));
	
	do{
	cout << "How many balls?\n ";
	cin >> ballsno;
	} while (!((ballsno > 0) && (ballsno <= maxball)));

	srand(time(NULL));

	int *little_lottery = new int[ballsno];

	cout << "The drawn balls: \n";
	bool new_value;
	for (int i = 0; i < ballsno; i++){		
		do{
			new_value = true;
			*(little_lottery + i) = rand() % maxball + 1;
			for(int j = 0; (j < i) && new_value; j++)
				if (*(little_lottery + j) == *(little_lottery + i))
					new_value = false;

		} while (!new_value);

		cout << "  " << *(little_lottery + i);
	}

	delete[] little_lottery;

	return 0;
}