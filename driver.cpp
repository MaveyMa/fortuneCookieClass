#include "Cookie.h"
#include <iostream>
#include <string>
using namespace std;
char menu();

int main()
{
	FortuneCookie Carter;
	char chosen;
	bool repeat = true;

	do
	{
		chosen = menu();
		switch(chosen)
		{
			case 'o':
				Carter.openFortuneCookie();
				break;
			case 'n':
				Carter.generateNewFortune();
				break;
			case 'q':
				repeat = false;
				cout << "Have a gucci day." << endl;
				break;
			default:
				cout << "Invalid input, try again." << endl;
				break;
		}
	}while (repeat == true);

	return 0;
}//END MAIN

char menu()
{
	char choice;
	cout << endl;
	cout << "'o' – will open the fortune cookie" << endl;
	cout << "'n' – will generate a new fortune" << endl;
	cout << "'q' – will quit the program" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	choice = tolower(choice);
	return choice;
}//END MENU
