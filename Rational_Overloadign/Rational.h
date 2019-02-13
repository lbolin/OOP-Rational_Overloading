#pragma once
#include <string>
#include <iostream>
using std::ostream;
using std::string;

class Rational
{
public:
	//Rational(int numerator = 0 , int denominator = 1);
	Rational(long NewNumerator, long NewDenominator);
	long getNumerator()const;
	long getDenominator()const;
	Rational operator++();
	Rational operator++(int garbage);
	Rational operator--();
	Rational operator--(int garbage);
	const Rational& operator=(const Rational & rValue);
	bool operator==(const Rational & rValue) const;
	bool operator>(const Rational & rValue) const;
	bool operator<(const Rational & rValue) const;
	bool operator<=(const Rational & rValue) const;
	bool operator>=(const Rational & rValue) const;
	bool operator!=(const Rational & rValue) const;
	string operator()() const;
	long LeastCommonMultiple(long x, long y) const;
	long GreatestCommonDivisor(long x, long y) const;
	void Reduce();
private:
	int numerator;
	int denominator;

};
ostream &operator<<(ostream & out, const Rational & rational);
Rational operator*(Rational lValue, Rational rValue);
Rational operator+(Rational lValue, Rational rValue);
Rational operator-(Rational lValue, Rational rValue);
Rational operator/(Rational lValue, Rational rValue);






