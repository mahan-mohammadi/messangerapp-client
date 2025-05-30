#include <iostream>
#include "date.h"
#include <string>
#include "person.h"
#include "encdec.h"

using namespace std;

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
