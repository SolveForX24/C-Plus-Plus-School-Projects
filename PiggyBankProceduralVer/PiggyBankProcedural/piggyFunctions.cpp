/*
	Name: Xander Russell
	Date: 12/22/21
	Code: Functions for Piggy Bank
*/

#include "piggyFunctions.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Calculates the total based on input and conversion factors.
float calculateTotalReturn(int p, int n, int d, int q) {
	float toReturn = ((p)+(n * 5) + (d * 10) + (q * 25)) / 100.0;
	return toReturn;
}

// NOTE: I call a variable into these functions so that we can modify specifically the amount of time we are checking.


// Gets total, then divides by weeks saved to give rate at which money is saved.
float calculateSavingRateReturn(int timeSaved, int p, int n, int d, int q) {
	float toReturn = (calculateTotalReturn(p, n, d, q)) / timeSaved;
	return toReturn;
}

// Returns 52 times the saving rate to show the amount saved in a year.
float calculateSavingsPerYearReturn(int timeSaved, int p, int n, int d, int q) {
	float toReturn = 52 * calculateSavingRateReturn(timeSaved, p, n, d, q);
	return toReturn;
}

void printSavingsStatement(int timeSaved, int p, int n, int d, int q, string name) {

	// Setting precision
	cout.setf(ios::fixed);
	// First chunk
	cout << setprecision(2) << name << ", you have saved $" << calculateTotalReturn(p, n, d, q) << " overall.\nThat's $" << calculateSavingRateReturn(timeSaved, p, n, d, q) << " a week!";
	// If saving for more then a year, calculate the specific amount saved in the year.
	if (timeSaved > 52) {
		cout << "\nGreat job, " << name << ", you saved $" << (calculateSavingRateReturn(timeSaved, p, n, d, q) * 52) << " in one year! You're still on track now to save the same amount in total in the new year!";
	}
	// If saving for EXACTLY a year, print a special message.
	else if (timeSaved == 52) {
		cout << "\nGreat job, " << name << ", you saved $" << calculateTotalReturn(p, n, d, q) << " this past year! Can you save that much again in this next year?";
	} // Else, just print how much you could save this year.
	else {
		cout << "\nGreat job, " << name << ", at this rate, you can save $" << calculateSavingsPerYearReturn(timeSaved, p, n, d, q) << " this year!";
	}


}