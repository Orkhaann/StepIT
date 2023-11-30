#pragma once

class Counter
{
private:
	int _min;
	int _max;
	int _currentValue;
public:
    Counter();
    Counter(int min, int max, int currentValue);
    int GetMin();
    int GetMax();
    int GetCurrentValue();
    void SetMin(int min);
    void SetMax(int max);
    void SetCurrentValue(int currentValue);

    void Increment();
    void Decrement();
    int GetCurrent();
};