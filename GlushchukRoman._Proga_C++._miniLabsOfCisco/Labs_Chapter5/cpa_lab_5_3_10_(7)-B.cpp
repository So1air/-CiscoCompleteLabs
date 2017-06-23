#include <iostream>
#include "Fraction.h"
#include "StringSplit.h"

namespace ModellingFractions {
	//comparision of two fractions
	bool Fraction::isGreaterThan(Fraction that) {
		long long lcm = LCM(this->denominator, that.denominator);
		return (this->numerator * (lcm / this->denominator)) > (that.numerator * (lcm / that.denominator));
	}

	bool Fraction::isLessThan(Fraction that) {
		long long lcm = LCM(this->denominator, that.denominator);
		return (this->numerator * (lcm / this->denominator)) < that.numerator * (lcm / that.denominator);
	}
	
	bool Fraction::isEqual(Fraction that) {
		long long lcm = LCM(this->denominator, that.denominator);
		return (this->numerator * (lcm / this->denominator)) == (that.numerator * (lcm / that.denominator));
	}
}

using namespace ModellingFractions;

int Go11(void){
	long long num, den;
	vector<string> text_fraction;
	string input = "";
	cin.ignore();
	while (input != "q") {
		try 
		{	
			printf("Input fraction1:\n");
			getline(cin, input);
			text_fraction = split(input);
			num = stoll(text_fraction[0]);
			den = stoll(text_fraction[2]);
			Fraction fraction1(num, den);

			printf("Input fraction2:\n");
			getline(cin, input);
			text_fraction = split(input);
			num = stoll(text_fraction[0]);
			den = stoll(text_fraction[2]);
			Fraction fraction2(num, den);
			printf ("\nResult of comparision:\n");
			if (fraction1.isGreaterThan(fraction2))
				cout << fraction1.toString() << " > " << fraction2.toString() << endl;
			if (fraction1.isEqual(fraction2))
				cout << fraction1.toString() << " == " << fraction2.toString() << endl;
			if (fraction1.isLessThan(fraction2))
				cout << fraction1.toString() << " < " << fraction2.toString() << endl;
		}
		catch(out_of_range)
		{
			cout << "Not correct input!!!\n";
		}
		catch(...) 
		{
			cout << "Unexpected error\n";
		}		
		
		cout << endl << "Input 'q' for exit\n";
		getline(cin, input);
	}

	return 0;
} 