#pragma once

class Applier {
private:
	string _name = "";
	int _age = 0;
	string _speciality = "";
	string _text = "";
public:
	Applier() = default;
	/*Applier(string name, int age, string speciality, string text) : _name(name), _age(age), _speciality(speciality), _text(text) {}*/
	// Set oldugu ucun isledmedim
	Applier(string name, int age, string speciality, string text)
	{
		setName(name);
		setAge(age);
		setSpeciality(speciality);
		setText(text);
	}

	inline string getName() const { return _name; }
	inline int getAge() const { return _age; }
	inline string getSpeciality() const { return _speciality; }
	inline string getText() const { return _text; }

	void setName(string name);
	void setAge(int age);
	void setSpeciality(string speciality);
	void setText(string text);

	~Applier() = default;
};

class Company {
	vector<Applier*> appliers;
public:
	void hireUp(Applier* cv);
	void showAllCV();
	void writeToFile(string filename);
	void readToFile(string filename);
};