/*
	Name: Xander Russell
	Code: PiggyBank Class
	Date: Began 12/8/21
*/

#include "PiggyBank.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Constructor
PiggyBank::PiggyBank() {}
PiggyBank::PiggyBank(string na, int p, int n, int d, int q, int l) {
	name = na;
	pennies = p;
	nickels = n;
	dimes = d;
	quarters = q;
	timeSaved = l;
	//cout << "Constructed";
}

// Getters
string PiggyBank::getName() {
	return name;
}

int PiggyBank::getPennies() {
	return pennies;
}

int PiggyBank::getNickels() {
	return nickels;
}

int PiggyBank::getDimes() {
	return dimes;
}

int PiggyBank::getQuarters() {
	return quarters;
}

int PiggyBank::getTimeSaved() {
	return timeSaved;
}


// Calculates the total based on input and conversion factors.
float PiggyBank::calculateTotalReturn() {
	float toReturn = ((pennies)+(nickels * 5) + (dimes * 10) + (quarters * 25)) / 100.0;
	return toReturn;
}

// NOTE: I call a variable into these functions so that we can modify specifically the amount of time we are checking.


// Gets total, then divides by weeks saved to give rate at which money is saved.
float PiggyBank::calculateSavingRateReturn(int timeSaved) {
	float toReturn = (calculateTotalReturn()) / timeSaved;
	return toReturn;
}

 // Returns 52 times the saving rate to show the amount saved in a year.
float PiggyBank::calculateSavingsPerYearReturn(int timeSaved) {
	float toReturn = 52 * calculateSavingRateReturn(timeSaved);
	return toReturn;
}

void PiggyBank::printSavingsStatement() {

	// Setting precision
	cout.setf(ios::fixed);
	// First chunk
	cout << setprecision(2) << name << ", you have saved $" << calculateTotalReturn() << " overall.\nThat's $" << calculateSavingRateReturn(timeSaved) << " a week!";
	// If saving for more then a year, calculate the specific amount saved in the year.
	if (timeSaved > 52) {
		cout << "\nGreat job, " << name << ", you saved $" << (calculateSavingRateReturn(timeSaved) * 52)  << " in one year! You're still on track now to save the same amount in total in the new year!";
	}
	// If saving for EXACTLY a year, print a special message.
	else if (timeSaved == 52) {
		cout << "\nGreat job, " << name << ", you saved $" << calculateTotalReturn() << " this past year! Can you save that much again in this next year?";
	} // Else, just print how much you could save this year.
	else {
		cout << "\nGreat job, " << name << ", at this rate, you can save $" << calculateSavingsPerYearReturn(timeSaved) << " this year!";
	}
	

}


ostream& operator<<(ostream& output, const PiggyBank& aPiggyBank) {

	output << "Private name data: " << aPiggyBank.name << endl <<
		"Private pennies data: " << aPiggyBank.pennies << endl <<
		"Private nickels data: " << aPiggyBank.nickels << endl <<
		"Private dimes data: " << aPiggyBank.dimes << endl <<
		"Private quarters data: " << aPiggyBank.quarters << endl <<
		"Private time saved data: " << aPiggyBank.timeSaved << endl;
	return output;
}

