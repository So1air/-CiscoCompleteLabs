#pragma once
#include <string>

using namespace std;

namespace ModellingFractions {
	class Fraction {	
	private:
		long long numerator;
		long long denominator;
		void reduce();
		
	public:
		Fraction(long long numerator, long long denominator);
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
		long long static LCM(long long x, long long y);
		long long static GCD(long long x, long long y);
	};

}