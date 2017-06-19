#pragma once
#include "StringSplit.h"

inline bool space(char c){
	return isspace(c);
}
 
inline bool notspace(char c){
	return !isspace(c);
}
 
//break a sentence into words
vector<string> split(const string& s){
	typedef string::const_iterator iter;
	vector<string> ret;
	iter i = s.begin();
	while(i!=s.end()){
		i = find_if(i, s.end(), notspace);           // find the beginning of a word
		iter j = find_if(i, s.end(), space);         // find the end of the same word
		if(i!=s.end()){
			ret.push_back(string(i, j));             //insert the word into vector
			i = j;                                        // repeat 1,2,3 on the rest of the line.
		}
	}
	return ret;
}