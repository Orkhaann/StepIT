#pragma once

class MercedesBenz : public Automatic
{
    bool Presafe;
    bool Amg;
    string AmgEngineEngineer;
    bool Mbux;
    bool Brabus;
public:
    MercedesBenz() = default;
    MercedesBenz(bool Presafe, bool Amg, string AmgEngineEngineer, bool Mbux, bool Brabus, bool DualClutchTransmission, bool AutomaticParkingSystem, bool AutomaticLightSystem, bool AutomaticBrakingSystem, bool CruiseControl,
        string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
        : Automatic(DualClutchTransmission, AutomaticParkingSystem, AutomaticLightSystem,
            AutomaticBrakingSystem, CruiseControl, engineLitre, plate, doors, engineNo, fuel)
    {
        this->setPresafe(Presafe);
        this->setAmg(Amg);
        this->setAmgEngineEngineer(AmgEngineEngineer);
        this->setMbux(Mbux);
        this->setBrabus(Brabus);
    }
    void printCarInfo() const;
    inline bool getPresafe() const { return this->Presafe; }
    inline bool getAmg() const { return this->Amg; }
    inline string getAmgEngineEngineer() const { return this->AmgEngineEngineer; }
    inline bool getMbux() const { return this->Mbux; }
    inline bool getBrabus() const { return this->Brabus; }
    void setPresafe(bool Presafe);
    void setAmg(bool Amg);
    void setAmgEngineEngineer(string AmgEngineEngineer);
    void setMbux(bool Mbux);
    void setBrabus(bool Brabus);
    ~MercedesBenz() = default;
};

void MercedesBenz::printCarInfo() const
{
    cout << "Engine Litre: " << this->getEngineLitre() << endl;
    cout << "Plate: " << this->getPlate() << endl;
    cout << "Doors: " << this->getDoors() << endl;
    cout << "Engine No: " << this->getEngineNo() << endl;
    cout << "Fuel: " << this->getFuel() << endl;
    cout << "Presafe: " << this->getPresafe() << endl;
    cout << "AMG: " << this->getAmg() << endl;
    cout << "AMG Engine Engineer: " << this->getAmgEngineEngineer() << endl;
    cout << "MBUX: " << this->getMbux() << endl;
    cout << "Brabus: " << this->getBrabus() << endl;
}

void MercedesBenz::setPresafe(bool Presafe)
{
    this->Presafe = Presafe;
}

void MercedesBenz::setAmg(bool Amg)
{
    this->Amg = Amg;
}

void MercedesBenz::setAmgEngineEngineer(string AmgEngineEngineer)
{
    this->AmgEngineEngineer = AmgEngineEngineer;
}

void MercedesBenz::setMbux(bool Mbux)
{
    this->Mbux = Mbux;
}

void MercedesBenz::setBrabus(bool Brabus)
{
    this->Brabus = Brabus;
}