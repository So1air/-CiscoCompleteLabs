#pragma once
#include <string>

using namespace std;

namespace ModellingFractions {
	class Fraction {	
	private:
		int numerator;
		int denominator;
		void reduce();
		
	public:
		Fraction(int numerator, int denominator);
		string toString();
		double toDouble();
		// the functions below do not change the object
		// on which they are called, they produce a new object
		Fraction plus(Fraction that);
		Fraction minus(Fraction that);
		Fraction times(Fraction that);
		Fraction by(Fraction that);
		//comparision of two fractions
		bool isGreaterThan(Fraction that);
		bool isLessThan(Fraction that);
		bool isEqual(Fraction that);
		
		//helpful methods
		int static LCM(int x, int y);
		int static GCD(int x, int y);
	};

}