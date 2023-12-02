#pragma once

class VAZ : public Manual
{
    bool EconomicFuelConsumption;
    bool Peredok;

public:
    VAZ() = default;
    VAZ(bool EconomicFuelConsumption, bool Peredok, bool ClutchPedal, string FuelEfficiency,
        string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
        : Manual(ClutchPedal, FuelEfficiency, engineLitre, plate, doors, engineNo, fuel)
    {
        this->setEconomicFuelConsumption(EconomicFuelConsumption);
        this->setPeredok(Peredok);
    }
    void printCarInfo() const;
    inline bool getEconomicFuelConsumption() const { return this->EconomicFuelConsumption; }
    inline bool getPeredok() const { return this->Peredok; }
    void setEconomicFuelConsumption(bool EconomicFuelConsumption);
    void setPeredok(bool Peredok);
    ~VAZ() = default;
};

void VAZ::printCarInfo() const
{
    cout << "Engine Litre: " << this->getEngineLitre() << endl;
    cout << "Plate: " << this->getPlate() << endl;
    cout << "Doors: " << this->getDoors() << endl;
    cout << "Engine No: " << this->getEngineNo() << endl;
    cout << "Fuel: " << this->getFuel() << endl;
    cout << "Clutch Pedal: " << this->getClutchPedal() << endl;
    cout << "Fuel Efficiency: " << this->getFuelEfficiency() << endl;
    cout << "Economic Fuel Consumption: " << this->getEconomicFuelConsumption() << endl;
    cout << "Peredok: " << this->getPeredok() << endl;
}

void VAZ::setEconomicFuelConsumption(bool EconomicFuelConsumption)
{
    this->EconomicFuelConsumption = EconomicFuelConsumption;
}

void VAZ::setPeredok(bool Peredok)
{
    this->Peredok = Peredok;
}