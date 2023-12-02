#pragma once

class UAZ : public Manual
{
    bool Medical;

public:
    UAZ() = default;
    UAZ(bool Medical, bool ClutchPedal, string FuelEfficiency,
        string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
        : Manual(ClutchPedal, FuelEfficiency, engineLitre, plate, doors, engineNo, fuel)
    {
        this->setMedical(Medical);
    }
    void printCarInfo() const;
    inline bool getMedical() const { return this->Medical; }
    void setMedical(bool Medical);
    ~UAZ() = default;
};

void UAZ::printCarInfo() const
{
    cout << "Engine Litre: " << this->getEngineLitre() << endl;
    cout << "Plate: " << this->getPlate() << endl;
    cout << "Doors: " << this->getDoors() << endl;
    cout << "Engine No: " << this->getEngineNo() << endl;
    cout << "Fuel: " << this->getFuel() << endl;
    cout << "Clutch Pedal: " << this->getClutchPedal() << endl;
    cout << "Fuel Efficiency: " << this->getFuelEfficiency() << endl;
    cout << "Medical: " << this->getMedical() << endl;
}

void UAZ::setMedical(bool Medical)
{
    this->Medical = Medical;
}