#pragma once

class Exception : public exception {
private:
	string _message;
	string _date;
	string _time;
	string _source;
	int _line;

public:
	Exception(string message = "NULL Exception", string source = "NULL PATH", string date = "00:00:0000", string time = "00:00:00", int line = 0)
		: exception(message.c_str()), _message(message), _source(source), _date(date), _time(time), _line(line)
	{
		_message = "Message: " + string(exception::what())
			+ "\nFIle: " + getSource()
			+ "\nDate: " + getDate()
			+ "\nTime: " + getTime()
			+ "\nLine: " + to_string(_line);
	}

	inline string getSource() const { return __FILE__; }
	inline string getDate() const { return __DATE__; }
	inline string getTime() const { return __TIME__; }
	inline int getLine() const { return __LINE__; }

	const char* what() const override {
		return _message.c_str();
	}

	~Exception() = default;
};

class DatabaseException : public Exception {
public:
	DatabaseException(string message = "Database Exception", string source = "NULL", string date = "00:00:0000", string time = "00:00:00", int line = 0)
		: Exception(message, source, date, time, line) {}

	~DatabaseException() = default;
};

class InvalidArgumentException : public Exception {
public:
	InvalidArgumentException(string message = "Invalid Argument Exception", string source = "NULL", string date = "00:00:0000", string time = "00:00:00", int line = 0)
		: Exception(message, source, date, time, line) {}

	~InvalidArgumentException() = default;
};