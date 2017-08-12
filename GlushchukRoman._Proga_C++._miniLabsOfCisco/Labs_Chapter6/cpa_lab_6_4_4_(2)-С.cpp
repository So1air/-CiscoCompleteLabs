#include "StringValidators.h"
#include <climits>

bool MinLengthValidator::isValid(string input) {
	if(minValueLength)
		return input.length() >= minValueLength;
	else
		return true; //нету ограничений на длину
}

bool MaxLengthValidator::isValid(string input) {
	if(maxValueLength)
		return input.length() <= maxValueLength;
	else
		return true; //нету ограничений на длину
}

PatternValidator::PatternValidator(string patternstr) throw (invalid_argument) : pattern(patternstr) {
	if (pattern.length() == 0)
		throw invalid_argument("pattern is empty");

	for (int i = 0, n = pattern.length(); i < n; i++)
		if ((pattern[i] < '!') && (pattern[i] == ' ') || ((pattern[i] > 'D') && (pattern[i] <= 'Z')) || (pattern[i] > 127))
			throw invalid_argument("pattern is not correct");
}

bool PatternValidator::isValid(string input) {
	if (input.length() < pattern.length())
		return false;
	else {
		bool ispat;
		for (int i = 0, n0 = input.length() - pattern.length() + 1; i < n0; i++) {
			ispat = true;
			for (int j = 0, n1 = pattern.length(); (j < n1) && ispat; j++)
				switch (pattern[j])
				{
				case '?':
					break;

				case '\\':
					ispat = (input[i + j] > ' ') && (!islower(input[i + j])) && (!isupper(input[i + j])) && (!isdigit(input[i + j])) && (input[i + j] < 128);
					break;

				case 'A':
					ispat = islower(input[i + j]) || isupper(input[i + j]);
					break;

				case 'B':
					ispat = islower(input[i + j]);
					break;

				case 'C':
					ispat = isupper(input[i + j]);
					break;

				case 'D':
					ispat = isdigit(input[i + j]);
					break;

				default:
					if(islower(pattern[j]))
						ispat = tolower(input[i + j]) == pattern[j];
					else
						ispat = input[i + j] == pattern[j];
					break;
				}
			if (ispat) return true;
		}
		return false;
	}
}

int Go5(void) {
	cout << "MinLengthValidator" << endl;
	MinLengthValidator min(6);
	printValid(min, "hello");	
	cout << endl;
	printValid(min, "welcome");
	cout << endl;
	cout << "MaxLengthValidator" << endl;
	MaxLengthValidator max(6);
	printValid(max, "hello");
	cout << endl;
	printValid(max, "welcome");
	cout << endl;
	cout << "PatternValidator" << endl;
	PatternValidator digit("D");
	printValid(digit, "there are 2 types of sentences in the world");
	cout << endl;
	printValid(digit, "valid and invalid ones");
	cout << endl;

	cout << "CHAR_MIN = " << CHAR_MIN << endl;
	cout << "CHAR_MAX = " << CHAR_MAX << endl;
	cout << "UCHAR_MAX = " << UCHAR_MAX << endl;
	cout << "INT_MIN = " << INT_MIN << endl;
	cout << "INT_MAX = " << INT_MAX << endl;

	for (char i = -128; i < 127; i++)
		cout << int(i) << ": " << i << endl;

	return 0;
}