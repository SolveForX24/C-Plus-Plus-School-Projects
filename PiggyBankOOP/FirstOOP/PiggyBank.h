/*
	Name: Xander Russell
	Code: PiggyBank Class Header
	Date: Began 12/8/21
*/

#pragma once

#include <iostream>
#include <string>


class PiggyBank
{
private:
	std::string name = "a";
	float pennies = 0;
	float nickels = 0;
	float dimes = 0;
	float quarters = 0;
	float timeSaved = 0;
public:
	
	// Constructors
	PiggyBank();
	PiggyBank(std::string, float, float, float, float, float);
	
	// Getters
	std::string getName();
	float getPennies();
	float getNickels();
	float getDimes();
	float getQuarters();
	float getTimeSaved();

	// Useful functions
	float calculateTotal();

	//friend std::ostream& operator<<(std::ostream&, const PiggyBank&);
};

