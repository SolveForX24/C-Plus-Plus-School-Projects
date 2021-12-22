/*
	Name: Xander Russell
	Code: PiggyBank Class Header
	Date: Began 12/8/21
*/

#pragma once

#include <iostream>
#include <iomanip>
#include <string>


class PiggyBank
{
	// Variables
private:
	std::string name = "EMPTY";
	int pennies = 0;
	int nickels = 0;
	int dimes = 0;
	int quarters = 0;
	int timeSaved = 0;
public:
	
	// Constructors
	PiggyBank();
	PiggyBank(std::string, int, int, int, int, int);
	
	// Getters
	std::string getName();
	int getPennies();
	int getNickels();
	int getDimes();
	int getQuarters();
	int getTimeSaved();

	// Object functions
	float calculateTotalReturn();
	float calculateSavingRateReturn(int);
	float calculateSavingsPerYearReturn(int);
	void printSavingsStatement();

	friend std::ostream& operator<<(std::ostream&, const PiggyBank&);
};

