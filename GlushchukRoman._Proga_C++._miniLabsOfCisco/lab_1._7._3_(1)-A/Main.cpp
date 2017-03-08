#include <iostream>;
#include <iomanip>;
using namespace std;
int main()
{
	float f1 = 2.3, f2 = 2.3, f3 = 2.123456, f4 = 2.123456, f5 = 2.123456;
	cout << "Put these values in code:" << endl;
	
	cout << endl;
	cout << f1 << endl;	
	cout << f2 << endl;
	cout << f3 << endl;
	cout << f4 << endl;
	cout << f5 << endl;

	printf("\n\n");

	printf("%.1f \n", f1);
	printf("%.2f \n", f2);
	printf("%f \n", f3);
	printf("%.2f \n", f4);
	printf("%.0f \n", f5);
	
	cin >> f1;
	return 0;
}