#pragma once

class Fraction
{
private:
    int _numerator;
    int _denominator;
public:
    Fraction();
    Fraction(int num, int don);

    int GetNum();
    int GetDon();
    void SetNum(int num);
    void SetDon(int don);

    Fraction Multiply(const Fraction& other);
    Fraction Add(const Fraction& other);
    Fraction Minus(const Fraction& other);
    Fraction Divide(const Fraction& other);
    void Simplify();
};
