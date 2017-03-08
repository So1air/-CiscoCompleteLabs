#include <iostream>
#include "RunMethodsOfLabsOfChapter4.h"
#include <string>
#include "StringManipulation.h"

using namespace std;

string ValidationPassword(string str){
	string report = "";
	bool characters8 = (str.length() == 8), 
		 upcaseletter = false, 
		 lowcaseletter = false,
		 digit = false,
		 spec_char = false;

	for(int i = 0; (i < str.length()) && !(upcaseletter && lowcaseletter && digit && spec_char); i++)
		if ((int(str[i]) >= int('a')) && (int(str[i]) <= int('z')))
			lowcaseletter = true; 
		else if ((int(str[i]) >= int('A')) && (int(str[i]) <= int('Z')))
			upcaseletter = true;
		else if ((int(str[i]) >= int('0')) && (int(str[i]) <= int('9')))
			digit = true;
		else spec_char = true;
	
	report += characters8 ? "" : "The password must be 8 characters long\n";
	report += lowcaseletter ? "" : "The password must have at least one lower case letter\n";
	report += upcaseletter ? "" : "The password must have at least one upper case letter\n";
	report += digit ? "" : "The password must have at least one digit\n";
	report += spec_char ? "" : "The password must have at least one special character\n";
	if (report.length() == 0)
		return "The password is valid\n";
	else return report;

}

int Go13(void){
	string password;
	cout << "Enter a password:  ";
	cin.ignore();
	getline(cin, password);
	cout << endl;

	cout << ValidationPassword(password);

	return 0;
} 