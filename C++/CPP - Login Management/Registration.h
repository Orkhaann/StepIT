#pragma once

class Registration {
    Database _database;

public:
    Registration() = default;
    Registration(const Database& database) : _database(database) {}

    void signIn(string username, string password) {
        try {
            User& user = _database.getUserByUsername(username);
            if (user.getPassword() != password) {
                throw DatabaseException("Incorrect Password!");
            }
        }
        catch (const InvalidArgumentException& ex) {
            throw DatabaseException("User Not Found!");
        }
    }

    inline Database getDataBase() const { return _database; };

    void signUp(string username, string password, string name, string surname) {
        try {
            _database.getUserByUsername(username);
            throw DatabaseException("Username Already Exists!");
        }
        catch (const InvalidArgumentException& e) {
            if (username.length() < 6) {
                throw InvalidArgumentException("Username length must be at least 6 characters");
            }
            if (!islower(username[0])) {
                throw InvalidArgumentException("Username must start with a lowercase letter");
            }
            if (password.length() < 6) {
                throw InvalidArgumentException("Password length must be at least 6 characters");
            }
            if (name.length() < 3) {
                throw InvalidArgumentException("Name length must be at least 3 characters");
            }
            if (surname.length() < 4) {
                throw InvalidArgumentException("Surname length must be at least 4 characters");
            }

            User newUser(0, username, password, name, surname);
            _database.addUser(newUser);
        }
    }
};