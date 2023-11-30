#pragma once

int Counter::GetMin() {
    return this->_min;
}

int Counter::GetMax() {
    return this->_max;
}

int Counter::GetCurrentValue() {
    return this->_currentValue;
}

void Counter::SetMin(int min) {
    if (min >= 0 && min <= 1000) {
        this->_min = min;
    }
    else {
        assert(!"The number you entered is above or below the allowed values.");
    }
}

void Counter::SetMax(int max) {
    if (max >= 0 && max <= 10000) {
        this->_max = max;
    }
    else {
        assert(!"The number you entered is above or below the allowed values.");
    }
}

void Counter::SetCurrentValue(int currentValue) {
    if (currentValue >= 0 && currentValue <= 10000) {
        this->_currentValue = currentValue;
    }
    else {
        assert(!"The number you entered is above or below the allowed values.");
    }
}