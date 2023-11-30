#include <iostream>
#include <cassert>
using namespace std;
#include "Models.h";
#include "Constructer.h";
#include "Encapculation.h";
#include "Funcs.h";

void main()
{
	Fraction f1(4, 7);
	Fraction f2(4, 7);
	Fraction result = f1.Multiply(f2);

	cout << result.GetNum() << "/" << result.GetDon() << endl;
}