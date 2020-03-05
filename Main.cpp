//Wesley Tong and Deepkiran Sangha
//CIS 22C, Professor Manish Goel
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include "Currency.h"
#include "Dollar.h"
#include "Yuan.h"
#include "Yen.h"
#include "Rupee.h"
#include "Euro.h"
#include "Wallet.h"
int main()
{
	Dollar dollar;
	Euro euro;
	Yen yen;
	Rupee rupee;
	Yuan yuan;

	/*Currency *dollarWallet = new Dollar();
	Currency *yuanWallet = new Yuan();
	Currency *yenWallet = new Yen();
	Currency *rupeeWallet = new Rupee();
	Currency *euroWallet = new Euro();*/

	Currency *dollarWallet = &dollar;
	Currency *yuanWallet = &yuan;
	Currency *yenWallet = &yen;
	Currency *rupeeWallet = &rupee;
	Currency *euroWallet = &euro;

	int choice;
	int currencyChoice;
	do
	{
		cout << "Welcome to your wallet " << endl;
		cout << "1: Add Money " << endl;
		cout << "2: Subtract Money " << endl;
		cout << "3: Fully Zero Out a Currency" << endl;
		cout << "4: Display Wallet Contents" << endl;
		cout << "5: Empty Wallet" << endl;
		cout << "6: Exit Wallet" << endl;
		cout << "Enter Choice: " << endl;
		cin >> choice;

		if (choice >= 1 && choice <= 3)
		{
			cout << "Select the type of currency: " << endl << endl;
			cout << "1: Dollar " << endl;
			cout << "2: Euro " << endl;
			cout << "3: Yen " << endl;
			cout << "4: Rupee" << endl;
			cout << "5: Yuan" << endl;
			cout << "Enter Choice: " << endl;
			cin >> currencyChoice;
		}
		if (choice == 1 && currencyChoice >= 1 && currencyChoice <= 5)
		{
			if (currencyChoice == 1)
			{
				cout << "Please enter total value of dollars and cents" << endl;
				cin >> dollar; //dollar object
			}
			else if (currencyChoice == 2)
			{
				cout << "Please enter total value of euros and cents" << endl;
				cin >> euro;
			}
			else if (currencyChoice == 3)
			{
				cout << "Please enter total value of yens and sens" << endl;
				cin >> yen;
			}
			else if (currencyChoice == 4)
			{
				cout << "Please enter total value of rupees and paises" << endl;
				cin >> rupee;
			}
			else if (currencyChoice == 5)
			{
				cout << "Please enter total value of yuans and fens " << endl;
				cin >> yuan;
			}
		}
		if (choice == 2 && currencyChoice >= 1 && currencyChoice <= 5)
		{
			if (currencyChoice == 1)
			{
				cout << "Please enter total value of dollars and cents" << endl;
				cin >> dollar; //dollar object
			}
			else if (currencyChoice == 2)
			{
				cout << "Please enter total value of euros and cents" << endl;
				cin >> euro;
			}
			else if (currencyChoice == 3)
			{
				cout << "Please enter total value of yens and sens" << endl;
				cin >> yen;
			}
			else if (currencyChoice == 4)
			{
				cout << "Please enter total value of rupees and paises" << endl;
				cin >> rupee;
			}
			else if (currencyChoice == 5)
			{
				cout << "Please enter total value of yuans and fens " << endl;
				cin >> yuan;
			}
		}
		if (choice == 3 && currencyChoice >= 1 && currencyChoice <= 5) //add calls to zero out the currency
		{
			if (currencyChoice == 1)
			{
				cout << "Dollar has been zerod out" << endl;
			}
			else if (currencyChoice == 2)
			{
				cout << "Euro has been zerod out" << endl;
			}
			else if (currencyChoice == 3)
			{
				cout << "Yen has been zerod out" << endl;
			}
			else if (currencyChoice == 4)
			{
				cout << "Rupee has been zerod out" << endl;
			}
			else if (currencyChoice == 5)
			{
				cout << "Yuan has been zerod out" << endl;
			}
		}
		if (choice == 4)
		{
			//print out the objects of each currency
		}
		if (choice == 5)
		{
			//zero out ALL currencies 
		}
		else
			cout << "Error: Invalid Input";
	} while (choice != 6);
}