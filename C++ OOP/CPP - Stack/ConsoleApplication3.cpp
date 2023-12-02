#include <iostream>
#include <cassert>
using namespace std;
#include "Models.h"
#include "Stack.h"

void main()
{
    
    Stack<Car>cars;
    Engine carEngine("1234522", "BMW Company", "200");
    Car car(true, "BMW", "Improtex Motors", carEngine);
    cars.push(car);

    Stack<Ship>ships;
    Engine shipEngine("98765211", "White Star Line Company", "5000");
    Ship ship(true, "Titanic", "White Star Line", shipEngine);
    ships.push(ship);

    Stack<Airplane>airplanes;
    Engine airplaneEngine("2468021", "Usa Army", "8000");
    Airplane airplane(4, "F16", "USA Army", airplaneEngine);
    airplanes.push(airplane);


    while (!cars.isEmpty())
    {
        Car car = cars.peek();
        cars.pop();
        cout << "Model: " << car.getModel() << endl;
        cout << "Vendor: " << car.getVendor() << endl;
        cout << "Has Spoiler: " << (car.getHasSpoiler() ? "Yes" : "No") << endl;
        cout << "Engine No: " << car.getEngine().getEngineNo() << endl;
        cout << "Company: " << car.getEngine().getCompany() << endl;
        cout << "Horsepower: " << car.getEngine().getHorsepower() << endl;
        cout << endl;
    }

    while (!ships.isEmpty())
    {
        Ship ship = ships.peek();
        ships.pop();
        cout << "Model: " << ship.getModel() << endl;
        cout << "Vendor: " << ship.getVendor() << endl;
        cout << "Has Sail: " << (ship.getHasSail() ? "Yes" : "No") << endl;
        cout << "Engine No: " << ship.getEngine().getEngineNo() << endl;
        cout << "Company: " << ship.getEngine().getCompany() << endl;
        cout << "Horsepower: " << ship.getEngine().getHorsepower() << endl;
        cout << endl;
    }

    while (!airplanes.isEmpty())
    {
        Airplane airplane = airplanes.peek();
        airplanes.pop();
        cout << "Model: " << airplane.getModel() << endl;
        cout << "Vendor: " << airplane.getVendor() << endl;
        cout << "Engine Count: " << airplane.getEngineCount() << endl;
        cout << "Engine No: " << airplane.getEngine().getEngineNo() << endl;
        cout << "Company: " << airplane.getEngine().getCompany() << endl;
        cout << "Horsepower: " << airplane.getEngine().getHorsepower() << endl;
        cout << endl;
    }

}
