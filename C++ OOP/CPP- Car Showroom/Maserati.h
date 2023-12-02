#pragma once

class Maserati : public Automatic
{
    bool SkyhookSuspensions;
    bool ActiveSoundExhaust;
    bool GranTurismo;
    bool GranCabrio;
public:
    Maserati() = default;
    Maserati(bool SkyhookSuspensions, bool ActiveSoundExhaust, bool GranTurismo, bool GranCabrio, bool DualClutchTransmission, bool AutomaticParkingSystem, bool AutomaticLightSystem, bool AutomaticBrakingSystem, bool CruiseControl,
        string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
        : Automatic(DualClutchTransmission, AutomaticParkingSystem, AutomaticLightSystem,
            AutomaticBrakingSystem, CruiseControl, engineLitre, plate, doors, engineNo, fuel)
    {
        this->setSkyhookSuspensions(SkyhookSuspensions);
        this->setActiveSoundExhaust(ActiveSoundExhaust);
        this->setGranTurismo(GranTurismo);
        this->setGranCabrio(GranCabrio);
    }
    void printCarInfo() const;
    inline bool getSkyhookSuspensions() const { return this->SkyhookSuspensions; }
    inline bool getActiveSoundExhaust() const { return this->ActiveSoundExhaust; }
    inline bool getGranTurismo() const { return this->GranTurismo; }
    inline bool getGranCabrio() const { return this->GranCabrio; }
    void setSkyhookSuspensions(bool SkyhookSuspensions);
    void setActiveSoundExhaust(bool ActiveSoundExhaust);
    void setGranTurismo(bool GranTurismo);
    void setGranCabrio(bool GranCabrio);
    ~Maserati() = default;
};

void Maserati::printCarInfo() const
{
    cout << "Engine Litre: " << this->getEngineLitre() << endl;
    cout << "Plate: " << this->getPlate() << endl;
    cout << "Doors: " << this->getDoors() << endl;
    cout << "Engine No: " << this->getEngineNo() << endl;
    cout << "Fuel: " << this->getFuel() << endl;
    cout << "Skyhook Suspensions: " << this->getSkyhookSuspensions() << endl;
    cout << "Active Sound Exhaust: " << this->getActiveSoundExhaust() << endl;
    cout << "Gran Turismo: " << this->getGranTurismo() << endl;
    cout << "Gran Cabrio: " << this->getGranCabrio() << endl;
}

void Maserati::setSkyhookSuspensions(bool SkyhookSuspensions)
{
    this->SkyhookSuspensions = SkyhookSuspensions;
}

void Maserati::setActiveSoundExhaust(bool ActiveSoundExhaust)
{
    this->ActiveSoundExhaust = ActiveSoundExhaust;
}

void Maserati::setGranTurismo(bool GranTurismo)
{
    this->GranTurismo = GranTurismo;
}

void Maserati::setGranCabrio(bool GranCabrio)
{
    this->GranCabrio = GranCabrio;
}