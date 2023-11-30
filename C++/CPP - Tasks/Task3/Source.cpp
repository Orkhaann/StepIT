#include <iostream>
#include <cassert>
using namespace std;
#include "Models.h";
#include "Constructer.h";
#include "Encapculation.h";
#include "Funcs.h";

void main()
{
	Counter c(0, 100, 0);
	c.Increment();
	cout << c.GetCurrentValue() << endl; // 1
	c.Increment();
	cout << c.GetCurrentValue() << endl; // 2
	c.Decrement();
	cout << c.GetCurrentValue() << endl; // 1
}