#pragma once

class Manual : public Car
{
    bool ClutchPedal;
    string FuelEfficiency;

public:
    Manual() = default;
    Manual(bool ClutchPedal, string FuelEfficiency, string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
        : Car(engineLitre, plate, doors, engineNo, fuel)
    {
        this->setClutchPedal(ClutchPedal);
        this->setFuelEfficiency(FuelEfficiency);
    }
    inline bool getClutchPedal() const { return this->ClutchPedal; }
    inline string getFuelEfficiency() const { return this->FuelEfficiency; }
    void setClutchPedal(bool ClutchPedal);
    void setFuelEfficiency(string FuelEfficiency);
    ~Manual() = default;
};

void Manual::setClutchPedal(bool ClutchPedal)
{
    this->ClutchPedal = ClutchPedal;
}

void Manual::setFuelEfficiency(string FuelEfficiency)
{
    this->FuelEfficiency = FuelEfficiency;
}