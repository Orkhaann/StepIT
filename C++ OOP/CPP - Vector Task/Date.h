#pragma once

class Date
{
	int _hour;
	int _minutes;
	int _seconds;

public:

	Date();
	Date(int _hour, int _minutes, int _seconds);

	Date(const Date& other);

	Date& operator=(const Date& other);

	void setHour(int _hour);
	void setMinutes(int _minutes);
	void setSeconds(int _seconds);

	inline int get_hour() const { return _hour; };
	inline int get_minutes() const { return _minutes; };
	inline int get_seconds() const { return _seconds; };

	void operator++(int);
	void operator++();
	void operator--(int);
	void operator--();
	bool operator>(const Date& other);
	bool operator<(const Date& other);
	bool operator<=(const Date& other);
	bool operator>=(const Date& other);
	bool operator==(const Date& other);
	bool operator!=(const Date& other);
	bool operator!() const;

	friend ostream& operator<<(ostream& os, const Date& dt);

	friend istream& operator>>(istream& is, Date& dt);
};