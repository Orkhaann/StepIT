#include <iostream>
#include <cassert>
using namespace std;
#include "Vector.h"


void main()
{
	
    Vector<int> Vec1;
    Vec1.push_back(10);
    Vec1.push_back(20);
    Vec1.push_front(50);
    Vec1.push_front(100);
    Vec1.push_back(30);

    Vec1.print();
}