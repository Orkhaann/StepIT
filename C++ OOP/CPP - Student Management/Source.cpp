#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
#include "Header.h"

void main() {
    Teacher teacher("Cavidd", "Atamoglanov", 25, "j.atamoghlanov98@gmail.com", 3000.0);
    vector<Student> students;

    ifstream file("students.txt");
    string name, surname, email, group;
    int age;
    double avg;

    while (file >> name >> surname >> age >> email >> avg >> group) {
        students.push_back(Student(name, surname, age, email, avg, group));
    }
    file.close();

    string Email, Password;
    cout << "Enter Email: ";
    cin >> Email;
    cout << "Enter Password: ";
    cin >> Password;

    int choice;
    while (true) {
        cout << "\n[1] Show All Students"
             << "\n[2] Show Same Group Students"
             << "\n[3] Create Student"
             << "\n[4] Delete Student"
             << "\n[5] Save Data to File"
             << "\n[0] Exit" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            showAllStudents(students);
            break;
        case 2:
            cout << "Enter Group: ";
            cin >> group;
            showSameGroupStudents(students, group);
            break;
        case 3:
            createStudent(students);
            break;
        case 4:
            cout << "Enter Email: ";
            cin >> email;
            deleteStudent(students, email);
            break;
        case 5:
            saveFile(students);
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    }
}