#pragma once

class Airplane {
private:
    int _id;
    char* _model;
    char* _color;
    double _engine;
    int _capacity;

public:
    static int staticId;
    static int MAXCOUNT;

    Airplane() = default;
    Airplane(int id, const char* model, const char* color, double engine, int capacity);
    void print();
    int getId() const { return this->_id; };
    const char* getModel() const { return this->_model; };
    const char* getColor() const { return this->_color; };
    double getEngine() const { return this->_engine; };
    int getCapacity() const { return this->_capacity; };
    void setId(int id);
    void setModel(const char* model);
    void setColor(const char* color);
    void setEngine(double engine);
    void setCapacity(int capacity);
    ~Airplane();
};

class Garage {
private:
    Airplane** airplanes = nullptr;
    size_t _count = 0;
    char* _name;
    char* _address;

public:
    Garage() = default;
    Garage(const char* name, const char* address);
    Airplane* getAirplaneById(int id);
    Airplane** getAirplanesCapacityGreaterThan(int capacity);
    Airplane** getAirplanesByColor(const char* color);
    void print();
    size_t getCount() const { return _count; };
    const char* getName() const { return _name; };
    const char* getAddress() const { return _address; };
    void setName(const char* name);
    void setAddress(const char* address);
    ~Garage();
};