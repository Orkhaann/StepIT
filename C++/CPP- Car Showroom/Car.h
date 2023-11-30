#pragma once

class Car
{
private:
    string engineLitre;
    string plate;
    unsigned short int doors;
    string engineNo;
    string fuel;

public:
    Car() = default;
    Car(string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
    {
        this->setEngineLitre(engineLitre);
        this->setPlate(plate);
        this->setDoors(doors);
        this->setEngineNo(engineNo);
        this->setFuel(fuel);
    }
    void printCarInfo(const Car& car);
    inline string getEngineLitre() const { return this->engineLitre; }
    inline string getPlate() const { return this->plate; }
    inline unsigned short int getDoors() const { return this->doors; }
    inline string getEngineNo() const { return this->engineNo; }
    inline string getFuel() const { return this->fuel; }
    void setEngineLitre(string engineLitre);
    void setPlate(string plate);
    void setDoors(unsigned short int doors);
    void setEngineNo(string engineNo);
    void setFuel(string fuel);
    ~Car() = default;
};

void Car::printCarInfo(const Car& car)
{
    cout << "Engine Litre: " << car.getEngineLitre() << endl;
    cout << "Plate: " << car.getPlate() << endl;
    cout << "Doors: " << car.getDoors() << endl;
    cout << "Engine No: " << car.getEngineNo() << endl;
    cout << "Fuel: " << car.getFuel() << endl;
}

void Car::setEngineLitre(string engineLitre)
{
    if (engineLitre.length() == 1)
        this->engineLitre = engineLitre;
    else
        assert(!"Engine Litre Wrong!");
}

void Car::setPlate(string plate)
{
    if (plate.length() == 7)
        this->plate = plate;
    else
        assert(!"Plate Wrong!");
}

void Car::setDoors(unsigned short int doors)
{
    if (doors >=2 && doors <= 4)
        this->doors = doors;
    else
        assert(!"Doors Count Wrong!");
}

void Car::setEngineNo(string engineNo)
{
    if (engineNo.length() == 9)
        this->engineNo = engineNo;
    else
        assert(!"Engine No Wrong!");
}

void Car::setFuel(string fuel)
{
    if (fuel.length() <= 8)
        this->fuel = fuel;
    else
        assert(!"Fuel Wrong!");
}