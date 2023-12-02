#pragma once

Fraction::Fraction()
{
	_numerator = 1;
	_denominator = 1;
}

Fraction::Fraction(int num, int don)
{
	_numerator = num;
	_denominator = don;
}