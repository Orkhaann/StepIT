#pragma once

Fraction Fraction::Multiply(const Fraction& other)
{
	int num = _numerator * other._numerator;
	int den = _denominator * other._denominator;
	return Fraction(num, den);
}

Fraction Fraction::Add(const Fraction& other)
{
	int num = _numerator * other._denominator + _denominator * other._numerator;
	int den = _denominator * other._denominator;
	return Fraction(num, den);
}

Fraction Fraction::Minus(const Fraction& other)
{
	int num = _numerator * other._denominator - _denominator * other._numerator;
	int den = _denominator * other._denominator;
	return Fraction(num, den);
}

Fraction Fraction::Divide(const Fraction& other)
{
	int num = _numerator * other._denominator;
	int den = _denominator * other._numerator;
	return Fraction(num, den);
}

void Fraction::Simplify()
{
	int Frac = (_numerator < _denominator) ? _numerator : _denominator;
	int j = 1;
	for (int i = 2; i <= Frac; i++) {
		if ((_numerator % i == 0) && (_denominator % i == 0))
			j = i;
	}
	_numerator /= j;
	_denominator /= j;
}