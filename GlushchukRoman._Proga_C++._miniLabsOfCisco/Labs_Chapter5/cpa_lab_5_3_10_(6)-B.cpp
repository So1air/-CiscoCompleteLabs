#include <iostream>
#include <exception>
#include <stdexcept>
#include "Fraction.h"
#include "StringSplit.h"

namespace ModellingFractions {
	//helpful methods
	long long Fraction::LCM(long long x, long long y) {		
		if (abs(x) == abs(y))
			return abs(x);
		long long l, h, h0 = h = (abs(x) > abs(y)) ? (l = abs(y), abs(x)) : (l = abs(x), abs(y));

		while(h % l)
			h += h0;
		return h;
	}
	long long Fraction::GCD(long long x, long long y) {
		if (abs(x) == abs(y))
			return abs(x);
		long long l, h = (abs(x) > abs(y)) ? (l = abs(y), abs(x)) : (l = abs(x), abs(y));		
		for(;;)  {
			h %= l;
			if(!h)
				return l;
			l %= h;
			if(!l)
				return h;
		}
	}
	void Fraction::reduce() 
	{
		long long gcd = GCD(abs(this->numerator), this->denominator);
		this->numerator /= gcd;
		this->denominator /= gcd;
	}

	Fraction Fraction::times(Fraction that)
	{
		long long num = this->numerator * that.numerator;
		long long den = this->denominator * that.denominator;
		Fraction result(num, den);
		// we could call result.reduce() here
		result.reduce();
		// or use it just before it is neccessary
		return result;
	}
	
	// implement other Fraction methods
	Fraction Fraction::by(Fraction that) throw(domain_error) {
		if (that.numerator == 0)
			throw domain_error("division by zero");

		Fraction result(this->numerator * that.denominator, this->denominator * that.numerator);
		result.reduce();
		return result;
	}

	Fraction Fraction::plus(Fraction that)
	{			
		long long lcm = LCM(this->denominator, that.denominator);
		Fraction result(this->numerator * (lcm / this->denominator) + that.numerator * (lcm / that.denominator), lcm);	
		result.reduce();
		return result;
	}

	Fraction Fraction::minus(Fraction that) 
	{
		return this->plus(Fraction(- that.numerator, that.denominator));
	}
}

using namespace ModellingFractions;

int Go10(void){
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
			printf ("\nOperations:\n");
			printf ("    %s + %s = %s\n", fraction1.toString().c_str(), fraction2.toString().c_str(), fraction1.plus(fraction2).toString().c_str());
			printf ("    %s - %s = %s\n", fraction1.toString().c_str(), fraction2.toString().c_str(), fraction1.minus(fraction2).toString().c_str());
			printf ("    %s * %s = %s\n", fraction1.toString().c_str(), fraction2.toString().c_str(), fraction1.times(fraction2).toString().c_str());
			printf ("    %s / %s = %s\n", fraction1.toString().c_str(), fraction2.toString().c_str(), fraction1.by(fraction2).toString().c_str());			
		}
		catch(domain_error de)
		{
			cout << "Error" << de.what() << endl;
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