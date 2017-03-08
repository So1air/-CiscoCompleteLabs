#include <iostream>
#include <string>
#pragma once

using namespace std;

void removeDuplicateWhiteSpace(string &str);
void removeDuplicateWords(string &str);
void replaceAll(string &str, string old_substr, string new_substr);
int removeStopWords(string &str, string stopwords);
int findSubstrCaseInsens(string str, string substr, int start_search);
string getNextWordInLatinAlphabet(string str, int &cur_pos);
bool isLatinLetter(char ch);
void lowerCase(string &str);
bool isAnagrams(string str1, string str2);