#pragma once

class Porsche : public Automatic
{
    bool PDK;
    bool PASM;
    bool LaunchControl;
    bool SportyHandling;
    bool Mansory;
public:
    Porsche() = default;
    Porsche(bool PDK, bool PASM, bool LaunchControl, bool SportyHandling, bool Mansory, bool DualClutchTransmission, bool AutomaticParkingSystem, bool AutomaticLightSystem, bool AutomaticBrakingSystem, bool CruiseControl,
        string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
        : Automatic(DualClutchTransmission, AutomaticParkingSystem, AutomaticLightSystem,
            AutomaticBrakingSystem, CruiseControl, engineLitre, plate, doors, engineNo, fuel)
    {
        this->setPDK(PDK);
        this->setPASM(PASM);
        this->setLaunchControl(LaunchControl);
        this->setSportyHandling(SportyHandling);
        this->setMansory(Mansory);
    }
    void printCarInfo() const;
    inline bool getPDK() const { return this->PDK; }
    inline bool getPASM() const { return this->PASM; }
    inline bool getLaunchControl() const { return this->LaunchControl; }
    inline bool getSportyHandling() const { return this->SportyHandling; }
    inline bool getMansory() const { return this->Mansory; }
    void setPDK(bool PDK);
    void setPASM(bool PASM);
    void setLaunchControl(bool LaunchControl);
    void setSportyHandling(bool SportyHandling);
    void setMansory(bool Mansory);
    ~Porsche() = default;
};

void Porsche::printCarInfo() const
{
    cout << "Engine Litre: " << this->getEngineLitre() << endl;
    cout << "Plate: " << this->getPlate() << endl;
    cout << "Doors: " << this->getDoors() << endl;
    cout << "Engine No: " << this->getEngineNo() << endl;
    cout << "Fuel: " << this->getFuel() << endl;
    cout << "PDK: " << this->getPDK() << endl;
    cout << "PASM: " << this->getPASM() << endl;
    cout << "Launch Control: " << this->getLaunchControl() << endl;
    cout << "Sporty Handling: " << this->getSportyHandling() << endl;
    cout << "Mansory: " << this->getMansory() << endl;
}

void Porsche::setPDK(bool PDK)
{
    this->PDK = PDK;
}

void Porsche::setPASM(bool PASM)
{
    this->PASM = PASM;
}

void Porsche::setLaunchControl(bool LaunchControl)
{
    this->LaunchControl = LaunchControl;
}

void Porsche::setSportyHandling(bool SportyHandling)
{
    this->SportyHandling = SportyHandling;
}

void Porsche::setMansory(bool Mansory)
{
    this->Mansory = Mansory;
}