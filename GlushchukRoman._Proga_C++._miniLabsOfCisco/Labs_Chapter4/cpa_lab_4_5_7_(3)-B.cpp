#include <iostream>

#include <string>
#include "StringManipulation.h"

using namespace std;

int removeStopWords(string &str, string stopwords){	
	int count_rem_words = 0;	
	string st_word;	
	int pos_end_st_word = 0;

	st_word = getNextWordInLatinAlphabet(stopwords, pos_end_st_word);

	int pos_st_word_in_str;
	while(st_word.length() != 0){				
		pos_st_word_in_str = findSubstrCaseInsens(str, st_word, 0);
		while(pos_st_word_in_str != -1){			
			if(pos_st_word_in_str != 0)  
				if (isLatinLetter(str[pos_st_word_in_str - 1]) || ((pos_st_word_in_str + st_word.length() < str.length()) && isLatinLetter(str[pos_st_word_in_str + st_word.length()])))
					pos_st_word_in_str += st_word.length();
				else {
					str.erase(pos_st_word_in_str, st_word.size());
					if (str[pos_st_word_in_str] == ' ')
						str.erase(pos_st_word_in_str, 1);
					count_rem_words++;
				}			
			else 
				if((pos_st_word_in_str + st_word.length() < str.length()) && isLatinLetter(str[pos_st_word_in_str + st_word.length()]))
					pos_st_word_in_str += st_word.length();
				else {
					str.erase(pos_st_word_in_str, st_word.size());
					if (str[pos_st_word_in_str] == ' ')
						str.erase(pos_st_word_in_str, 1);
					count_rem_words++;
				}
			pos_st_word_in_str = findSubstrCaseInsens(str, st_word, pos_st_word_in_str);
		}		
		st_word = getNextWordInLatinAlphabet(stopwords, pos_end_st_word);		
	}
	return count_rem_words;
}

int findSubstrCaseInsens(string str, string substr, int start_search){
	if(start_search >= str.length())
		return -1;
	if(start_search < 0)
		start_search = 0;

	lowerCase(substr);
	lowerCase(str);
	return str.find(substr, start_search);
}

string getNextWordInLatinAlphabet(string str, int &cur_pos){
	if (cur_pos < 0)
		cur_pos = 0;
	string word = "";
	
	for (; (cur_pos < str.length()) && ( ! isLatinLetter(str[cur_pos])); cur_pos++);

	for (; (cur_pos < str.length()) && isLatinLetter(str[cur_pos]); cur_pos++)
		word.push_back(str[cur_pos]);

	return word;
}

bool isLatinLetter(char ch){
	return (((int)ch >= int('A')) && ((int)ch <= int('Z'))) || (((int)ch >= int('a')) && ((int)ch <= int('z')));
}

void lowerCase(string &str){
	for (int i = 0; i < str.length(); i++)
		if (((int)str[i] >= int('A')) && ((int)str[i] <= int('Z')))
			str[i] += 'a' - 'A'; 
}

int Go9(void){
	string sentence;
	cout << "Enter a string:" << endl;
	cin.ignore();
	getline(cin, sentence);
	cout << endl;

	string stop_words;
	cout << "Enter a words you want to remove: \n";
	getline(cin, stop_words);
	cout << endl;

	int count_rem = removeStopWords(sentence, stop_words);

	cout << "The change string: \n";
	cout << sentence << "\n\n" << "Remove " << count_rem << " words.\n";
	
	return 0;
} 