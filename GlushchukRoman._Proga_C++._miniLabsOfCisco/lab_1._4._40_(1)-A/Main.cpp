#include <iostream>
using namespace std;
int main(void) {
float pi = 3.14159265359;
float x,y;
cout << "Enter value for x: ";
cin >> x;
x *= x;
//������ �� � ������� ��������, ��� �� x � �������� (�*�)
float sqr_pi = pi*pi;
y = x;
y /= sqr_pi * powf(x - 0.5, 2);
y += 1;
y *= x;
y /= sqr_pi * (x + 0.5);
cout << "y = " << y;
cin >> x; //����� ����� �����������
return 0;
} 
