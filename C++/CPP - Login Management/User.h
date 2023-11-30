#pragma once
#include "Exceptions.h"

class User {
	int id;
	string username;
	string password;
	string name;
	string surname;
public:
	User() = default;
	User(int id, string username, string password, string name, string surname) : id(id), username(username), password(password), name(name), surname(surname) {}
	inline int getId() const { return this->id; };
	inline string getUsername() const { return this->username; };
	inline string getPassword() const { return this->password; };
	inline string getName() const { return this->name; };
	inline string getSurname() const { return this->surname; };

	void setUsername(string username);
	void setPassword(string password);
	void setName(string name);
	void setSurname(string surname);

	void show() const;
	~User() = default;
};

void User::setUsername(string username)
{
	if (username.length() < 3 && username.length() > 30)
		this->username = username;
	else
		throw InvalidArgumentException("Username Lenght Error");
}

void User::setPassword(string password)
{
	if (password.length() < 3 && password.length() > 30)
		this->password = password;
	else
		throw InvalidArgumentException("Password Lenght Error");
}

void User::setName(string name)
{
	if (name.length() < 3 && name.length() > 30)
		this->name = name;
	else
		throw InvalidArgumentException("Name Lenght Error");
}

void User::setSurname(string surname)
{
	if (surname.length() < 3 && surname.length() > 30)
		this->surname = surname;
	else
		throw InvalidArgumentException("Surname Lenght Error");
}

void User::show() const {
	cout << "User ID: " << getId() << endl;
	cout << "Username: " << getUsername() << endl;
	cout << "Password: " << getPassword() << endl;
	cout << "Name: " << getName() << endl;
	cout << "Surname: " << getSurname() << endl;
}