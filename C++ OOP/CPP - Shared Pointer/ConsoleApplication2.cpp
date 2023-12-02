#include <iostream>
#include <vector>
using namespace std;
#include "Models.h"

void main()
{

    shared_ptrr<int> ptr1(new int(42));
    shared_ptrr<int> ptr2 = ptr1;

    cout << ptr1 << endl;
    cout << ptr2 << endl;

    ptr1.reset();

}