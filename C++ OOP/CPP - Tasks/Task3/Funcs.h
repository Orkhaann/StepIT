#pragma once

void Counter::Increment() {
    if (_currentValue < _max)
        _currentValue++;
}

void Counter::Decrement() {
    if (_currentValue > _min)
        _currentValue--;
}

int Counter::GetCurrent() {
    return _currentValue;
}