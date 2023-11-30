#pragma once

#pragma once

class Worker
{
	string Name;
	string Surname;
	unsigned short int Age;
	int pageCount;

public:
	Worker() = default;
	Worker(int pageCount);
	Worker(string name, int pageCount);
	Worker(string name, string Surname, unsigned short int Age, int pageCount);

	inline const string getName() const { return this->Name; }
	inline const string getSurname() { return this->Surname; }
	inline unsigned short int getAge() const { return this->Age; }
	inline int getPage() const { return this->pageCount; }
	void setName(string name);
	void setSurname(string Surname);
	void setAge(unsigned short int Age);
	void setPage(int pageCount);
};

Worker::Worker(int pageCount) : Worker()
{
	this->setPage(pageCount);
}

Worker::Worker(string name, int pageCount) : Worker(pageCount)
{
	this->setName(name);
}

Worker::Worker(string name, string Surname, unsigned short int Age, int pageCount) : Worker(name, pageCount)
{
	this->setSurname(Surname);
	this->setAge(Age);
}

void Worker::setName(string name)
{
	if (name.length() >= 3)
		this->Name = name;
	else
		assert(!"Name Lenght Too Short");
}

void Worker::setSurname(string Surname)
{
	if (Surname.length() >= 3)
		this->Surname = Surname;
	else
		assert(!"SurName Lenght Too Short");
}

void Worker::setAge(unsigned short int Age)
{
	if (Age > 18 && Age <= 65)
		this->Age = Age;
	else
		assert(!"Age Lenght Too Short");
}

void Worker::setPage(int pageCount)
{
	if (pageCount > 0)
		this->pageCount = pageCount;
	else
		assert(!"Page Lenght Too Short");
}