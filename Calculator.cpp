#include "stdafx.h"
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

double result = 0;

void printMenu()
{
	cout << "###############" << endl;

	cout << "1. Add" << endl;
	cout << "2. Substract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Raise 'x' to power 'y' " << endl;
	cout << endl << "0. Exit" << endl;

	cout << "###############" << endl;

	cout << "The result is: " << result << endl;
	cout << "###############" << endl;
}

int main()
{
	char userChoice;
	double x, y;

	do
	{
		system("cls");
		printMenu();

		cin >> userChoice;

		switch (userChoice)
		{
		case '1':
			cout << "#### Add ####" << endl;
			cout << "The numbers:(separated by space) ";
			cin >> x;
			cin >> y;
			result = x + y;
			break;
		case '2':
			cout << "#### Substract ####" << endl;
			cout << "The numbers:(separated by space) ";
			cin >> x;
			cin >> y;
			result = x - y;
			break;
		case '3':
			cout << "#### Multiply ####" << endl;
			cout << "The numbers:(separated by space) ";
			cin >> x;
			cin >> y;
			result = x * y;
			break;
		case '4':
			cout << "#### Divide ####" << endl;
			cout << "The numbers:(separated by space) ";
			cin >> x;
			cin >> y;
			result = x / y;
			break;
		case '5':
			cout << "#### Raise 'x' to power 'y' ####" << endl;
			cout << "The numbers:(separated by space) ";
			cin >> x;
			cin >> y;
			result = pow(x, y);
			break;
		default:
			break;
		}

	} while (userChoice != '0');

    return 0;
}

