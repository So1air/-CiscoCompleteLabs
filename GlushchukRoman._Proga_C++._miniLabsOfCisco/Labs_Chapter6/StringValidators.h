#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class StringValidator
{
public:
	virtual ~StringValidator() {};
	virtual bool isValid(string input) = 0;
};

class ExactValidator : public StringValidator {
	string key;
public:
	ExactValidator(string word) : key(word) { }
	bool isValid(string input);
};

class DummyValidator : public StringValidator {
public:
	bool isValid(string input);
};

class MinLengthValidator : public StringValidator {
	unsigned long minValueLength;
public:
	MinLengthValidator(unsigned long min) : minValueLength(min) { }
	bool isValid(string input);
};

class MaxLengthValidator : public StringValidator {
	unsigned long maxValueLength;
public:
	MaxLengthValidator(unsigned long max) : maxValueLength(max) { }
	bool isValid(string input);
};

class PatternValidator : public StringValidator {
	string pattern;
public:
	PatternValidator(string patternstr) throw (invalid_argument);
	bool isValid(string input);
};

class LengthValidator : public StringValidator
{
	MinLengthValidator* min_validator;
	MaxLengthValidator* max_validator;
public:
	LengthValidator(int min, int max);
	~LengthValidator();
	bool isValid(string input);
};

class ClassicPasswordValidator : public StringValidator {
	LengthValidator* len_validator;
	PatternValidator *lowcase_valid, *upcase_valid, *digit_valid, *sc_valid;
public:
	ClassicPasswordValidator(); 
	~ClassicPasswordValidator();
	bool isValid(string input);
};

void printValid(StringValidator& validator, string input);