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
	while (!getValidIntNoNeg(pennies)) {
		cout << "Sorry, that's not a proper penny amount. Please try again: ";
	}
	cout << "Great! How many nickels have you saved? ";
	while (!getValidIntNoNeg(nickels)) {
		cout << "Sorry, that's not a proper nickel amount. Please try again: ";
	}
	cout << "Awesome. How many dimes have you saved, " << name << "? ";
	while (!getValidIntNoNeg(dimes)) {
		cout << "Sorry, that's not a proper dime amount. Please try again: ";
	}
	cout << "Super! How many quarters have you saved? ";
	while (!getValidIntNoNeg(quarters)) {
		cout << "Sorry, that's not a proper quarters amount. Please try again: ";
	}
	cout << "We're almost done! How many weeks have you been saving, " << name << "? ";
	while (!getValidIntNoNegNoZero(timeSaved)) {
		cout << "Sorry, that's not a proper week amount. Please try again: ";
	}

	cout << setprecision(2) << "All done! Let me do some math for you...\n\nHere are your totals per coin type, " << name << ":\nQuarters: $" << (quarters * 25) / 100.0 << ", from " << quarters << " quarters.\nDimes: $" << (dimes * 10) / 100.0 << ", from " << dimes << " dimes.\nNickels: $" << (nickels * 5) / 100.0 << ", from " << nickels << " nickels.\nPennies: $" << pennies / 100.0 << ", from " << pennies << " pennies.\n\n";

	PiggyBank bank(name, pennies, nickels, dimes, quarters, timeSaved);
	bank.printSavingsStatement();

}
