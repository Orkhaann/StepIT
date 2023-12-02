#pragma once

class Hyundai : public Automatic
{
    bool BlueLink;
    unsigned short int WarrantyProgram;
    bool HTRAC;
    bool AssuranceProgram;
    bool SmartSense;
public:
    Hyundai() = default;
    Hyundai(bool BlueLink, unsigned short int WarrantyProgram, bool HTRAC, bool AssuranceProgram, bool SmartSense, bool DualClutchTransmission, bool AutomaticParkingSystem, bool AutomaticLightSystem, bool AutomaticBrakingSystem, bool CruiseControl,
        string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
        : Automatic(DualClutchTransmission, AutomaticParkingSystem, AutomaticLightSystem,
            AutomaticBrakingSystem, CruiseControl, engineLitre, plate, doors, engineNo, fuel)
    {
        this->setBlueLink(BlueLink);
        this->setWarrantyProgram(WarrantyProgram);
        this->setHTRAC(HTRAC);
        this->setAssuranceProgram(AssuranceProgram);
        this->setSmartSense(SmartSense);
    }
    void printCarInfo() const;
    inline bool getBlueLink() const { return this->BlueLink; }
    inline unsigned short int getWarrantyProgram() const { return this->WarrantyProgram; }
    inline bool getHTRAC() const { return this->HTRAC; }
    inline bool getAssuranceProgram() const { return this->AssuranceProgram; }
    inline bool getSmartSense() const { return this->SmartSense; }
    void setBlueLink(bool BlueLink);
    void setWarrantyProgram(unsigned short int WarrantyProgram);
    void setHTRAC(bool HTRAC);
    void setAssuranceProgram(bool AssuranceProgram);
    void setSmartSense(bool SmartSense);
    ~Hyundai() = default;
};

void Hyundai::printCarInfo() const
{
    cout << "Engine Litre: " << this->getEngineLitre() << endl;
    cout << "Plate: " << this->getPlate() << endl;
    cout << "Doors: " << this->getDoors() << endl;
    cout << "Engine No: " << this->getEngineNo() << endl;
    cout << "Fuel: " << this->getFuel() << endl;
    cout << "Blue Link: " << this->getBlueLink() << endl;
    cout << "Warranty Program: " << this->getWarrantyProgram() << endl;
    cout << "HTRAC: " << this->getHTRAC() << endl;
    cout << "Assurance Program: " << this->getAssuranceProgram() << endl;
    cout << "Smart Sense: " << this->getSmartSense() << endl;
}

void Hyundai::setBlueLink(bool BlueLink)
{
    this->BlueLink = BlueLink;
}

void Hyundai::setWarrantyProgram(unsigned short int WarrantyProgram)
{
    this->WarrantyProgram = WarrantyProgram;
}

void Hyundai::setHTRAC(bool HTRAC)
{
    this->HTRAC = HTRAC;
}

void Hyundai::setAssuranceProgram(bool AssuranceProgram)
{
    this->AssuranceProgram = AssuranceProgram;
}

void Hyundai::setSmartSense(bool SmartSense)
{
    this->SmartSense = SmartSense;
}