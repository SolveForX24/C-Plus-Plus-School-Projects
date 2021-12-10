#include <iostream>
#include "FirstClass.h"
#include "PiggyBank.h"
#include "GetData.h"
#include <iomanip> 
using namespace std;

int main()
{

	cout.setf(ios::fixed);

	string name = "EMPTY";
	int pennies = 0;
	int nickels = 0;
	int dimes = 0;
	int quarters = 0;
	int timeSaved = 0;
	
	string dummy = "EMPTY";

	cout << "Hello, there! What's your name? ";
	getline(cin, name);
	

	cout << "Hi, " << name << "! How many pennies have you saved? ";
	while (!getValidInt(pennies)) {
		cout << "Sorry, that's not a proper penny amount. Please try again: ";
	}
	cout << "Great! How many nickels have you saved? ";
	while (!getValidInt(nickels)) {
		cout << "Sorry, that's not a proper nickel amount. Please try again: ";
	}
	cout << "Awesome. How many dimes have you saved, " << name << "? ";
	while (!getValidInt(dimes)) {
		cout << "Sorry, that's not a proper dime amount. Please try again: ";
	}
	cout << "Super! How many quarters have you saved? ";
	while (!getValidInt(quarters)) {
		cout << "Sorry, that's not a proper quarters amount. Please try again: ";
	}
	cout << "We're almost done! How many weeks have you been saving, " << name << "? ";
	while (!getValidInt(timeSaved)) {
		cout << "Sorry, that's not a proper week amount. Please try again: ";
	}

	cout << "All done! Let me do some math for you...\n\n";

	PiggyBank bank(name, pennies, nickels, dimes, quarters, timeSaved);
	cout << setprecision(2) << bank.printSavingsStatement();

}
