#pragma once

void Company::hireUp(Applier * cv)
{
	appliers.push_back(cv);
}

void Company::showAllCV()
{
	for (Applier* cv : appliers) {
		cout << "Name: " << cv->getName() << endl;
		cout << "Age: " << cv->getAge() << endl;
		cout << "Speciality: " << cv->getSpeciality() << endl;
		cout << "Text: " << cv->getText() << endl;
	}
}

void Company::writeToFile(string filename)
{
	ofstream file(filename);
	if (file.is_open()) {
		for (Applier* cv : appliers) {
			file << cv->getName() << endl;
			file << cv->getAge() << endl;
			file << cv->getSpeciality() << endl;
			file << cv->getText() << endl;
		}
		file.close();
	}
	else
		throw invalid_argument("Unable Open File");
}

void Company::readToFile(string filename)
{
	ifstream file(filename);
	if (file.is_open()) {
		string name, speciality, text;
		int age;
		while (getline(file, name)) {
			file >> age;
			file.ignore();
			getline(file, speciality);
			getline(file, text);
			
			Applier* cv = new Applier(name, age, speciality, text);
			appliers.push_back(cv);
		}
		file.close();
	}
	else
		throw invalid_argument("Unable Open File");
}