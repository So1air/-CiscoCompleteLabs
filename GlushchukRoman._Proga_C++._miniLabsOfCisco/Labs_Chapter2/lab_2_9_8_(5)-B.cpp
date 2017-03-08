#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go22(void)
{
	double matrix[][4] = { { 1, 2, 3, 4 },
						   { 2, 2, 3, 1 },
						   { 3, 3, 3, 2 },
						   { 4, 1, 2, 4 } };
	int side = sizeof(matrix[0]) / sizeof(matrix[0][0]);
	bool issymmetric = true;
	
	for(int i = 0; (i < side) && issymmetric; i++)
		for(int j = i + 1; (j < side) && issymmetric; j++)
			if (matrix[i][j] != matrix[j][i])
				issymmetric = false;

	if(issymmetric)
	cout << "The matrix is symmetric" << endl;
	else
	cout << "The matrix is not symmetric" << endl;

	return 0;
}