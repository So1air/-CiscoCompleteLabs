#include <iostream>
#include "RunMethodsOfLabsOfChapter4.h"
#include <string>

using namespace std;

void TextFormatting(string &str){
	struct{
		int ind; 
		char char_formatting;
	} last_char_formatting = {0, '#'};  

	for (int i = 0; i < str.length(); i++)
		switch (str[i])
		{
		case '_':
			switch (last_char_formatting.char_formatting)
			{
			case '*':
				str.erase(i, 1);				
				last_char_formatting.ind = i--;
				last_char_formatting.char_formatting = '_';
				break;

			case '_':
				str.insert(last_char_formatting.ind, " ");
				i++;
				for(int j = last_char_formatting.ind + 2; j < i; j +=2){
					str.insert(j, " ");
					i++;
				}
				str[i] = ' ';
				last_char_formatting.char_formatting = '#';
				break;

			case '#':
				str.erase(i, 1);
				last_char_formatting.char_formatting = '_';
				last_char_formatting.ind = i--;
				break;

			default:
				break;
			}
			break;
		
		case '*':
			switch (last_char_formatting.char_formatting)
			{
			case '*':
				for(int j = last_char_formatting.ind; j < i; j++)
					if (((int)str[j] >= int('a')) && ((int)str[j] <= int('z')))
						str[j] += 'A' - 'a';
				str.erase(i, 1);				
				i--;
				last_char_formatting.char_formatting = '#';
				break;

			case '_':
				str.erase(i, 1);				
				last_char_formatting.ind = i--;
				last_char_formatting.char_formatting = '*';
				break;

			case '#':
				str.erase(i, 1);
				last_char_formatting.char_formatting = '*';
				last_char_formatting.ind = i--;

			default:
				break;
			}

		default:
				break;
		}
}

int Go12(void){
	string sentence;
	cout << "\nEnter a string for formatting: \n";
	cin.ignore();
	getline(cin, sentence);
	
	TextFormatting(sentence);
	
	cout << "\nThe edited string: \n" << sentence << "\n";
	
	return 0;
} 