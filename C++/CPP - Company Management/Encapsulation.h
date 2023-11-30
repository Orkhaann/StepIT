#pragma once

void Applier::setName(string name)
{
	if (name.length() >= 3 && name.length() <= 30)
		this->_name = name;
	else
		invalid_argument("Name Error!");
}
void Applier::setAge(int age)
{
	if (age >= 15 && age <= 65)
		this->_age = age;
	else
		invalid_argument("Age Error!");
}
void Applier::setSpeciality(string speciality)
{
	if (speciality.length() >= 3 && speciality.length() <= 20)
		this->_speciality = speciality;
	else
		invalid_argument("Speciality Error!");
}
void Applier::setText(string text)
{
	if (text.length() >= 5 && text.length() <= 60)
		this->_text = text;
	else
		invalid_argument("Text Error!");
}