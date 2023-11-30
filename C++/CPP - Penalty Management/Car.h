#pragma once

class Car {
    string plate;
    vector<Penalty> penalties;
public:
    Car() = default;
    explicit Car(string plate) : plate(plate) {}
    explicit Car(string plate, vector<Penalty> penalties) : plate(plate), penalties(penalties) {}

    inline string getPlate() const { return this->plate; };

    void addPenalty(const Penalty& penalty) noexcept {
        penalties.push_back(penalty);
    }

    void printCar() const noexcept {
        cout << "Plate: " << getPlate() << endl;
        cout << "Penalties: " << endl;
        for (const auto& penalty : penalties)
            cout << penalty << endl;
    }

    ~Car() = default;
};