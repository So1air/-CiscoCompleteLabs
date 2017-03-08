#include <iostream>
#include "RunMethodsOfLabsOfChapter4.h"
#include <string>

using namespace std;

string ValidationIPAddress(string str){
	unsigned short count_parts = 0;
	string part = "";
	for(int i = 0; i < str.length(); i++)
		if ((int(str[i]) >= int('0')) && (int(str[i]) <= int('9')))
			part.push_back(str[i]);
		else 
			if (int(str[i]) == int('.'))
				if(part.length() > 0)
					if (part.length() < 4)
						if (atoi(part.c_str()) < 256)
							if	(++count_parts > 4)
								return "Too many parts";
							else part = "";						
						else return "Too big value of part";
					else return "Too many characters in part";
				else return "Part is empty";
			else return "Only digits and dots allowed";

	if(part.length() > 0)
		if (part.length() < 4)
			if (atoi(part.c_str()) < 256)
				if	(++count_parts > 4)
					return "Too many parts";
				else 
					if(count_parts == 4)
						return "Correct IP";
					else return "Incorrect parts count";				
			else return "Too big value of part";
		else return "Too many characters in part";
	else return "Part is empty";
}

int Go5(void){
	string IPv4;
	cout << "Enter IP:    ";
	cin.ignore();
	getline(cin, IPv4);
	cout << "\n\n";

	//cout << int('0') << "\n" << int('9') << "\n" << int('.') << endl << int(IPv4[0]) << endl;
	cout << ValidationIPAddress(IPv4);

	return 0;
} 