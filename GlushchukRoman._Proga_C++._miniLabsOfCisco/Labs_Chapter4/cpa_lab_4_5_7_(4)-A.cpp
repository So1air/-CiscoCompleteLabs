#include <iostream>

#include <string>
#include "StringManipulation.h"

using namespace std;

bool isAnagrams(string str1, string str2){
	int pos;
	if (str1.length() == str2.length())
		while(str1.length() != 0){
			pos = str2.find(str1[str1.length() - 1]); 
			if(pos != string::npos){
				str1.erase(str1.length() - 1, 1);
				str2.erase(pos, 1);
			}
			else return false;
		}
	else return false;

	return true;
}

int Go10(void){
	string str; 
	cout << "Enter a string: \n";
	cin.ignore();
	getline(cin, str);
	cout << endl << endl;
	
	bool anagrams = true;
	string word0, next_word;
	int pos_next_word = 0;
	word0 = getNextWordInLatinAlphabet(str, pos_next_word);
	next_word = getNextWordInLatinAlphabet(str, pos_next_word);
	while(anagrams && (next_word.length())){
		anagrams = isAnagrams(word0, next_word);
		next_word = getNextWordInLatinAlphabet(str, pos_next_word);
	}

	if (anagrams)
		cout << "anagrams";
	else cout << "not anagrams";

	return 0;
} 