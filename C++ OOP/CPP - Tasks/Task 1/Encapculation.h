#pragma once

int Fraction::GetNum() {
	return this->_numerator;
}

int Fraction::GetDon() {
	return this->_denominator;
}

void Fraction::SetNum(int numerator)
{
	if (numerator > 0)
	{
		this->_numerator = numerator;
		return;
	}
	assert(!"Wrong numerator!");
}

void Fraction::SetDon(int denominator)
{
	if (denominator > 0)
	{
		this->_denominator = denominator;
		return;
	}
	assert(!"Wrong denominator!");
}