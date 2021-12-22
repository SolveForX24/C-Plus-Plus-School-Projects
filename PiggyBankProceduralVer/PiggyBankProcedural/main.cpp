/*
	Name: Xander Russell
	Date: 12/22/21
	Lab: Piggy Bank (Procedural Version)
	Extra: Special messages for when you've saved over a year or for exactly a year.
*/

// Including the class and the error trapping

#include "GetData.h"
#include "piggyFunctions.h"
#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;

int main()
{

	// Setting up print precision and variables.
	cout.setf(ios::fixed);

	string name = "EMPTY";
	int pennies = 0;
	int nickels = 0;
	int dimes = 0;
	int quarters = 0;
	int timeSaved = 0;

	string dummy = "EMPTY";

	// Getting name
	cout << "Hello, there! What's your name? ";
	getline(cin, name);

	// Getting each coin amount, and weeks saved, with error trapping. 

	// Pennies
	cout << "Hi, " << name << "! ";
	do {
		cout << "How many pennies have you saved? ";
	} while (!getValidInt(pennies) || (pennies < 0));

	// Nickels
	cout << "Great! ";
	do {
		cout << "How many nickels have you saved? ";
	} while (!getValidInt(nickels) || (nickels < 0));

	// Dimes
	cout << "Awesome. ";
	do {
		cout << "How many dimes have you saved, " << name << "? ";
	} while (!getValidInt(dimes) || (dimes < 0));

	// Quarters
	cout << "Super! ";
	do {
		cout << "How many quarters have you saved? ";
	} while (!getValidInt(quarters) || (quarters < 0));

	// Time Saved
	cout << "We're almost done! ";
	do {
		cout << "How many weeks have you been saving, " << name << "? ";
	} while (!getValidInt(timeSaved) || (timeSaved < 0));
	
	// Printing out the total monetary value of individual coin types.
	cout << setprecision(2) << "All done! Let me do some math for you...\n\nHere are your totals per coin type, " << name << ":\nQuarters: $" << (quarters * 25) / 100.0 << ", from " << quarters << " quarters.\nDimes: $" << (dimes * 10) / 100.0 << ", from " << dimes << " dimes.\nNickels: $" << (nickels * 5) / 100.0 << ", from " << nickels << " nickels.\nPennies: $" << pennies / 100.0 << ", from " << pennies << " pennies.\n\n";
	printSavingsStatement(timeSaved, pennies, nickels, dimes, quarters, name);

}
