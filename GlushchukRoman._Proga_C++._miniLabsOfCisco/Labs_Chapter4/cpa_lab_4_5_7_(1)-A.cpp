#include <iostream>
#include "RunMethodsOfLabsOfChapter4.h"
#include <string>
#include "StringManipulation.h"

using namespace std;

void removeDuplicateWords(string &str){
	removeDuplicateWhiteSpace(str);
	if(str.find(" ") == 0)
		str.erase(0, 1);
	int pos_beg_word = 0;
	int pos_end_word = str.find(" ", pos_beg_word);
	string word, dupl_word;
	while(pos_end_word != string::npos){
		word = str.substr(pos_beg_word, pos_end_word - pos_beg_word);
		dupl_word = word + " " + word;
		while (str.find(dupl_word) != string::npos)		
			str.erase(str.find(dupl_word), word.size() + 1);
		pos_beg_word = pos_end_word + 1;
		pos_end_word = str.find(" ", pos_beg_word);
	}	
}

int Go7(void){
	string sentence;
	cout << endl;
	cout << "Enter a string: \n"; 
	cin.ignore();
	getline(cin, sentence);
		
	removeDuplicateWords(sentence);
	
	cout << "\nChange string: \n";
	cout << sentence << "\n";
	
	return 0;
} 