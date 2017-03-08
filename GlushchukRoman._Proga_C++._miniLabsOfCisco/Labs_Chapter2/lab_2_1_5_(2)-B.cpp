#include <iostream>
#include "Allfunc.h"

using namespace std;

int Go2(void)
{
	float grossprice, taxrate, netprice, taxvalue;
	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	if(grossprice < 0)
		cout << "Not correct gross price!";
	else 
		if ((taxrate < 0) || (taxrate > 100))
		cout << "Not correct taxrate!";
		else {
			netprice = grossprice * 100 / (100 + taxrate);
			taxvalue = grossprice - netprice;
			cout << "Net price: " << netprice << endl;
			cout << "Tax value: " << taxvalue << endl;
		}
	
	return 0;
}