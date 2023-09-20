#include <iostream>
using namespace std;

int main() {

	int choice;


	do
	{
		cout << "Enter 10,11,12 (-1 to Quit): ";

		cin >> choice;



		switch (choice) {

		case 10:
			cout << "You Entered 10\n";
			break;
		case 11:
			cout << "You Entered 11\n";
			break;
		case 12:
			cout << "You Entered 12\n";
			break;
		case -1:
			cout << "Exiting Program";
			break;
		default:
			cout << "You Did Not Enter 10 11 or 12 Please enter a valid number\n";

		}

	} while (choice != -1);
		
	return 1;

	


}



