#pragma once

Counter::Counter()
{
	this->_min = 0;
	this->_max = 100;
	this->_currentValue = 0;
}

Counter::Counter(int _min, int _max, int _currentValue)
{
	this->_min = _min;
	this->_max = _max;
	this->_currentValue = _min;
}