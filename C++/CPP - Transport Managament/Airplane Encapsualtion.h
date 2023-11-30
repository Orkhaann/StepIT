#pragma once

void Airplane::setId(int id)
{
    this->_id = id;
}

void Airplane::setModel(const char* model)
{
    if (this->_model != nullptr)
        delete[] this->_model;

    size_t length = strlen(model) + 1;
    this->_model = new char[length];
    strcpy_s(this->_model, length, model);
}

void Airplane::setColor(const char* color)
{
    if (this->_color != nullptr)
        delete[] this->_color;

    size_t length = strlen(color) + 1;
    this->_color = new char[length];
    strcpy_s(this->_color, length, color);
}

void Airplane::setEngine(double engine)
{
    this->_engine = engine;
}

void Airplane::setCapacity(int capacity)
{
    this->_capacity = capacity;
}