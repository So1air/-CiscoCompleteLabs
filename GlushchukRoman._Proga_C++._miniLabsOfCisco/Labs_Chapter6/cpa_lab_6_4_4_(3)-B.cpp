#include "StringValidators.h"

LengthValidator::LengthValidator(int min, int max):
	min_validator(new MinLengthValidator(min)), max_validator(new MaxLengthValidator(max))
{ } 

LengthValidator::~LengthValidator() {
	delete min_validator, max_validator;
} 


bool LengthValidator::isValid(string input) {
	return (min_validator->isValid(input) && max_validator->isValid(input));
} 

// Your code here
ClassicPasswordValidator::ClassicPasswordValidator() : len_validator(new LengthValidator(8, 0)), 
	lowcase_valid(new PatternValidator("B")), upcase_valid(new PatternValidator("C")), digit_valid(new PatternValidator("D")), sc_valid(new PatternValidator("\\")) 
{ }

ClassicPasswordValidator::~ClassicPasswordValidator() {
	delete len_validator, lowcase_valid, upcase_valid, digit_valid, sc_valid;
}

bool ClassicPasswordValidator::isValid(string input) {
	return len_validator->isValid(input) && lowcase_valid->isValid(input) && upcase_valid->isValid(input) && digit_valid->isValid(input) && sc_valid->isValid(input);
}

int Go6(void) {
	ClassicPasswordValidator cpv;
	printValid(cpv, "passR0m@");
	cout << endl;
	printValid(cpv, "Roma_password");
	cout << endl;

	string userpassword;
	cin.ignore();		
	printf("Input your password for checking or input \"q\" for exit: ");
	cin >> userpassword;
	while (userpassword != "q")
	{		
		printValid(cpv, userpassword);
		cout << endl;
		printf("Input your password for checking or input \"q\" for exit: ");
		cin >> userpassword;
	}	

	return 0;
}