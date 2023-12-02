#pragma once

class CompStore
{
private:
	char* _name;
	Computer** _computers;
	size_t _count;
public:
	CompStore();
	CompStore(const char* name);
	CompStore(const char* name, Computer**& computers, size_t count);
	CompStore(const CompStore& other);

	CompStore& operator=(const CompStore& other)
	{
		SetName(other._name);
		this->_count = other._count;

		if (this->_computers != NULL)
			/*this->Clear();*/ //Clear Islemir

		this->_computers = new Computer * [other._count];
		for (size_t i = 0; i < other._count; i++)
			*this->_computers[i] = *other._computers[i];

	};

	void SetName(const char* name);
	void SetComputers(Computer**& computers, size_t count);

	void print();

	void printComputersRAMGreaterThan(short min);
	void printComputersSpaceGreaterThan(short space);
	void printComputersYearBetween(size_t minYear, size_t maxYear);

	Computer* GetElementById(int id)
	{
		for (size_t i = 0; i < _count; i++)
		{
			if (id == _computers[i]->GetId())
				return _computers[i];
		}
		return NULL;
	}

	Computer** getComputersByColor(const char* color);

	~CompStore();
};

CompStore::CompStore()
{
	_name = nullptr;
	_computers = NULL;
	_count = 0;
}

CompStore::CompStore(const char* name)
{
	SetName(name);
	_computers = NULL;
	_count = 0;
}

CompStore::CompStore(const char* name, Computer**& computers, size_t count)
{
	SetName(name);
	SetComputers(computers, count);
	_count = count;
}

CompStore::CompStore(const CompStore& other)
{
	SetName(other._name);
	this->_count = other._count;

	this->_computers = new Computer * [other._count];
	for (size_t i = 0; i < other._count; i++)
		this->_computers[i] = new Computer(*(other._computers[i]));
}

void CompStore::print()
{
	cout << "Store: " << this->_name << endl;
	cout << "Computers: " << endl;
	for (size_t i = 0; i < _count; i++)
		_computers[i]->print();
}

void CompStore::SetName(const char* name)
{
	int len = strlen(name);
	if (len >= 3)
	{
		if (this->_name != NULL)
			delete[] this->_name;

		this->_name = new char[len + 1];
		strcpy_s(this->_name, len + 1, name);
	}
	else
		assert(!"Name is NULL");
}

void CompStore::SetComputers(Computer**& comp, size_t count)
{

	if (comp != NULL)
	{
		this->_computers = new Computer * [count];
		for (size_t i = 0; i < count; i++)
			this->_computers[i] = new Computer(comp[i]->GetModel(), comp[i]->GetColor(), comp[i]->GetYear(), comp[i]->GetCPU(), comp[i]->GetRAM(), comp[i]->GetSpace());

		for (size_t i = 0; i < count; i++)
			delete comp[i];
		delete[] comp;
	}
}

void CompStore::printComputersRAMGreaterThan(short min) 
{
	for (size_t i = 0; i < _count; i++) 
	{
		if (_computers[i]->GetRAM() > min)
			_computers[i]->print();
	}
}

void CompStore::printComputersSpaceGreaterThan(short min)
{
	for (size_t i = 0; i < _count; i++)
	{
		if (_computers[i]->GetSpace() > min)
			_computers[i]->print();
	}
}

void CompStore::printComputersYearBetween(size_t minYear, size_t maxYear) 
{
	for (size_t i = 0; i < _count; i++) 
	{
		size_t year = _computers[i]->GetYear();
		if (year >= minYear && year <= maxYear) 
			_computers[i]->print();
	}
}

//Computer** CompStore::getComputersByColor(const char* color)
//{
//	Computer** Computers = new Computer * [_count];
//	int Count = 0;
//
//	for (size_t i = 0; i < _count; i++) {
//		if (strcmp(_computers[i]->GetColor(), color) == 0) {
//			Computers[Count] = _computers[i];
//			Count++;
//		}
//	}
//}

CompStore::~CompStore()
{
	delete[] _name;
}