#include <iostream>
#include <cassert>
using namespace std;
#include "Vector.h"
#include "Vector Functions.h"
#include "Vector Operators.h"
#include "Vector Construcers.h"
#include "Date.h"
#include "Date Constructers.h"
#include "Date Operators.h"
#include "Date Encapsulation.h"



void main()
{
	
    Vector Vec1;
    Vec1.push_back(10);
    Vec1.push_back(20);
    Vec1.push_front(50);
    Vec1.push_front(100);
    Vec1.push_back(30);

    Vec1.print();

    Date d1;
    Date d1(23, 23, 23);

    cin >> d1;
    d1--;
    d1++;
    d1++;
    cout << d1;
}