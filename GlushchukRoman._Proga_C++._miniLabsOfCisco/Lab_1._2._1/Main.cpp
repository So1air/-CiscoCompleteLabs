#include <iostream>;
#include <string>;

using namespace std;

int main(void) {
	cout<<"Hello!"<<endl;
	cout<<"It's me, your first program.";
	string nameUser;
	cout<<endl;
	cout<<"What's your name, please."<<endl;
	cin >> nameUser;
	cout<<endl<<"Hello, "<< nameUser<<"!";
	cout<<"With you have someone next to you? Introduce them."<<endl;
	cin >> nameUser;
	cout<<"\nHello, "<< nameUser<<"!";
	cin >> nameUser; //пауза перед завершением
	return 0;
}