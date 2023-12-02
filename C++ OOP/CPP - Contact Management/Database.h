#pragma once

class Database
{
private:
	Contact** contacts;
	int size;
public:
	Database() = default;
	Database(Contact** contacts, int size) : contacts(contacts), size(size) {};

	inline Contact** getContacts() const { return this->contacts; }
	inline int get_size() const { return this->size; }

	void setContacts(Contact** contacts, int size)
	{
		if (contacts == nullptr)
			throw out_of_range("Contact Is Empty");
		if (this->contacts != nullptr)
		{
			for (size_t i = 0; i < this->size; i++)
				delete this->contacts[i];
			delete[] this->contacts;
		}
		this->contacts = new Contact * [size];
		for (size_t i = 0; i < size; i++)
			this->contacts[i] = new Contact(contacts[i]->getName(), contacts[i]->getSurname(), contacts[i]->getPhone(), contacts[i]->getAdress(), contacts[i]->getEmail());
		this->size = size;
	}

	void AddContact(Contact* newContact)
	{
		for (size_t i = 0; i < this->size; i++)
		{
			if (this->contacts[i]->getName() == newContact->getName())
				throw invalid_argument("Contact Not Found!");
		}
		Contact** newContacts = new Contact * [this->size + 1];
		for (size_t i = 0; i < this->size; i++)
			newContacts[i] = this->contacts[i];
		newContacts[this->size] = newContact;
		this->size++;
		delete[] this->contacts;
		this->contacts = newContacts;
	}

	void DeleteByName(const string name)
	{
		int index = -1;
		for (size_t i = 0; i < this->size; i++)
		{
			if (this->contacts[i]->getName() == name)
				index = i;
		}
		if (index == -1)
			throw invalid_argument("Contact Not Found!");
		Contact** newContacts = new Contact * [this->size - 1];
		for (size_t i = 0; i < index; i++)
			newContacts[i] = this->contacts[i];
		for (size_t i = index; i < this->size; i++)
			newContacts[i] = this->contacts[i + 1];
		this->size--;
		delete[] this->contacts;
		this->contacts = newContacts;
	}

	Contact* SearchByName(const string name)
	{
		for (size_t i = 0; i < this->size; i++)
		{
			if (this->contacts[i]->getName() == name)
				return this->contacts[i];
		}
		throw invalid_argument("Contact Not Found!");
	}

	Contact* SearchByPhoneNumber(const string phone_number)
	{
		for (size_t i = 0; i < this->size; i++)
		{
			if (this->contacts[i]->getPhone() == phone_number)
				return this->contacts[i];
		}
		throw invalid_argument("Contact Not Found!");
	}


	void show() const
	{
		if (this->contacts == nullptr)
			return;
		for (size_t i = 0; i < this->size; i++)
		{
			cout << i + 1 << " ";
			this->contacts[i]->show();
			cout << endl;
		}
	}

	~Database()
	{
		if (this->contacts != nullptr)
		{
			for (size_t i = 0; i < this->size; i++)
				delete this->contacts[i];
			delete[] this->contacts;
		}
	}
};