// Tech Shop.cpp : Defines the entry point for the console application.
//David R.			https://github.com/david-rafael

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

std::string menu_items = "\n1. Monitor\n2. Motherboard\n3. CPU(Microprocessor\n4. Main memory(RAM)\n5. Expansion cards\n6. Power supply unit\n7. Optical disc drive\n8. Hard disk drive (HDD)\n9. Keyboard\n10. Mouse\n";

bool x = true;
char menu_select;
double currency = 450;
int buy_select;
int sell_select;
int trade_select;

int main()
{
	char decision;

	cout << "Welcome to my Tech Shop! ";
	
	do
	{
		cout << "How can I help you?\t\t" << "Your current balance is $" << currency << endl;
		cout << "\nA. Buy\nB. Sell\nC. Trade\n\nTo end the program, type 'E'\n" << endl;
		cin >> menu_select;

		switch (menu_select)
		{
			case 'a':
			case 'A':
				cout << "\nWhat would you like to buy?\n" << menu_items << endl;
				cin >> buy_select;

				switch (buy_select)
				{
				case 1:
					cout << "\nThis item costs $75. Are you sure you want to buy it? (y/N)\n" << endl;
					cin >> decision;

					if (decision == 'y' || decision == 'Y')
					{
						currency = currency - 75;
					}
				}
				break;

			case 'b':
			case 'B':
				cout << "\nWhat would you like to sell?\n" << menu_items << endl;
				cin >> sell_select;
				break;

			case 'c':
			case 'C':
				cout << "\nWhat would you like to trade?\n" << menu_items << endl;
				cin >> trade_select;
				break;

			case 'e':
			case 'E':
				return 0;

			default:
				cout << "\nYou have not entered a valid option.\n" << endl;
				break;
		}

		cout << endl;
	}
	while (x == true);

	system("pause");
	return 0;
}
