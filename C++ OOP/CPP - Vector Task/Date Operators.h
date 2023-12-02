#pragma once

void Date::operator++(int)
{
	this->_seconds++;
	if (this->_seconds == 60)
	{
		this->_seconds = 0;
		this->_minutes++;
		if (this->_minutes == 60)
		{
			this->_minutes = 0;
			this->_hour++;
			if (this->_hour == 24)
				this->_hour = 0;
		}
	}
}

void Date::operator++()
{
	this->_seconds++;
	if (this->_seconds == 60)
	{
		this->_seconds = 0;
		this->_minutes++;
		if (this->_minutes == 60)
		{
			this->_minutes = 0;
			this->_hour++;
			if (this->_hour == 24)
				this->_hour = 0;
		}
	}
}

void Date::operator--(int)
{
	this->_seconds--;
	if (this->_seconds == -1)
	{
		this->_seconds = 0;
		this->_minutes--;
		if (this->_minutes == -1)
		{
			this->_minutes = 0;
			this->_hour--;
			if (this->_hour == -1)
				this->_hour = 23;
		}
	}
}

void Date::operator--()
{
	this->_seconds--;
	if (this->_seconds == -1)
	{
		this->_seconds = 0;
		this->_minutes--;
		if (this->_minutes == -1)
		{
			this->_minutes = 0;
			this->_hour--;
			if (this->_hour == -1)
				this->_hour = 23;
		}
	}
}

bool Date::operator>(const Date& other)
{
	if (this->_hour > other._hour)
		return true;
	else if (this->_hour < other._hour)
		return false;
	else
	{
		if (this->_minutes > other._minutes)
			return true;
		else if (this->_minutes < other._minutes)
			return false;
		else
		{
			if (this->_seconds > other._seconds)
				return true;
			return false;
		}
	}
}

bool Date::operator<(const Date& other)
{
	if (this->_hour < other._hour)
		return true;
	else if (this->_hour > other._hour)
		return false;
	else
	{
		if (this->_minutes < other._minutes)
			return true;
		else if (this->_minutes > other._minutes)
			return false;
		else
		{
			if (this->_seconds < other._seconds)
				return true;
			return false;
		}
	}
}

bool Date::operator<=(const Date& other)
{
	if (this->_hour <= other._hour && this->_minutes <= other._minutes && this->_seconds <= other._seconds)
		return true;
	else if (this->_hour > other._hour)
		return false;
	else
	{
		if (this->_minutes <= other._minutes && this->_seconds <= other._seconds)
			return true;
		else if (this->_minutes > other._minutes)
			return false;
		else
		{
			if (this->_seconds <= other._seconds)
				return true;
			else if (this->_seconds > other._seconds)
				return false;
			return true;
		}
	}
}

bool Date::operator>=(const Date& other)
{
	if (this->_hour >= other._hour && this->_minutes >= other._minutes && this->_seconds >= other._seconds)
		return true;
	else if (this->_hour > other._hour)
		return false;
	else
	{
		if (this->_minutes >= other._minutes && this->_seconds >= other._seconds)
			return true;
		else if (this->_minutes < other._minutes)
			return false;
		else
		{
			if (this->_seconds >= other._seconds)
				return true;
			else if (this->_seconds < other._seconds)
				return false;
			return true;
		}
	}
}

bool Date::operator==(const Date& other)
{
	if (this->_hour == other._hour && this->_minutes == other._minutes && this->_seconds == other._seconds)
		return true;
	return false;
}

bool Date::operator!=(const Date& other)
{
	if (this->_hour != other._hour && this->_minutes != other._minutes && this->_seconds != other._seconds)
		return true;
	return false;
}

bool Date::operator!() const
{
	if (this->_hour == 0 && this->_minutes == 0 && this->_seconds == 0)
		return true;
	return false;
}

ostream& operator<<(ostream& os, const Date& dt)
{
	os << dt._hour << ":" << dt._minutes << ":" << dt._seconds;

	return os;
}

istream& operator>>(istream& is, Date& dt)
{
	int hour, minute, second;

	cout << "Enter hour: ";
	cin >> hour;
	dt.setHour(hour);

	cout << "Enter Minutes: ";
	cin >> minute;
	dt.setMinutes(minute);

	cout << "Enter Seconds: ";
	cin >> second;
	dt.setSeconds(second);

	return is;
}