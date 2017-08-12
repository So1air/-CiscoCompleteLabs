#include "StringValidators.h"

// Write your code here
bool ExactValidator::isValid(string input)
{
	return input.compare(key) == 0;
} 

bool DummyValidator::isValid(string input)
{
	return true;
} 

void printValid(StringValidator& validator, string input)
{
	cout << "The string '" << input << "' is " << (validator.isValid(input) ? "valid" : "invalid");
} 

int Go4(void) {
	DummyValidator dummy;
	printValid(dummy, "hello");
	cout << endl;
	cout << endl;

	ExactValidator exact("secret");
	printValid(exact, "hello");
	cout << endl;
	printValid(exact, "secret");

	return 0;
}