#include <iostream>
using namespace std;
#include <cassert>
#include "Models.h"
#include "Encapsulation.h"
#include "Constructer.h"
#include "Operators.h"
#include "Funcs.h"


int main()
{
    Fraction f1, f2;
    cin >> f1;
    cin >> f2;
    Fraction result = f1 + f2;
    cout << result << endl;
}