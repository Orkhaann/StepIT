#pragma once

void Fraction::Simplify()
{
	int ekob = 1;

	int a = _numerator;
	int b = _denominator;

	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}

	ekob = a;

	_numerator /= ekob;
	_denominator /= ekob;
}