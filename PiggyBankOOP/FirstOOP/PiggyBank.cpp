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

// This code found here: https://www.geeksforgeeks.org/rounding-floating-point-number-two-decimal-places-c-c/
float PiggyBank::round(float var) {
	// 37.66666 * 100 =3766.66
	// 3766.66 + .5 =3767.16    for rounding off value
	// then type cast to int so value is 3767
	// then divided by 100 so the value converted into 37.67
	float value = (int)(var * 100 + .5);
	return (float)value / 100;
}

float PiggyBank::calculateTotal() {
	float toReturn = ((pennies)+(nickels * 5) + (dimes * 10) + (quarters * 25))/100.0;
	round(toReturn);
	return toReturn;
}

float PiggyBank::calculateSavingRate() {
	float toReturn = (calculateTotal()) / timeSaved;
	round(toReturn);
	return toReturn;
}

float PiggyBank::calculateSavingsPerYear() {
	float toReturn = (52 / timeSaved) * (calculateTotal());
	round(toReturn);
	return toReturn;
}

string PiggyBank::printSavingsStatement() {
	string output = name + ", you have saved $" + to_string(calculateTotal()) + " overall.\nThat's $" + to_string(calculateSavingRate()) + " a week!\nGreat job, " + name + ", at this rate, you can save $" + to_string(calculateSavingsPerYear()) + " this year!";
	return output;
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
