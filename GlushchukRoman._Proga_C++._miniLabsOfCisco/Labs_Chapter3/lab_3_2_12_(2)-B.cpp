#include <iostream>
#include "RunMethodsOfLabsOfChapter3.h"

using namespace std;

int Go2(void){
	
	const int count = 10;
	
	int matrix[count][count] = { };
	
	int **m = new int*[count];
	for (int i = 0; i < count; i++)
		*(m + i) = matrix[i];

	for (int r = 0; r < count; r++)
		for (int c = 0; c < count; c++)
			*(*(m + r) + c) = (r + 1) * (c + 1);

	for(int i = 0; i < count; i++) {
		for(int j = 0; j < count; j++) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}	

	return 0;
}