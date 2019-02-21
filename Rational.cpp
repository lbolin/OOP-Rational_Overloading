//Lauren Boln
//Rational.cpp
#include"Rational.h"
#include<sstream>
#include<istream>
#include<cmath>


Rational::Rational(long NewNumerator , long NewDenominator)
{

	numerator = NewNumerator;
	denominator = NewDenominator;
	Reduce();
}


const Rational& Rational::operator=(const Rational & rValue)
{
	numerator = rValue.numerator;
	denominator = rValue.denominator;
	Reduce();
	return *this;
}

Rational Rational::operator++()
{
	numerator += denominator;
	Reduce();
	return *this;
}

Rational Rational::operator++(int Garbage)
{
	Rational result = *this;
	numerator += denominator;
	Reduce();
	return result;
}

Rational Rational::operator--()
{
	numerator -= denominator;
	Reduce();
	return *this;
}

Rational Rational::operator--(int Garbage)
{
	Rational result = *this;
	numerator -= denominator;
	Reduce();
	return result;
}

bool Rational::operator==(const Rational & rValue) const
{
	bool result = true;
	if (numerator != rValue.numerator || denominator != rValue.denominator)
	{
		result = false;
	}
	return result;
}

bool Rational::operator>(const Rational & rValue) const
{
	bool result = false;
	long LCM = LeastCommonMultiple(getDenominator(), rValue.getDenominator());
	if ((LCM / getDenominator()) * getNumerator() > (LCM / rValue.getDenominator()) * rValue.getNumerator())
	{
		result = true;
	};

	return result;
}

bool Rational::operator<(const Rational & rValue) const
{
	bool result = false;
	long LCM = LeastCommonMultiple(getDenominator(), rValue.getDenominator());
	if ((LCM / getDenominator()) * getNumerator() < (LCM / rValue.getDenominator()) * rValue.getNumerator())
	{
		result = true;
	};

	return result;
}

bool Rational::operator<=(const Rational & rValue) const
{
	return(*this < rValue || *this == rValue);
}

bool Rational::operator>=(const Rational & rValue) const
{
	bool result = false;
	long LCM = LeastCommonMultiple(getDenominator(), rValue.getDenominator());
	if ((LCM / getDenominator()) * getNumerator() >= (LCM / rValue.getDenominator()) * rValue.getNumerator())
	{
		result = true;
	};

	return result;
}


bool Rational::operator!=(const Rational & rValue) const
{
	return !(*this == rValue);
}


string Rational::operator()() const
{
	std::stringstream stream;
	stream << numerator << "/" << denominator;
	return stream.str();
}

Rational::operator double()const
{
	return(double(numerator) / double(denominator));
}

ostream &operator<<(ostream & out, const Rational & rational)
{
	out << rational.getNumerator() << "\\" << rational.getDenominator();
	return out;
}

istream &operator>>(istream& in,  Rational& rValue)
{
	long num, den;
	in >> num >> den;
	rValue = Rational(num,den);
	return in;
}

long Rational::getNumerator()const
{
	return numerator;
}

long Rational::getDenominator()const
{
	return denominator;
}

long Rational::getLeastCommonMultiple(long x, long y)
{
	return LeastCommonMultiple(x, y);
}

long Rational::getGreatestCommonDivisor(long x, long y)
{
	return GreatestCommonDivisor(x, y);
}


long Rational::LeastCommonMultiple(long x, long y) const
{
	bool Continue = true;
	long result = x;
	while (result % y != 0)
	{
		result += x;
	}
	return result;
}

long Rational::GreatestCommonDivisor(long x, long y) const
{
	long remainder = x % y;
	while (remainder != 0)
	{
		x = y;
		y = remainder;
		remainder = x % y;
	}
	return y;
}

void Rational::Reduce()
{
	long GCD = GreatestCommonDivisor(numerator, denominator);
	numerator = numerator / GCD;
	denominator = denominator / GCD;
}

Rational Rational::operator+=(Rational rValue)
{
	return(*this = *this + rValue);
}

Rational Rational::operator-=(Rational rValue)
{
	return(*this = *this - rValue);
}


Rational Rational::operator*=(Rational rValue)
{
	return(*this = *this * rValue);
}


Rational Rational::operator/=(Rational rValue)
{
	return(*this = *this / rValue);
}

Rational operator*(Rational lValue, Rational rValue)
{
	Rational result(lValue.getNumerator() * rValue.getNumerator(), lValue.getDenominator() * rValue.getDenominator());
	return result;
}

Rational operator+(Rational lValue, Rational rValue)
{
	long LCM = lValue.LeastCommonMultiple(lValue.getDenominator(), rValue.getDenominator());

	return Rational((LCM / (lValue.getDenominator()) * lValue.getNumerator()) + (LCM / (rValue.getDenominator()) * rValue.getNumerator()), LCM);
}

Rational operator-(Rational lValue, Rational rValue)
{
	long LCM = lValue.LeastCommonMultiple(lValue.getDenominator(), rValue.getDenominator());

	return Rational((LCM / (lValue.getDenominator()) * lValue.getNumerator()) - (LCM / (rValue.getDenominator()) * rValue.getNumerator()), LCM);
}

Rational operator/(Rational lValue, Rational rValue)
{
	return lValue * Rational(rValue.getDenominator(), rValue.getNumerator());
}


Rational operator^(Rational lvalue, int rValue)
{
	double num = pow(lvalue.getNumerator(), rValue);
	double den = pow(lvalue.getDenominator(), rValue);
	lvalue = Rational(num, den);
	return lvalue;
}



