#pragma once

class Contact
{
private:
	string name;
	string surname;
	string phone;
	string adress;
	string email;
public:
	Contact() = default;
	Contact (string name, string surname, string phone, string adress, string email) : name(name) , surname(surname), phone(phone), adress(adress), email(email) {}

	inline string getName() const { return this->name; }
	inline string getSurname() const { return this->surname; }
	inline string getPhone() const { return this->phone; }
	inline string getAdress() const { return this->adress; }
	inline string getEmail() const { return this->email; }

	void setName(string name);
	void setSurname(string surname);
	void setPhone(string phone);
	void setAdress(string adress);
	void setEmail(string email);

	void show() const
	{
		cout << "Name: " << this->name << endl;
		cout << "Surname: " << this->surname << endl;
		cout << "Phone: " << this->phone << endl;
		cout << "Adress: " << this->adress << endl;
		cout << "Email: " << this->email << endl;
	}

	~Contact() = default;
};


void Contact::setName(string name)
{
	if (name.length() >= 3 && name.length() <= 30)
		this->name = name;
	else
		throw invalid_argument("Wrong Name Lenght");
}

void Contact::setSurname(string surname)

{
	if (surname.length() >= 3 && surname.length() <= 30)
		this->surname = surname;
	else
		throw invalid_argument("Wrong Surname Lenght");
}

void Contact::setPhone(string phone)
{
	if (phone.length() > 8)
		this->phone = phone;
	else
		throw invalid_argument("Wrong Phone Lenght");
}

void Contact::setAdress(string adress)
{
	if (adress.length() >= 3 && adress.length() <= 30)
		this->adress = adress;
	else
		throw invalid_argument("Wrong Address Lenght");
}

void Contact::setEmail(string email)
{
	if (email.length() > 10)
		this->email = email;
	else
		throw invalid_argument("Wrong Email Lenght");
}