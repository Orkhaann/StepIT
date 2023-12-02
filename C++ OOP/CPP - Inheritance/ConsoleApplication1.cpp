#include <iostream>
#include <cassert>
using namespace std;
#include "Single.h"
#include "Multiple.h"
#include "Multilevel.h"
#include "Hierarcal.h"


void main()
{
    AnotherSUV suv("Bmw X5");

    suv.showCompany();
    suv.showSUV();
    suv.showAnotherSUV();

    UndergraduateStudent s1("Orkhan", 21, "Programing");
    
    s1.introduce();
    s1.study();
    s1.showMajor();

    Cow a1("Alex", "Male", 123);

    a1.Voice();

    Car car("MERCEDES-BENZ");
    car.showBrand();
    car.drive();

    Motorcycle motorcycle("H2R");
    motorcycle.showBrand();
    motorcycle.ride();

}