/*
	Name: Xander Russell
	Code: PiggyBank Class
	Date: Began 12/8/21
*/

#include "PiggyBank.h"
#include <iostream>
#include <iomanip>

using namespace std;
PiggyBank::PiggyBank() {}
PiggyBank::PiggyBank(string na, float p, float n, float d, float q, float l) {
	name = na;
	pennies = p;
	nickels = n;
	dimes = d;
	quarters = q;
	timeSaved = l;
}

string PiggyBank::getName() {
	return name;
}

float PiggyBank::getPennies() {
	return pennies;
}

float PiggyBank::getNickels() {
	return nickels;
}

float PiggyBank::getDimes() {
	return dimes;
}

float PiggyBank::getQuarters() {
	return quarters;
}

float PiggyBank::getTimeSaved() {
	return timeSaved;
}

float PiggyBank::calculateTotal() {
	return (pennies)+(nickels * 5) + (dimes * 10) + (quarters * 25);
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