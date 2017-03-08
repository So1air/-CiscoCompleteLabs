#include <iostream>

using namespace std;
int main(void) {
	const float epsilon = 0.000001;
	int num1, num2; 
	float fl_num1, fl_num2;

	cout << "Input two integer numbers:" << endl;
	cin >> num1;
	cin >> num2;

	cout << "\nResults:\n";
	fl_num1 = 1. / num1;
	cout << fl_num1 << endl;
	fl_num2 = 1. / num2;
	cout << fl_num2 << endl;

	if (abs(fl_num2 - fl_num1) < epsilon)
		cout << "Results are equal (by 0.000001 epsilon)" << endl;
	else cout << "Results are not equal (by 0.000001 epsilon)" << endl;

	cin >> num1;

	return 0;
}