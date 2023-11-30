#include <iostream>
#include <cassert>
using namespace std;
#include "Computer.h";
#include "CompStore.h";

void main()
{
	CompStore s1;

	Computer c1("Asus", "Black", 2016, "RYZEN 9", 16, 1000000);
	Computer c2("MSI", "White", 2019, "RYZEN 7", 16, 2000000);

	c1.print();
	c2.print();

}
