#pragma once

bool Fraction::operator>(const Fraction& other) const
{
	return (_numerator * other._denominator) > (_denominator * other._numerator);
}

bool Fraction::operator>=(const Fraction& other) const
{
	return (_numerator * other._denominator) >= (_denominator * other._numerator);
}

bool Fraction::operator<(const Fraction& other) const
{
	return (_numerator * other._denominator) < (_denominator * other._numerator);
}

bool Fraction::operator<=(const Fraction& other) const
{
	return (_numerator * other._denominator) <= (_denominator * other._numerator);
}

bool Fraction::operator==(const Fraction& other) const
{
	return (_numerator == other._numerator) && (_denominator == other._denominator);
}

bool Fraction::operator!=(const Fraction& other) const
{
	return !((*this) == other);
}

Fraction Fraction::operator*(const Fraction& other) const
{
	int num = _numerator * other._numerator;
	int den = _denominator * other._denominator;
	return Fraction(num, den);
}

Fraction Fraction::operator/(const Fraction& other) const
{
	int num = _numerator * other._denominator;
	int den = _denominator * other._numerator;
	return Fraction(num, den);
}

Fraction Fraction::operator+(const Fraction& other) const
{
	int num = (_numerator * other._denominator) + (_denominator * other._numerator);
	int den = _denominator * other._denominator;
	return Fraction(num, den);
}

Fraction Fraction::operator-(const Fraction& other) const
{
	int num = (_numerator * other._denominator) - (_denominator * other._numerator);
	int den = _denominator * other._denominator;
	return Fraction(num, den);
}

Fraction& Fraction::operator++()
{
	_numerator += _denominator;
	return *this;
}

Fraction& Fraction::operator--()
{
	_numerator -= _denominator;
	return *this;
}