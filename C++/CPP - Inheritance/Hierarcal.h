#pragma once

class Vehicle {
private:
	string brand;

public:
	Vehicle() = default;
	Vehicle(const string brand) : brand(brand) {}

	void showBrand();

	inline string getBrand() { return this->brand; };
	void setBrand(string brand);
};

class Car : public Vehicle {
private:
	unsigned short int door;
public:
	Car() = default;
	Car(const string brand) : Vehicle(brand) {}

	void drive();

	inline  unsigned short int getDoor() { return this->door; };
	void setDoor(unsigned short int door);
};

class Motorcycle : public Vehicle {
private:
	unsigned short int cc;
public:
	Motorcycle(const string brand) : Vehicle(brand) {}

	void ride();

	inline unsigned short int getCC() { return this->cc; };
	void setCC(unsigned short int cc);
};

void Vehicle::showBrand()
{
	cout << "Brand Name: " << getBrand() << endl;
}

void Car::drive()
{
	cout << "Driving the car." << endl;
}

void Motorcycle::ride()
{
	cout << "Riding the motorcycle." << endl;
}