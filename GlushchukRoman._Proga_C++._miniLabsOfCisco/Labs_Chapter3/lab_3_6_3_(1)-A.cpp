#include <iostream>
#include "RunMethodsOfLabsOfChapter3.h"
#include "IncFunc.h"

using namespace std;

void increment(int &value, int inc/*= 1*/){
	value += inc;
}

int Go9(void){

	int var = 0;
	for(int i = 0; i < 10; i++)
		if(i % 2)
			increment(var);
		else
			increment(var,i);

	cout << var << endl;

	return 0;
}