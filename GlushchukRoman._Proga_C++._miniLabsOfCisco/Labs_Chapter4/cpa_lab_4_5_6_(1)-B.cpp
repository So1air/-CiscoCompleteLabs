#include <iostream>
#include "RunMethodsOfLabsOfChapter4.h"
#include <string>
#include "StringManipulation.h"

using namespace std;

void removeDuplicateWhiteSpace(string &str){
	while (str.find("  ") != string::npos)
	{
		str.replace(str.find("  "), 2, " ", 0, 1);
	}
}

int Go6(void){
	string sentence;
	cout << endl;
	cout << "Enter a string: \n"; 
	cin.ignore();
	getline(cin, sentence);
		
	removeDuplicateWhiteSpace(sentence);
	
	cout << "\nChange string: \n";
	cout << sentence << "\n";
	
	return 0;
} 