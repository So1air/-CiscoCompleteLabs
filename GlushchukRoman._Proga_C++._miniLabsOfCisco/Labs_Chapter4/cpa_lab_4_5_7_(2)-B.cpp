#include <iostream>
#include "RunMethodsOfLabsOfChapter4.h"
#include <string>
#include "StringManipulation.h"

using namespace std;

void replaceAll(string &str, string old_substr, string new_substr){
	int pos_substr = str.find(old_substr);
	while(pos_substr != string::npos){
		str.replace(pos_substr, old_substr.size(), new_substr);
		pos_substr = str.find(old_substr); 
	}
}

int Go8(void){
	string sentence;
	cout << "Enter a string:" << endl;
	cin.ignore();
	getline(cin, sentence);
	cout << endl;

	string from;
	cout << "Enter a words you want to replace: ";
	getline(cin, from);
	cout << endl;
	string to;
	cout << "Enter a word is replacement: ";
	getline(cin, to);
	cout << endl;
	
	replaceAll(sentence, from, to);

	cout << "The change string: \n";
	cout << sentence << "\n";
	
	return 0;
} 