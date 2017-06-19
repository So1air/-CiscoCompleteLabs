#include <iostream>
#include <exception>
#include <stdexcept>
#include "Fraction.h"
#include "StringSplit.h"

namespace ModellingFractions {

	// implement Fraction methods
	Fraction::Fraction(int numerator, int denominator): numerator(numerator), denominator(1) {
		if(denominator != 0) {
			if (denominator < 0) {
				this->numerator = - this->numerator;
				denominator = - denominator;
			}
			this->denominator = denominator;
		}
	}

	string Fraction::toString(){
		string result;
		if (abs(this->numerator) >= this->denominator)
			result = to_string(this->numerator / this->denominator) + ((this->numerator % this->denominator) ? (" " + to_string(abs(this->numerator) % this->denominator) + "/" + to_string(this->denominator)) : "");
		else
			result = to_string(this->numerator) +  "/" + to_string(this->denominator); 
		return result;
	}

	double Fraction::toDouble(){
		return double(this->numerator) / this->denominator;
	}
}

using namespace ModellingFractions;

int Go9(void){
	int num, den;
	string input = "";
	cin.ignore();
	while (input != "q") {
		printf("Input fraction:\n");
		getline(cin, input);

		// parse input and get numerator and denominator
		vector<string> text_fraction = split(input);
		try 
		{
			num = stoi(text_fraction[0]);
			den = stoi(text_fraction[2]);
			Fraction fraction(num, den);
			cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;
		}
		catch(out_of_range)
		{
			cout << "Not correct input!!!\n";
		}
		catch(...) 
		{
			cout << "Error\n";
		}
		cout << endl << "Input 'q' for exit\n";
		getline(cin, input);
	}

	return 0;
} 