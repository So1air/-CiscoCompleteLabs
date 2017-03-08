#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go3(void)
{
	const float meter_in_foot = 0.3048f;
	const float meter_in_inch = 0.0254f;

	int sys;
	float m, ft, in;
	cout << "Measuring systems:\n";
	cout << "  0 -  metric; \n";
	cout << "  1 -  imperial. \n";
	cout << "Select system:  ";
	cin >> sys;
	switch (sys)
	{
	case 0:
		cout << "Enter the number of meters of interest:  ";
		cin >> m;
		ft = int(m / meter_in_foot);
		printf("Result converting %.0f'%f''", ft, (m - ft * meter_in_foot) / meter_in_inch); 
		break;

	case 1:
		cout << "Enter the number of foots of interest:  ";
		cin >> ft;
		cout << "Enter the number of inchs of interest:  ";
		cin >> in;

		printf("Result converting %fm", ft * meter_in_foot + in * meter_in_inch);
		break;

	default:
		cout << "Unexpected answer. Further actions are not possible.";
		break;
	} 
		
	return 0;
}