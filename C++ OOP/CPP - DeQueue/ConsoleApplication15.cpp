#include <iostream>
#include <cassert>
using namespace std;

#include "DeQueue.h"

void main()
{
	DeQueue<int> a;
	
	a.insertfront(8);
	a.insertfront(5);
	a.insertrear(7);
	a.insertrear(2);

	cout << a;
}