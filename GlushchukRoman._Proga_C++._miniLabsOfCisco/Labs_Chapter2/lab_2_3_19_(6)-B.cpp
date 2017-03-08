#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go11(void)
{
	int h;
	//change variant
	/*cout << "Enter a heigth(greater 2 and less 15)  of the pyramid of Gizah: \n";
	cin >> h;
	if ((h > 2) && (h < 15)){
		int len_str = 5 * h;
		for (int i = 0; i < h - 1; i++, len_str++){
			for (int j = 1; j <= len_str; j++)
				if ((j == h - i) || (j == h + i) || (j == 3*h - i) || (j == 3*h + i) || (j == 5*h - i) || (j == 5*h + i))
					cout << "*";
				else cout << " ";
			cout << endl;			 
		}
		for(int i = 1; i < 6 * h; i++)
			if ((i == 2 * h) || (i == 4 * h))
				cout << " ";
			else cout << "*";
	} else printf("Value of heigth is not correct.");*/

	//need variant
	cout << "Enter a heigth(greater 2 and less 9)  of the pyramid of Gizah: \n";
	cin >> h;
	if ((h > 2) && (h < 9)){
		const int cent1 = 8;
		int len_str = 5 * cent1;
		for (int i = 0; i < h - 1; i++, len_str++){
			for (int j = 1; j <= len_str; j++)
				if ((j == cent1 - i) || (j == cent1 + i) || (j == 3*cent1 - i) || (j == 3*cent1 + i) || (j == 5*cent1 - i) || (j == 5*cent1 + i))
					cout << "*";
				else cout << " ";
			cout << endl;			 
		}
		for(int i = 1; i < 6 * cent1; i++)
			if (((i > cent1 - h) && (i < cent1 + h)) || ((i > 3*cent1 - h) && (i < 3*cent1 + h))  || ((i > 5*cent1 - h) && (i < 5*cent1 + h)))
				cout << "*";
			else cout << " ";
	} else printf("Value of heigth is not correct.");
		
	return 0;
}