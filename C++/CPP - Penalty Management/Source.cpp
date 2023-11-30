#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "Penalty.h"
#include "Car.h"

void main()
{

    Car car1("10OR007");
    car1.addPenalty(Penalty(2, "Qirmizi ishiq", "5/27/2023 02:45", 80.00));

    Car car2("10EX007");
    car2.addPenalty(Penalty(3, "Qosha xett", "6/27/2023 18:15", 80.00));

    Car car3("10XZ007");
    car3.addPenalty(Penalty(6, "Qosha xett", "5/30/2023 09:45", 80.00));
    car3.addPenalty(Penalty(7, "Dayanma durma", "3/27/2023 16:20", 20.00));

    car1.printCar();
    cout << endl;
    car2.printCar();
    cout << endl;
    car3.printCar();

}