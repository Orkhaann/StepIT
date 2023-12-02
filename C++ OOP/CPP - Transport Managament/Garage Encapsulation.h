#pragma once

void Garage::setName(const char* name)
{
    if (_name != nullptr)
        delete[] _name;

    size_t length = strlen(name) + 1;
    _name = new char[length];
    strcpy_s(_name, length, name);
}

void Garage::setAddress(const char* address)
{
    if (_address != nullptr)
        delete[] _address;

    size_t length = strlen(address) + 1;
    _address = new char[length];
    strcpy_s(_address, length, address);
}