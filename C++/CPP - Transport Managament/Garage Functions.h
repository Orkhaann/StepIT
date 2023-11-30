#pragma once

Airplane* Garage::getAirplaneById(int id) {
    for (size_t i = 0; i < _count; i++) {
        if (airplanes[i]->getId() == id) {
            return airplanes[i];
        }
    }
    assert(!"Not Found");
}

Airplane** Garage::getAirplanesCapacityGreaterThan(int capacity) {
    Airplane** result = new Airplane * [_count];
    size_t resultCount = 0;

    for (size_t i = 0; i < _count; i++) {
        if (airplanes[i]->getCapacity() > capacity) {
            result[resultCount] = airplanes[i];
            resultCount++;
        }
    }

    result[resultCount] = nullptr;
    return result;
}

Airplane** Garage::getAirplanesByColor(const char* color) {
    Airplane** result = new Airplane * [_count];
    size_t resultCount = 0;

    for (size_t i = 0; i < _count; i++) {
        if (strcmp(airplanes[i]->getColor(), color) == 0) {
            result[resultCount] = airplanes[i];
            resultCount++;
        }
    }

    result[resultCount] = nullptr;
    return result;
}

void Garage::print() {
    cout << "Name: " << _name << endl;
    cout << "Address: " << _address << endl;
    cout << "Airplane Count: " << _count << endl;
    for (size_t i = 0; i < _count; i++) {
        airplanes[i]->print();
        cout << endl;
    }
}