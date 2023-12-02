#pragma once

class Animal {
private:
    string gender;
public:
    Animal() = default;
    Animal(const string& gender) : gender(gender) {}

    void Voice();

    inline string getGender() { return this->gender; }
    void setGender(string gender);
};

class Cow : public Animal {
private:
    unsigned short int kg;
public:
    Cow(string name, string gender, unsigned short int kg) : Animal(gender) 
    {
        setKG(kg);
    }
    void Voice();

    inline unsigned short int getGender() { return this->kg; }
    void setKG(unsigned short int kg);
};

void Animal::setGender(string gender) {
    if (gender.length() > 3)
        this->gender = gender;
    else
        assert(!"gender Name Too Short!");
}

void Cow::setKG(unsigned short int kg) {
    if (kg > 3)
        this->kg = kg;
    else
        assert(!"KG Too Short!");
}

void Animal::Voice() {
    cout << "Animal Sound" << endl;
}

void Cow::Voice() {
    cout << "Moow! Moow!" << endl;
}