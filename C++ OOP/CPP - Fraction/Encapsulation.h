#pragma once

int Fraction::getNum() const
{
	return _numerator;
}

int Fraction::getDen() const
{
	return _denominator;
}

void Fraction::setNum(const int num)
{
	_numerator = num;
}

void Fraction::setDen(const int den)
{
	_denominator = den;
}
