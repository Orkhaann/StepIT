#pragma once

class StartUp
{
public:
	static void start()
	{
		Contact** contacts = new Contact * [4];

		contacts[0] = new Contact("Orkhan", "Mammaddli", "776000007", "New Jersey", "orkhan@gmail.com");
		contacts[1] = new Contact("Ibrahim", "Penahli", "556000007", "New Jersey", "ibrahim@gmail.com");
		contacts[2] = new Contact("Ibrahim", "Alizada", "506000007", "Yasamal", "ibrahima@gmail.com");
		contacts[3] = new Contact("Cavid", "Atamoglanov", "516000007", "Bayil", "cavid@gmail.com");

		Database Database(contacts, 4);

		while (true)
		{
			system("cls");
			cout << "1. Add Contact\n2. Delete Contact By Name\n3. Search Contact By Name\n4. Search Contact By Phone Number\n5. Show All Users\n6. Exit\n";
			int chooice;
			cout << "Enter chooice: ";
			cin >> chooice;

			if (chooice == 1)
			{
				system("cls");
				string name, surname, phone, adress, email;

				cout << "Enter Name: ";
				cin >> name;
				cout << "Enter Surname: ";
				cin >> surname;
				cout << "Enter Phone Number: ";
				cin >> phone;
				cout << "Enter Adress: ";
				cin >> adress;
				cout << "Enter Email: ";
				cin >> email;

				Contact* new_contact = new Contact(name, surname, phone, adress, email);

				Database.AddContact(new_contact);

			}
			else if (chooice == 2)
			{
				system("cls");
				string name;
				cout << "Enter Name: ";
				cin >> name;

				Database.DeleteByName(name);
			}
			else if (chooice == 3)
			{
				system("cls");
				string name;
				cout << "Enter Name: ";
				cin >> name;
				Contact* sc = Database.SearchByName(name);
				sc->show();
			}
			else if (chooice == 4)
			{
				system("cls");
				string phone;
				cout << "Enter Phone Number: ";
				cin >> phone;
				Contact* sc = Database.SearchByPhoneNumber(phone);
				sc->show();
			}
			else if (chooice == 5)
			{
				system("cls");
				Database.show();
			}
			else if (chooice == 6)
				exit(0);
			else
				throw invalid_argument("Invalid Chooice");
		}
	}
};