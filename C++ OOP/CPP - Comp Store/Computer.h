#pragma once

class Computer
{
private:
	static size_t _staticId;
	size_t _id;
	char* _model;
	char* _color;
	size_t _year;
	char* _CPU; // AMD Ryzen 9 5900x
	short _RAM;
	size_t _space; // SAMSUNG 980 Nvm2
public:
	Computer();
	Computer(const char* _model, const char* _color, size_t _year, const char* _CPU, short _RAM, size_t _space);
	Computer(const Computer& other);

	Computer& operator=(const Computer& other)
	{
		this->SetModel(other._model);
		this->SetColor(other._color);
		this->SetYear(other._year);
		this->SetCPU(other._CPU);
		this->SetRAM(other._RAM);
		this->SetSpace(other._space);

		return *this;
	};

	void SetModel(const char* _model);
	void SetColor(const char* _color);
	void SetYear(size_t _year);
	void SetCPU(const char* _CPU);
	void SetRAM(short _RAM);
	void SetSpace(size_t _space);

	static size_t GetStaticId();
	size_t GetId()const;
	const char* GetModel() const;
	const char* GetColor() const;
	size_t GetYear() const;
	const char* GetCPU() const;
	short GetRAM() const;
	size_t GetSpace() const;

	void print();

	~Computer();
};

size_t Computer::_staticId = 1;

size_t Computer::GetStaticId() { return _staticId; }
size_t Computer::GetId()const { return this->_id; }
const char* Computer::GetModel()const { return this->_model; }
const char* Computer::GetColor()const { return this->_color; }
size_t Computer::GetYear()const { return this->_year; }
const char* Computer::GetCPU() const { return this->_CPU; }
short Computer::GetRAM()const { return this->_RAM; }
size_t Computer::GetSpace() const { return this->_space; };


void Computer::SetModel(const char* model)
{
	if (model != nullptr && strlen(model) >= 1)
	{
		if (this->_model != nullptr)
			delete[] this->_model;

		size_t len = strlen(model);
		this->_model = new char[len + 1];
		strcpy_s(this->_model, len + 1, model);
	}
	else
	{
		assert(!"Model is NULL");
	}
}

void Computer::SetColor(const char* color)
{
	if (color != nullptr && strlen(color) >= 1)
	{
		if (this->_color != nullptr)
			delete[] this->_color;

		size_t len = strlen(color);
		this->_color = new char[len + 1];
		strcpy_s(this->_color, len + 1, color);
	}
	else
	{
		assert(!"Color is NULL");
	}
}

void Computer::SetYear(size_t year)
{
	if (year >= 2015 && year <= 2025)
	{
		this->_year = year;
	}
	else
		assert(!"Wrong Year!");
}

void Computer::SetCPU(const char* cpu)
{
	if (cpu != nullptr && strlen(cpu) >= 1)
	{
		if (this->_CPU != nullptr)
			delete[] this->_CPU;

		size_t len = strlen(cpu);
		this->_CPU = new char[len + 1];
		strcpy_s(this->_CPU, len + 1, cpu);
	}
	else
	{
		assert(!"CPU is NULL");
	}
}


void Computer::SetRAM(short ram)
{
	if (ram >= 4 && ram <= 64)
	{
		this->_RAM = ram;
	}
	else
		assert(!"Wrong Ram!");
}

void Computer::SetSpace(size_t space)
{
	if (space >= 500000 && space <= 2000000)
	{
		this->_space = space;
	}
	else
		assert(!"Wrong Space!");
}

Computer::Computer()
{
	_id = _staticId++;
	_model = nullptr;
	_color = nullptr;
	_year = 0;
	_CPU = nullptr;
	_RAM = 0;
	_space = 0;
}

Computer::Computer(const char* model, const char* color, size_t year, const char* CPU, short RAM, size_t space)
{
	SetModel(model);
	SetColor(color);
	SetYear(year);
	SetCPU(CPU);
	SetRAM(RAM);
	SetSpace(space);
}

Computer::Computer(const Computer& otherComputer)
{
	_id = _staticId++;
	SetModel(otherComputer._model);
	SetColor(otherComputer._color);
	SetYear(otherComputer._year);
	SetCPU(otherComputer._CPU);
	SetRAM(otherComputer._RAM);
	SetSpace(otherComputer._space);
}



void Computer::print()
{
	cout << "----------------------------------" << endl;
	cout << "Id: " << this->_id << endl;
	cout << "Model: " << this->_model << endl;
	cout << "Color: " << this->_color << endl;
	cout << "Year: " << this->_year << endl;
	cout << "CPU: " << this->_CPU << endl;
	cout << "RAM: " << this->_RAM << endl;
	cout << "Space: " << this->_space << endl;
	cout << "----------------------------------" << endl;
}


Computer::~Computer()
{
	delete[] _model;
	delete[] _color;
	delete[] _CPU;
}