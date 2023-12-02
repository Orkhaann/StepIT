#pragma once

class Penalty {
    unsigned short int id;
    string text;
    string dateTime;
    double price;
public:
    Penalty() = default;
    explicit Penalty(unsigned short int id, string text, string dateTime, double price) : id(id), text(text), dateTime(dateTime), price(price) {}

    inline unsigned short int getId() const { return this->id; };
    inline string getText() const { return this->text; };
    inline string getDateTime() const { return this->dateTime; };
    inline double getPrice() const { return this->price; };

    friend ostream& operator<<(ostream& os, const Penalty& penalty) {
        os << "ID: " << penalty.getId() << endl;
        os << "Text: " << penalty.getText() << endl;
        os << "DateTime: " << penalty.getDateTime() << endl;
        os << "Price: " << penalty.getPrice() << " AZN" << endl;
        return os;
    }

    ~Penalty() = default;
};