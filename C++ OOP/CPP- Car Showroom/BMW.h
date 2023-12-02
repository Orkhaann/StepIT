#pragma once

class BMW : public Automatic
{
    bool MPerformance;
    bool XDrive;
    bool Long;

public:
    BMW() = default;
    BMW(bool MPerformance, bool XDrive, bool Long, bool DualClutchTransmission, bool AutomaticParkingSystem, bool AutomaticLightSystem, bool AutomaticBrakingSystem, bool CruiseControl,
        string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
        : Automatic(DualClutchTransmission, AutomaticParkingSystem, AutomaticLightSystem, AutomaticBrakingSystem, CruiseControl, engineLitre, plate, doors, engineNo, fuel)
    {
        this->setMPerformance(MPerformance);
        this->setXDrive(XDrive);
        this->setLong(Long);
    }
    void printCarInfo() const;
    inline bool getMPerformance() const { return this->MPerformance; }
    inline bool getXDrive() const { return this->XDrive; }
    inline bool getLong() const { return this->Long; }
    void setMPerformance(bool MPerformance);
    void setXDrive(bool XDrive);
    void setLong(bool Long);
    ~BMW() = default;
};

void BMW::setMPerformance(bool MPerformance)
{
    this->MPerformance = MPerformance;
}

void BMW::setXDrive(bool XDrive)
{
    this->XDrive = XDrive;
}

void BMW::setLong(bool Long)
{
    this->Long = Long;
}

void BMW::printCarInfo() const
{
    cout << "Engine Litre: " << this->getEngineLitre() << endl;
    cout << "Plate: " << this->getPlate() << endl;
    cout << "Doors: " << this->getDoors() << endl;
    cout << "Engine No: " << this->getEngineNo() << endl;
    cout << "Fuel: " << this->getFuel() << endl;
    cout << "MPerformance: " << this->getMPerformance() << endl;
    cout << "XDrive: " << this->getXDrive() << endl;
    cout << "Long: " << this->getLong() << endl;
}