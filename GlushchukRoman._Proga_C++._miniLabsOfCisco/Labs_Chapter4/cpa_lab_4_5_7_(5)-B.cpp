#include <iostream>

#include <string>
#include "StringManipulation.h"

using namespace std;

bool isDigit(char ch){	 
	return (((int)ch >= int('0')) && ((int)ch <= int('9')));
}

bool isCorrectPattern(string pattern){
	if (pattern.length() == 0)
		return false;

	if(pattern.find(" ") != string::npos)
		return false;

	for (int i = 0; i < pattern.length(); i++)
	{
		if (((int)pattern[i] >= int('a')) && ((int)pattern[i] <= int('z')))
			;
		else 
		switch (pattern[i])
		{
		case 'A':
		case 'D':
		case '?':
		case '!':
		case ',':
		case '.':
		case '-':
		case ':':
		case ';':
			break;

		default:
			return false;			
		}
	}

	return true;
}

/*string* */string  PatternMatching(string str, string pattern/*, int &amount*/){

	if ( ! isCorrectPattern(pattern)){
		/*amount = 0;
		return NULL;*/
		return "";
	}

	string match_pattern = "";
	int j;
	for(int i = 0; i < str.length() - pattern.length() + 1; i++){		
		for (j = 0; j < pattern.length(); j++)
			switch (pattern[j])
			{
			case 'A':
				if ( ! isLatinLetter(str[i + j]))
					j = pattern.length();
				break;

			case 'D':
				if ( ! isDigit(str[i + j]))
					j = pattern.length();
				break;

			case '?':
				break;

			default:
				if (((int)pattern[j] >= int('a')) && ((int)pattern[j] <= int('z')))
					if ((pattern[j] != str[i + j]) && ((pattern[j] - 'a' + 'A') != str[i + j]))
						j = pattern.length();
				else 
					if (pattern[j] != str[i + j])
						j = pattern.length();
				break;
			}
		if (j == pattern.length())
			match_pattern += str.substr(i, j) + "\n"; //match_pattern += str.substr(i, j);			
	}

	/*amount = match_pattern.length() / pattern.length();
	string* res = new string[amount];

	for(int i = 0; i < amount; i++)
	{
		*(res + i) = match_pattern.substr(i * pattern.length(), pattern.length());
	}

	return res; */
	return match_pattern;
}

int Go11(void){
	string pattern;
	cout << "\nEnter a pattern: \n";
	cin.ignore();
	getline(cin, pattern);
	string sentence;
	cout << "\nEnter a string: \n";
	getline(cin, sentence);

	sentence = PatternMatching(sentence, pattern); 

	cout << "\nList of relevant substrings:\n" << sentence << "\n";	

	return 0;
} 