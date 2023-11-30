#pragma once

class Khazar : public Manual
{
    string DrivingExperience;

public:
    Khazar() = default;
    Khazar(string DrivingExperience, bool ClutchPedal, string FuelEfficiency,
        string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
        : Manual(ClutchPedal, FuelEfficiency, engineLitre, plate, doors, engineNo, fuel)
    {
        this->setDrivingExperience(DrivingExperience);
    }
    void printCarInfo() const;
    inline string getDrivingExperience() const { return this->DrivingExperience; }
    void setDrivingExperience(string DrivingExperience);
    ~Khazar() = default;
};

void Khazar::printCarInfo() const
{
    cout << "Engine Litre: " << this->getEngineLitre() << endl;
    cout << "Plate: " << this->getPlate() << endl;
    cout << "Doors: " << this->getDoors() << endl;
    cout << "Engine No: " << this->getEngineNo() << endl;
    cout << "Fuel: " << this->getFuel() << endl;
    cout << "Driving Experience: " << this->getDrivingExperience() << endl;
}

void Khazar::setDrivingExperience(string DrivingExperience)
{
    this->DrivingExperience = DrivingExperience;
}