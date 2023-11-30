#pragma once

Airplane::Airplane(int id, const char* model, const char* color, double engine, int capacity)
{
    setId(id);
    setModel(model);
    setColor(color);
    setEngine(engine);
    setCapacity(capacity);
}


Airplane::~Airplane() {
    if (this->_model != nullptr)
        delete[] _model;
    if (this->_color != nullptr)
        delete[] _color;
}