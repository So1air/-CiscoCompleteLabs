#include <iostream>
using namespace std;
int main(void) {
bool answer;
int value;
float exit = 1;
while (exit)
{
cout << "Enter a value: ";
cin >> value;
answer = ((value >= 0) && (value < 10)) 
	  || ((2 * value < 20) && (value - 2 > -2)) 
	  || ((value - 1 > 1) && (value / 2 < 10)) 
	  || (value == 111);
cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
cout << "Enter a number: 0 - exit, not 0 - continue, not number - error." << endl; 
cin >> exit; //наберите ноль, чтобы выйти
cout << endl;
}
return 0;
}
 