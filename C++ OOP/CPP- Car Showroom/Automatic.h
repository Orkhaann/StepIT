#pragma once

class Automatic : public Car
{
    bool DualClutchTransmission;
    bool AutomaticParkingSystem;
    bool AutomaticLightSystem;
    bool AutomaticBrakingSystem;
    bool CruiseControl;

public:
    Automatic() = default;
    Automatic(bool DualClutchTransmission, bool AutomaticParkingSystem, bool AutomaticLightSystem, bool AutomaticBrakingSystem, bool CruiseControl,
        string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
        : Car(engineLitre, plate, doors, engineNo, fuel)
    {
        this->setDualClutchTransmission(DualClutchTransmission);
        this->setAutomaticParkingSystem(AutomaticParkingSystem);
        this->setAutomaticLightSystem(AutomaticLightSystem);
        this->setAutomaticBrakingSystem(AutomaticBrakingSystem);
        this->setCruiseControl(CruiseControl);
    }
    inline bool getDualClutchTransmission() const { return this->DualClutchTransmission; }
    inline bool getAutomaticParkingSystem() const { return this->AutomaticParkingSystem; }
    inline bool getAutomaticLightSystem() const { return this->AutomaticLightSystem; }
    inline bool getAutomaticBrakingSystem() const { return this->AutomaticBrakingSystem; }
    inline bool getCruiseControl() const { return this->CruiseControl; }

    void setDualClutchTransmission(bool DualClutchTransmission);
    void setAutomaticParkingSystem(bool AutomaticParkingSystem);
    void setAutomaticLightSystem(bool AutomaticLightSystem);
    void setAutomaticBrakingSystem(bool AutomaticBrakingSystem);
    void setCruiseControl(bool CruiseControl);
    ~Automatic() = default;
};

void Automatic::setDualClutchTransmission(bool DualClutchTransmission)
{
    this->DualClutchTransmission = DualClutchTransmission;
}

void Automatic::setAutomaticParkingSystem(bool AutomaticParkingSystem)
{
    this->AutomaticParkingSystem = AutomaticParkingSystem;
}

void Automatic::setAutomaticLightSystem(bool AutomaticLightSystem)
{
    this->AutomaticLightSystem = AutomaticLightSystem;
}

void Automatic::setAutomaticBrakingSystem(bool AutomaticBrakingSystem)
{
    this->AutomaticBrakingSystem = AutomaticBrakingSystem;
}

void Automatic::setCruiseControl(bool CruiseControl)
{
    this->CruiseControl = CruiseControl;
}