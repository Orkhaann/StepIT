#pragma once

class Person {
public:
    string name;
    string surname;
    int age;
    string email;

    Person() = default;
    Person(string name, string surname, int age, string email) {
        setName(name);
        setSurname(surname);
        setAge(age);
        setEmail(email);
    }

    inline string getName() const { return name; }
    inline string getSurname() const { return surname; }
    inline int getAge() const { return age; }
    inline string getEmail() const { return email; }

    void setName(string name);
    void setSurname(string surname);
    void setAge(int age);
    void setEmail(string email);
};

class Student : public Person {
private:
    string name;
    string surname;
    int age;
    string email;
    double avg;
    string group;
public:
    Student() = default;
    Student(string name, string surname, int age, string email, double avg, string group) : Person(name, surname, age, email), avg(avg), group(group) {}

    inline double getAvg() const { return avg; }
    inline string getGroup() const { return group; }

    void setAvg(double avg);
    void setGroup(string group);

    void show() const {
        cout << "Name: " << getName() << " Surname: " << getSurname() << " Age: " << getAge() << " Email: " << getEmail() << " Avg: " << getAvg() << " Group: " << getGroup() << endl;
    }
};

class Teacher : public Person {
public:
    string name;
    string surname;
    int age;
    string email;
    double salary;
    vector<Student> students;

    Teacher() = default;
    Teacher(string name, string surname, int age, string email, double salary) : Person(name, surname, age, email), salary(salary) {}

    inline double getSalary() const { return salary; }

    void setSalary(double salary);

    void display() {
        cout << "Name: " << getName() << " Surname: " << getSurname() << " Age: " << getAge() << " Email: " << getEmail() << " Salary: " << getSalary() << endl;
    }
};

void showAllStudents(vector<Student>& students) {
    cout << "All Students: " << endl;
    for (const auto& student : students) {
        student.show();
    }
}

void showSameGroupStudents(vector<Student>& students, const string& group) {
    cout << "Students" << group << ":" << endl;
    for (const auto& student : students) {
        if (student.getGroup() == group)
            student.show();
    }
}

void createStudent(vector<Student>& students) {
    string name, surname, email, group;
    int age;
    double avg;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Surname: ";
    cin >> surname;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Email: ";
    cin >> email;
    cout << "Enter Average: ";
    cin >> avg;
    cout << "Enter Group: ";
    cin >> group;

    students.push_back(Student(name, surname, age, email, avg, group));
}

void deleteStudent(vector<Student>& students, const string& email) {
    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].getEmail() == email) {
            students.erase(students.begin() + i);
            return;
        }
    }
    throw out_of_range("Student Not Found");
}

void saveFile(const vector<Student>& students) {
    ofstream file("students.txt");
    for (const auto& student : students)
        file << student.getName() << " " << student.getSurname() << " " << student.getAge() << " " << student.getEmail() << " " << student.getAvg() << " " << student.getGroup() << endl;
    file.close();
}

void Person::setName(string name)
{
    if (name.length() >= 6 && name.length() <= 30)
        this->name = name;
    else
        throw invalid_argument("Name Error!");
}
void Person::setSurname(string surname)
{
    if (surname.length() >= 6 && surname.length() <= 30)
        this->surname = surname;
    else
        throw invalid_argument("Surname Error!");
}
void Person::setAge(int age)
{
    if (age >= 6 && age <= 65)
        this->age = age;
    else
        throw invalid_argument("Age Error!");
}
void Person::setEmail(string email)
{
    if (email.length() >= 6 && email.length() <= 50)
        this->email = email;
    else
        throw invalid_argument("Email Error!");
}

void Student::setAvg(double avg)
{
    if (avg >= 1.00 && avg <= 12.00)
        this->avg = avg;
    else
        throw invalid_argument("Average Error!");
}
void Student::setGroup(string group)
{
    if (group.length() >= 3 && group.length() <= 30)
        this->group = group;
    else
        throw invalid_argument("Group Error!");
}

void Teacher::setSalary(double salary)
{
    if (salary >= 50.00 && salary <= 15000.00)
        this->salary = salary;
    else
        throw invalid_argument("Salary Error!");
}