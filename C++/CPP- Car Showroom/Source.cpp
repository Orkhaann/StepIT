#include <iostream>
#include <cassert>
using namespace std;
#include "Car.h"
#include "Vector.h"
#include "Automatic.h"
#include "Manual.h"
#include "Bentley.h"
#include "BMW.h"
#include "Hyundai.h"
#include "Khazar.h"
#include "Lexus.h"
#include "Maserati.h"
#include "MercedesBenz.h"
#include "Porsche.h"
#include "UAZ.h"
#include "ZIL.h"
#include "VAZ.h"


void main()
{
	Vector<Car>* Cars;
	Cars->push_back(BMW(true, true, true, true, true, true, true, true, "3", "ABC1234", 4, "123456789", "Gasoline"));
	Cars->push_back(Bentley(true, true, true, true, true, true, true, true, true, "3", "ABC1234", 4, "123456789", "Gasoline"));
	Cars->push_back(ZIL(10, true, false, true, "2", "2", "ABC1234", 2, "123456789", "Diesel"));
	Cars->push_back(VAZ(true, true, true, "2", "2", "XYZ5678", 4, "987654321", "Gasoline"));

	//BMW myBMW(true, true, true, true, true, true, true, true, "3", "ABC1234", 4, "123456789", "Gasoline");
	//myBMW.printCarInfo();
	//cout << endl;
	//Bentley myBentley(true,true, true, true, true, true, true, true, true, "3", "ABC1234", 4, "123456789", "Gasoline");
	//myBentley.printCarInfo();
	//cout << endl;
	//ZIL myZIL(10, true, false, true, "2", "2", "ABC1234", 2, "123456789", "Diesel");
	//myZIL.printCarInfo();
	//cout << endl;
	//VAZ myVAZ(true, true, true, "2", "2", "XYZ5678", 4, "987654321", "Gasoline");
	//myVAZ.printCarInfo();

}