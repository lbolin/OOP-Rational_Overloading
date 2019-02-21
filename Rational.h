//lauren Bolin
#pragma once
#include <string>
#include <iostream>
using std::ostream;
using std::istream;
using std::string;

class Rational
{
public:
	
	Rational(long NewNumerator = 0, long NewDenominator = 1);
	long getNumerator()const;
	long getDenominator()const;
	long getLeastCommonMultiple(long x, long y);
	long getGreatestCommonDivisor(long x, long y);
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
	Rational operator+=(Rational rValue);
	Rational operator-=(Rational rValue);
	Rational operator*=(Rational rValue);
	Rational operator/=(Rational rValue);
	string operator()() const;
	explicit operator double()const ;
	long LeastCommonMultiple(long x, long y) const;
	long GreatestCommonDivisor(long x, long y) const;
	void Reduce();

private:
	int numerator;
	int denominator;
};

ostream &operator<<(ostream & out, const Rational & rational);
istream &operator>>(istream & in, Rational & rational);
Rational operator*(Rational lValue, Rational rValue);
Rational operator+(Rational lValue, Rational rValue);
Rational operator-(Rational lValue, Rational rValue);
Rational operator/(Rational lValue, Rational rValue);
Rational operator^(Rational lvalue, int rValue);


