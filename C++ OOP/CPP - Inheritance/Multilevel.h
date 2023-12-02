#pragma once

class Person {
private:
    string name;

public:
    Person() = default;
    Person(const string name) : name(name) {}

    void introduce();

    inline string getName() { return this->name; };
    void setName(string name);
};

class Student : public Person {
private:
    short int studentId;

public:
    Student() = default;
    Student(const string name, int studentId) : Person(name), studentId(studentId) {}

    void study();

    inline short int getId() { return this->studentId; };
    void setId(string id);
};

class UndergraduateStudent : public Student {
private:
    string major;

public:
    UndergraduateStudent() = default;
    UndergraduateStudent(const string name, int studentId, const string major)
        : Student(name, studentId), major(major) {}

    void showMajor();

    inline string getMajor() { return this->major; };
    void setMajor(string major);
};

void Person::introduce()
{
    cout << "My name is " << getName() << endl;
}

void Student::study() 
{
    cout << "My ID: " << getId() << endl;
}

void UndergraduateStudent::showMajor() 
{
    cout << "My major: " << getMajor() << endl;
}