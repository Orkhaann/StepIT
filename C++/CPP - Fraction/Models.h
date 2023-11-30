#pragma once

class Fraction {
private:
	int _numerator;
	int _denominator;

public:
	Fraction();
	explicit Fraction(int num, int den);
	Fraction& operator=(const Fraction& other);

	bool operator>(const Fraction& other) const;
	bool operator>=(const Fraction& other) const;
	bool operator<(const Fraction& other) const;
	bool operator<=(const Fraction& other) const;
	bool operator==(const Fraction& other) const;
	bool operator!=(const Fraction& other) const;
	Fraction operator*(const Fraction& other) const;
	Fraction operator/(const Fraction& other) const;
	Fraction operator+(const Fraction& other) const;
	Fraction operator-(const Fraction& other) const;
	Fraction& operator++();
	Fraction& operator--();

	friend istream& operator>>(istream& is, Fraction& frac)
	{
		cout << "Enter Num: ";
		is >> frac._numerator;
		cout << "Enter Den: ";
		is >> frac._denominator;

		return is;
	}

	friend ostream& operator<<(ostream& os, const Fraction& frac)
	{
		os << "Num: " << frac._numerator << endl;
		os << "Den: " << frac._denominator << endl;

		return os;
	}

	int getNum() const;
	int getDen() const;
	void setNum(const int num);
	void setDen(const int den);
	void Simplify();

	~Fraction() = default;
};