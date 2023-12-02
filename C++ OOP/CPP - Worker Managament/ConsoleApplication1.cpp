#include <iostream>
#include <cassert>
using namespace std;
#include "Worker.h"
#include "Queue.h"
#include "Print.h"

void main()
{
    
	Printer p1;
	Worker w1("Resad", 3);
	Worker w2("Orxan", 4);
	Worker w3("Alizade", 5);
	Worker w4("Cavid", 1);
	Worker w5("Penahli", 2);

	p1.req(w1);
	p1.req(w2);
	p1.req(w3);
	p1.req(w4);
	p1.req(w5);

	p1.start();
}