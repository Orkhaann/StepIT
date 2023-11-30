#pragma once

class Engine
{
private:
    string _EngineNo;
    string _Company;
    string _Horsepower;
public:
    Engine() = default;
    Engine(const string engineNo, const string company, const string horsepower)
    {
        setEngineNo(engineNo);
        setCompany(company);
        setHorsepower(horsepower);
    }
    string getEngineNo() const { return _EngineNo; }
    string getCompany() const { return _Company; }
    string getHorsepower() const { return _Horsepower; }
    void setEngineNo(const string engineNo);
    void setCompany(const string company);
    void setHorsepower(const string horsepower);
};

class Transport
{
private:
    static int _StaticCarid;
    string _Model;
    string _Vendor;
    Engine _Engine;
public:
    Transport() = default;
    Transport(const string model, const string vendor, const Engine engine)
    {
        setModel(model);
        setVendor(vendor);
        setEngine(engine);
    }
    static int getStaticCarid() { return _StaticCarid; }
    string getModel() const { return _Model; }
    string getVendor() const { return _Vendor; }
    Engine getEngine() const { return _Engine; }
    void setModel(const string model);
    void setVendor(const string vendor);
    void setEngine(const Engine engine);
};

class Car : public Transport
{
private:
    bool hasSpoiler;
public:
    Car() = default;
    Car(bool hasSpoiler, const string model, const string vendor, const Engine engine) : Transport(model, vendor, engine)
    {
        setHasSpoiler(hasSpoiler);
    }
    bool getHasSpoiler() const { return hasSpoiler; }
    void setHasSpoiler(bool hasSpoiler);
};

class Ship : public Transport
{
private:
    bool hasSail;
public:
    Ship() = default;
    Ship(bool hasSail, const string model, const string vendor, const Engine engine) : Transport(model, vendor, engine)
    {
        setHasSail(hasSail);
    }
    bool getHasSail() const { return hasSail; }
    void setHasSail(bool hasSail);
};

class Airplane : public Transport
{
private:
    unsigned short int engineCount;
public:
    Airplane() = default;
    Airplane(unsigned short int engineCount, const string model, const string vendor, const Engine engine) : Transport(model, vendor, engine)
    {
        setEngineCount(engineCount);
    }
    unsigned short int getEngineCount() const { return engineCount; }
    void setEngineCount(unsigned short int engineCount);
};

void Engine::setEngineNo(const string engineNo)
{
    if (engineNo.length() >= 7 && engineNo.length() <= 12)
        this->_EngineNo = engineNo;
    else
        assert(!"EngineNo Lenght Error!");
}

void Engine::setCompany(const string company)
{
    if (company.length() >= 3 && company.length() <= 40)
        this->_Company = company;
    else
        assert(!"Company Lenght Error!");
}

void Engine::setHorsepower(const string horsepower)
{
    if (horsepower.length() >= 2 && horsepower.length() <= 4)
        this->_Horsepower = horsepower;
    else
        assert(!"HP Lenght Error!");
}

int Transport::_StaticCarid = 0;

void Transport::setModel(const string model)
{
    if (model.length() >= 2 && model.length() <= 30)
        this->_Model = model;
    else
        assert(!"Model Lenght Error!");
}

void Transport::setVendor(const string vendor)
{
    if (vendor.length() >= 2 && vendor.length() <= 30)
        this->_Vendor = vendor;
    else
        assert(!"Ventor Lenght Error!");
}

void Transport::setEngine(const Engine engine)
{
    _Engine = engine;
}

void Car::setHasSpoiler(bool hasSpoiler)
{
    this->hasSpoiler = hasSpoiler;
}

void Ship::setHasSail(bool hasSail)
{
    this->hasSail = hasSail;
}

void Airplane::setEngineCount(unsigned short int engineCount)
{
    if (engineCount >= 2 && engineCount <= 6)
        this->engineCount = engineCount;
    else
        assert(!"Engine Count Error!");
}