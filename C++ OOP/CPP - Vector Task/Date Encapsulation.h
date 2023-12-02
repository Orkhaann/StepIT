#pragma once

void Date::setHour(int _hour)
{
	if (_hour <= 23 && _hour >= 0)
		this->_hour = _hour;
	else
		assert(!"Hour Error!");
}

void Date::setMinutes(int _minutes)
{
	if (_minutes <= 59 && _minutes >= 0)
		this->_minutes = _minutes;
	else
		assert(!"Minutes Error!");
}

void Date::setSeconds(int _seconds)
{
	if (_seconds <= 59 && _seconds >= 0)
		this->_seconds = _seconds;
	else
		assert(!"Seconds Error!");
}