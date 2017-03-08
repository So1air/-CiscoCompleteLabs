#include <iostream>
#include "RunMethodsOfLabsOfChapter3.h"
#include <cmath>
#include "IncFunc.h"

using namespace std;

void increment(float &value, float inc/*= 1.0f*/){
	value += inc;
}

void increment(double &value, double inc/*= 1.0*/){
	value += inc;
}

int Go10(void){
	int intvar = 0;
	float floatvar = 1.5;
	for(int i = 0; i < 10; i++)
		if(i % 2) {
			increment(intvar);
			increment(floatvar, sqrt(intvar));
		}
		else {
			increment(intvar,i);
			increment(floatvar);
		}

	cout << intvar * floatvar << endl;

	return 0;
}