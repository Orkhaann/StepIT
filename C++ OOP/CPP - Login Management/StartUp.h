#pragma once

class StartUp {
public:
	static void Start() {
		Database db;
		Registration twitter(db);

        User user(0,"orkhan","Orkhan1","Orkhan","mammadli");

		twitter.getDataBase().addUser(user);

        int choice = 0;
        while (choice != 3) {
            system("cls");

            cout << "1. Sign In" << endl;
            cout << "2. Sign Up" << endl;
            cout << "3. Exit" << endl;
            cout << "Enter your choice: ";

            choice = _getch() - '0';

            switch (choice) {
            case 1: {
                string username, password;
                cout << "Enter your username: ";
                cin >> username;
                cout << "Enter your password: ";
                cin >> password;

                try {
                    twitter.signIn(username, password);
                    cout << "Sign in successful!" << endl;
                    _getch();
                }
                catch (DatabaseException& ex) {
                    cout << "Error: " << ex.what() << endl;
                    _getch();
                }
                break;
            }
            case 2: {
                string username, password, name, surname;
                cout << "Enter your username: ";
                cin >> username;
                cout << "Enter your password: ";
                cin >> password;
                cout << "Enter your name: ";
                cin >> name;
                cout << "Enter your surname: ";
                cin >> surname;

                try {
                    twitter.signUp(username, password, name, surname);
                    cout << "Sign up successful!" << endl;
                    _getch();
                }
                catch (InvalidArgumentException& ex) {
                    cout << "Error: " << ex.what() << endl;
                    _getch();
                }
                break;
            }
            case 3:
                break;
            default:
                cout << "Bye..." << endl;
                _getch();
                break;
            }
        }

	}

};