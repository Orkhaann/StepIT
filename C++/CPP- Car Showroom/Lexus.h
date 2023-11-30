#pragma once

class Lexus : public Automatic
{
    bool MarkLevinsonSoundSystem;
    bool LexusSafetySystem;
    bool LexusEnform;
    bool AirSuspension;
public:
    Lexus() = default;
    Lexus(bool MarkLevinsonSoundSystem, bool LexusSafetySystem, bool LexusEnform, bool AirSuspension, bool DualClutchTransmission, bool AutomaticParkingSystem, bool AutomaticLightSystem, bool AutomaticBrakingSystem, bool CruiseControl,
        string engineLitre, string plate, unsigned short int doors, string engineNo, string fuel)
        : Automatic(DualClutchTransmission, AutomaticParkingSystem, AutomaticLightSystem,
            AutomaticBrakingSystem, CruiseControl, engineLitre, plate, doors, engineNo, fuel)
    {
        this->setMarkLevinsonSoundSystem(MarkLevinsonSoundSystem);
        this->setLexusSafetySystem(LexusSafetySystem);
        this->setLexusEnform(LexusEnform);
        this->setAirSuspension(AirSuspension);
    }
    void printCarInfo() const;
    inline bool getMarkLevinsonSoundSystem() const { return this->MarkLevinsonSoundSystem; }
    inline bool getLexusSafetySystem() const { return this->LexusSafetySystem; }
    inline bool getLexusEnform() const { return this->LexusEnform; }
    inline bool getAirSuspension() const { return this->AirSuspension; }
    void setMarkLevinsonSoundSystem(bool MarkLevinsonSoundSystem);
    void setLexusSafetySystem(bool LexusSafetySystem);
    void setLexusEnform(bool LexusEnform);
    void setAirSuspension(bool AirSuspension);
    ~Lexus() = default;
};

void Lexus::printCarInfo() const
{
    cout << "Engine Litre: " << this->getEngineLitre() << endl;
    cout << "Plate: " << this->getPlate() << endl;
    cout << "Doors: " << this->getDoors() << endl;
    cout << "Engine No: " << this->getEngineNo() << endl;
    cout << "Fuel: " << this->getFuel() << endl;
    cout << "Mark Levinson Sound System: " << this->getMarkLevinsonSoundSystem() << endl;
    cout << "Lexus Safety System: " << this->getLexusSafetySystem() << endl;
    cout << "Lexus Enform: " << this->getLexusEnform() << endl;
    cout << "Air Suspension: " << this->getAirSuspension() << endl;
}

void Lexus::setMarkLevinsonSoundSystem(bool MarkLevinsonSoundSystem)
{
    this->MarkLevinsonSoundSystem = MarkLevinsonSoundSystem;
}

void Lexus::setLexusSafetySystem(bool LexusSafetySystem)
{
    this->LexusSafetySystem = LexusSafetySystem;
}

void Lexus::setLexusEnform(bool LexusEnform)
{
    this->LexusEnform = LexusEnform;
}

void Lexus::setAirSuspension(bool AirSuspension)
{
    this->AirSuspension = AirSuspension;
}