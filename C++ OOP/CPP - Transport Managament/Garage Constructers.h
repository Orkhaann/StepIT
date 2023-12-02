#pragma once

Garage::Garage(const char* name, const char* address)
{
    setName(name);
    setAddress(address);
}

Garage::~Garage()
{
    if (this->_name != nullptr)
        delete[] _name;
    if (this->_address != nullptr)
        delete[] _address;
    if (this->_address != nullptr)
    {
        for (size_t i = 0; i < _count; i++)
            delete airplanes[i];
        delete[] airplanes;
    }
}