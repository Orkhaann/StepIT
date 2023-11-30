#pragma once

Date::Date()
{
	this->_hour = 0;
	this->_minutes = 0;
	this->_seconds = 0;
}

Date::Date(int _hour, int _minutes, int _seconds)
{
	this->setHour(_hour);
	this->setMinutes(_minutes);
	this->setSeconds(_seconds);
}

Date::Date(const Date& other)
{
	this->setHour(other._hour);
	this->setMinutes(other._minutes);
	this->setSeconds(other._seconds);
}

Date& Date::operator=(const Date& other)
{
	this->setHour(other._hour);
	this->setMinutes(other._minutes);
	this->setSeconds(other._seconds);

	return *this;
}