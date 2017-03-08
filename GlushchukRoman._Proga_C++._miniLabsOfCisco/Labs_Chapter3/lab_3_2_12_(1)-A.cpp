#include <iostream>
#include "RunMethodsOfLabsOfChapter3.h"

using namespace std;

int Go1(void){
	int vector[] = { 3, -5, 7, 10, -40, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);

	int *v = vector;
	int min_elem = *v;
	cout << "Array:  \n  [0]: " << *v << endl;
	for(int i = 1; i < n; i++) {
		printf("  [%d]: %d \n", i, *(v + i));
		if (*(v + i) < min_elem)
			min_elem = *(v + i);
	}

	cout << "Min-element in array - " << min_elem << ".";	

	return 0;
}