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
void PiggyBank::calculateTotal() {
	float toReturn = ((pennies)+(nickels * 5) + (dimes * 10) + (quarters * 25)) / 100.0;
	
	cout << toReturn;
}

// Same as above, but returns result.
float PiggyBank::calculateTotalReturn() {
	float toReturn = ((pennies)+(nickels * 5) + (dimes * 10) + (quarters * 25)) / 100.0;
	return toReturn;
}

// Gets total, then divides by weeks saved to give rate at which money is saved.
void PiggyBank::calculateSavingRate() {
	float toReturn = (calculateTotalReturn()) / timeSaved;
	cout << toReturn;
}

// Same as above, but returns result.
float PiggyBank::calculateSavingRateReturn() {
	float toReturn = (calculateTotalReturn()) / timeSaved;
	return toReturn;
}

 // Takes 
void PiggyBank::calculateSavingsPerYear() {
	float toReturn = 52 * calculateSavingRateReturn();
	cout << toReturn;
}

float PiggyBank::calculateSavingsPerYearReturn() {
	float toReturn = 52 * calculateSavingRateReturn();
	return toReturn;
}

void PiggyBank::printSavingsStatement() {
	cout.setf(ios::fixed);
	cout << setprecision(2) << name << ", you have saved $" << calculateTotalReturn() << " overall.\nThat's $"; 
	calculateSavingRate();
	cout << " a week!\nGreat job, " << name << ", at this rate, you can save $";
	calculateSavingsPerYear();
	cout << " this year!";;

}

/*
ostream& operator<<(ostream& output, const PiggyBank& aPiggyBank) {

	output << "Private name data: " << aPiggyBank.name << endl <<
		"Private pennies data: " << aPiggyBank.pennies << endl <<
		"Private nickels data: " << aPiggyBank.nickels << endl <<
		"Private dimes data: " << aPiggyBank.dimes << endl <<
		"Private quarters data: " << aPiggyBank.quarters << endl <<
		"Private time saved data: " << aPiggyBank.timeSaved << endl;
	return output;
}
*/
