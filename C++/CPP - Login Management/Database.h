#pragma once

class Database {
	User** users;
	int user_count = 0;

public:
    Database() = default;
    Database(User** users, int userCount) : users(users), user_count(userCount) {}

    void addUser(const User& user);

    User& getUserByUsername(const string username);

    void updateUser(User& olduser, const User& newuser);

    void deleteUserById(const int& id);

    void hashUserDataById(const int& id);

    ~Database();
};


void Database::addUser(const User& user) {
    User** temp = new User * [user_count + 1];
    for (int i = 0; i < user_count; i++)
        temp[i] = users[i];
    temp[user_count] = new User(user.getId(), user.getUsername(), user.getPassword(), user.getName(), user.getSurname());

    delete[] users;
    users = temp;
    user_count++;
}

User& Database::getUserByUsername(const string username) {
    for (int i = 0; i < user_count; i++) {
        if (users[i]->getUsername() == username)
            return *users[i];
    }
    throw InvalidArgumentException("User Not Found!");
}

void Database::updateUser(User& olduser, const User& newuser) {
    for (int i = 0; i < user_count; i++) {
        if (users[i] == &olduser) {
            users[i]->setUsername(newuser.getUsername());
            users[i]->setPassword(newuser.getPassword());
            users[i]->setName(newuser.getName());
            users[i]->setSurname(newuser.getSurname());
            return;
        }
    }
    throw InvalidArgumentException("User Not Found!");
}

void Database::deleteUserById(const int& id) {
    int index = -1;
    for (int i = 0; i < user_count; i++) {
        if (users[i]->getId() == id) {
            index = i;
            break;
        }
    }
    if (index == -1)
        throw InvalidArgumentException("User Not Found!");
    delete users[index];

    for (int i = index; i < user_count - 1; i++)
        users[i] = users[i + 1];

    user_count--;
}

void Database::hashUserDataById(const int& id) {

    for (int i = 0; i < user_count; i++) {
        if (users[i]->getId() == id) {
            unsigned int usernameHash = stringHash(users[i]->getUsername());
            unsigned int passwordHash = stringHash(users[i]->getPassword());
            unsigned int nameHash = stringHash(users[i]->getName());
            unsigned int surnameHash = stringHash(users[i]->getSurname());
            return;
        }
    }
    throw InvalidArgumentException("User Not Found!");
}

unsigned int stringHash(const string str) 
{
    unsigned int hash = 5381;
    for (char c : str)
        hash = ((hash << 5) + hash) + c;

    return hash;
}

Database::~Database()
{
	if (this->users != nullptr)
		delete[] users;
}