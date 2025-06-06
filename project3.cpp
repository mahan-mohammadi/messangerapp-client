#include <iostream>
#include "date.h"
#include <string>
#include "encdec.h";
#include "user.h"

using namespace std;

void registerMenu() {
    string firstName, familyName, username, password, confirmPassword, phone, displayName;
    int id, day, month, year;
    cout << "----- Register -----" << endl;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter family name: ";
    cin >> familyName;
    cout << "Enter birthday (day month year): ";
    cin >> day >> month >> year;
    cout << "Enter messenger ID (username): ";
    cin >> username; // the username should be chekced to see if it is unique or not


    do {
        cout << "Enter password(it should be 8 characters long and have both numbers and alphabetic character: ";
        cin >> password;
	} while (!isPassValid(password));


    do {
        cout << "Confirm password: ";
        cin >> confirmPassword;
    } while (confirmPassword != password || !isPassValid(confirmPassword));

    cout << "Enter phone number: ";
    cin >> phone; // it also should be unique
    cout << "Enter display name: ";
    cin >> displayName;


    Date birthday(month, day, year);
    User newUser(firstName, familyName, birthday, id, username, password, phone, displayName); //we should get the id ourselves from the server

    cout << "Registration successful! You can now log in." << endl;
}

bool hasAlpha(string pass) {
    for (char c : pass) {
        if (isalpha(c))
            return true;
    }
    return false;
}


bool hasNum(string pass) {
    for (char c : pass)
        if (c >= '0' && c <= '9')
            return true;
    return false;
}

bool isPassValid(string pass) {
	return pass.length() >= 8 && hasAlpha(pass) && hasNum(pass);
}


void loginMenu(){}

int main()
{
	cout << "Welcome to the Messenger Project!" << endl << endl;
	cout << "-----------------------" << endl;
	cout << "| 1. Register         |" << endl;
	cout << "| 2. Login            |" << endl;
	cout << "-----------------------" << endl;

	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		registerMenu();
		break;
	case 2:
		loginMenu();
		break;
	default:
		cout << "invalid choice" << endl;
		main();
		break;
	}
}

