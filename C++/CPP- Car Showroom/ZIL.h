#pragma once

class ZIL : public Manual
{
    unsigned short int Ton;
    bool WaterTank;
    bool Baggage;

public:
    ZIL() = default;
    ZIL(unsigned short int Ton, bool WaterTank, bool Baggage, bool ClutchPedal, string FuelEfficiency,
        string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
        : Manual(ClutchPedal, FuelEfficiency, engineLitre, plate, doors, engineNo, fuel)
    {
        this->setTon(Ton);
        this->setWaterTank(WaterTank);
        this->setBaggage(Baggage);
    }
    void printCarInfo() const;
    inline unsigned short int getTon() const { return this->Ton; }
    inline bool getWaterTank() const { return this->WaterTank; }
    inline bool getBaggage() const { return this->Baggage; }
    void setTon(unsigned short int Ton);
    void setWaterTank(bool WaterTank);
    void setBaggage(bool Baggage);
    ~ZIL() = default;
};

void ZIL::printCarInfo() const
{
    cout << "Engine Litre: " << this->getEngineLitre() << endl;
    cout << "Plate: " << this->getPlate() << endl;
    cout << "Doors: " << this->getDoors() << endl;
    cout << "Engine No: " << this->getEngineNo() << endl;
    cout << "Fuel: " << this->getFuel() << endl;
    cout << "Clutch Pedal: " << this->getClutchPedal() << endl;
    cout << "Fuel Efficiency: " << this->getFuelEfficiency() << endl;
    cout << "Ton: " << this->getTon() << endl;
    cout << "Water Tank: " << this->getWaterTank() << endl;
    cout << "Baggage: " << this->getBaggage() << endl;
}

void ZIL::setTon(unsigned short int Ton)
{
    this->Ton = Ton;
}

void ZIL::setWaterTank(bool WaterTank)
{
    this->WaterTank = WaterTank;
}

void ZIL::setBaggage(bool Baggage)
{
    this->Baggage = Baggage;
}