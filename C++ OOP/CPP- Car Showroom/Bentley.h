#pragma once

class Bentley : public Automatic
{
    bool BentleyMulliner;
    bool BentleyDynamicRide;
    bool BentleyRotatingDisplay;
    bool BentleyMullinerDrivingSpecification;
public:
    Bentley() = default;
    Bentley(bool BentleyMulliner, bool BentleyDynamicRide, bool BentleyRotatingDisplay, bool BentleyMullinerDrivingSpecification, bool DualClutchTransmission, bool AutomaticParkingSystem, bool AutomaticLightSystem, bool AutomaticBrakingSystem, bool CruiseControl,
        string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
        : Automatic(DualClutchTransmission, AutomaticParkingSystem, AutomaticLightSystem,
            AutomaticBrakingSystem, CruiseControl, engineLitre, plate, doors, engineNo, fuel)
    {
        this->setBentleyMulliner(BentleyMulliner);
        this->setBentleyDynamicRide(BentleyDynamicRide);
        this->setBentleyRotatingDisplay(BentleyRotatingDisplay);
        this->setBentleyMullinerDrivingSpecification(BentleyMullinerDrivingSpecification);
    }
    void printCarInfo() const;
    inline bool getBentleyMulliner() const { return this->BentleyMulliner; }
    inline bool getBentleyDynamicRide() const { return this->BentleyDynamicRide; }
    inline bool getBentleyRotatingDisplay() const { return this->BentleyRotatingDisplay; }
    inline bool getBentleyMullinerDrivingSpecification() const { return this->BentleyMullinerDrivingSpecification; }
    void setBentleyMulliner(bool BentleyMulliner);
    void setBentleyDynamicRide(bool BentleyDynamicRide);
    void setBentleyRotatingDisplay(bool BentleyRotatingDisplay);
    void setBentleyMullinerDrivingSpecification(bool BentleyMullinerDrivingSpecification);
    ~Bentley() = default;
};

void Bentley::printCarInfo() const
{
    cout << "Engine Litre: " << this->getEngineLitre() << endl;
    cout << "Plate: " << this->getPlate() << endl;
    cout << "Doors: " << this->getDoors() << endl;
    cout << "Engine No: " << this->getEngineNo() << endl;
    cout << "Fuel: " << this->getFuel() << endl;
    cout << "Bentley Mulliner: " << this->getBentleyMulliner() << endl;
    cout << "Bentley Dynamic Ride: " << this->getBentleyDynamicRide() << endl;
    cout << "Bentley Rotating Display: " << this->getBentleyRotatingDisplay() << endl;
    cout << "Bentley Mulliner Driving Specification: " << this->getBentleyMullinerDrivingSpecification() << endl;
}

void Bentley::setBentleyMulliner(bool BentleyMulliner)
{
    this->BentleyMulliner = BentleyMulliner;
}

void Bentley::setBentleyDynamicRide(bool BentleyDynamicRide)
{
    this->BentleyDynamicRide = BentleyDynamicRide;
}

void Bentley::setBentleyRotatingDisplay(bool BentleyRotatingDisplay)
{
    this->BentleyRotatingDisplay = BentleyRotatingDisplay;
}

void Bentley::setBentleyMullinerDrivingSpecification(bool BentleyMullinerDrivingSpecification)
{
    this->BentleyMullinerDrivingSpecification = BentleyMullinerDrivingSpecification;
}