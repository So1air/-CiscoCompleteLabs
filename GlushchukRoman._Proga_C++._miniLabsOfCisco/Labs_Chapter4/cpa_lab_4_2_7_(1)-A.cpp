#include <iostream>
#include "RunMethodsOfLabsOfChapter4.h"
#include <math.h>

using namespace std;

bool is_close(double a, double b, double tolerance){
	if (fabs(b - a) < tolerance)
		return true;
	return false;
}

int Go3(void){
	double d1 = 0.3, d2 = 3 * 0.1;
	printf("%f | %f \n", d1, d2);
	if (d1 == d2) {
		cout << "The numbers are equal";		
	} else {
		cout << "The numbers are not equal";
	}
	cout << endl;
		
	if (is_close(d1, d2, 0.00000001)) {
		cout << "The numbers are close enough";	
	} else {
		cout << "The numbers are not close enough";		
	}
	cout << endl;	

	if (is_close(d2, d1, 0.00000001)) {
		cout << "The numbers are still close enough";	
	} else {
		cout << "The numbers are not close enough";	
	}
	cout << endl;
	
	if (is_close(d2, 0.31, 0.00000001)) {
		cout << "The numbers are still close enough";
	} else {
		cout << "The numbers are not close enough";	
	}
	cout <<endl;

	return 0;
} 