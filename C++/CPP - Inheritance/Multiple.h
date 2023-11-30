#pragma once

class Company {
private:
    string companyName;
public:
    Company(const string name) : companyName(name) {}

    void showCompany();

    inline string getCompanyName(){ return this->companyName; };
    void setCompanyName(string companyname);
};

class SUV : public Company {
private:
    string Model;
public:
    SUV(const string name) : Company(name) {}

    inline string getModel() { return this->Model; };
    void setModel(string model);

    void showSUV();
};

class AnotherSUV : public SUV {
private:
    string AnotherExampleModels;
public:
    AnotherSUV(const string name) : SUV(name) {}

    inline string getAnotherExampleModels() { return this->AnotherExampleModels; };
    void setAnotherExampleModels(string AnotherExampleModels);

    void showAnotherSUV();
};

void Company::setCompanyName(string companyname)
{
    if (companyname.length() > 3)
        this->companyName = companyname;
    else
        assert(!"Company Name Too Short!");
}

void SUV::setModel(string model)
{
    if (model.length() > 5)
        this->Model = model;
    else
        assert(!"Model Name Too Short!");
}

void AnotherSUV::setAnotherExampleModels(string AnotherExampleModels)
{
    if (AnotherExampleModels.length() > 5)
        this->AnotherExampleModels = AnotherExampleModels;
    else
        assert(!"AnotherExampleModels Name Too Short!");
}

void Company::showCompany() {
    cout << "Company Name: " << getCompanyName() << endl;
}

void SUV::showSUV() {
    cout << "SUV Model: " << getModel() << endl;
}

void AnotherSUV::showAnotherSUV() {
    cout << "Another SUV Model: " << getAnotherExampleModels() << endl;
}