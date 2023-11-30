#include <iostream>
#include <cassert>
using namespace std;
#include "Double.h"
#include "Single.h"

void main()
{

	DoubleLinkedList<string> l;
	DoubleLinkedList<int> l2;
	l2.pushBack(18);
	l2.pushBack(1);
	l2.pushBack(19);
	l2.pushBack(24);
	l2.displayBack();

	l.pushFront("Cavid");
	l.pushFront("Ibrahim");
	l.pushFront("Penahli");
	l.pushBack("Reshad");
	l.pushFront("Orxan");


	l.displayFront();
	l.displayBack();

}