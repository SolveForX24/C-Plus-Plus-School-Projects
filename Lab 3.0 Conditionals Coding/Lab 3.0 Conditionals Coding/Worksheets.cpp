#include "Worksheets.h"
#include <iostream>
#include <string>

/*
	Name: Xander Russell
	Date: 10/21/20
	Assignment: Lab 2.0 Conditionals
	Extra: Detailed in each section
*/
using namespace std;

string dummy = "a";

void worksheet1(string wsName) {
    cout << endl << "worksheet: " << wsName << endl << endl;
    
	// Logical Operators worksheet


	// Part 1: Dogs and Cats
	// EXTRA: Has a check for if you have 0 dogs or cats, and if you have a medley of dogs and cats, also prints out for that.
	int dogs;
	int cats;

	// Reading in info then using if and if else statements to print out the proper statement
	cout << "How many dogs do you have? ";
	cin >> dogs;
	cout << "How many cats do you have? ";
	cin >> cats;

	if (cats == 0 && dogs == 0) {
		cout << "No pets? D:\n\n";
	}
	else if (dogs == cats) {
		cout << "Do your cats and dogs get along?\n\n";
	}
	else if (dogs > 0 && cats == 0) {
		cout << "Guess you're a dog person!\n\n";
	}
	else if (cats > 0 && dogs == 0) {
		cout << "Guess you're a cat person!\n\n";
	}
	else {
		cout << "What a medley!\n\n";
	}

	// Part 2: Free money!

	int moneyAmount = 0;

	// Reading in input, running comparisons based on that input
	cout << "Please enter an integer between 50 and 100: ";
	cin >> moneyAmount;
	if (moneyAmount >= 50 && moneyAmount <= 100) {
		cout << "Congratulations! You earn $" << moneyAmount << " because you entered a number in the range!\n\n";
	}
	else {
		cout << "You didn't enter a number in range D: no money for you ):\n\n";
	}

	getline(cin, dummy);
}

void worksheet2(string wsName) {
    cout << endl << "worksheet: " << wsName << endl << endl;
    
	// Working with If Worksheet

	// Part 1: Heinz Number
	// EXTRA: Adds a check for the number 13
	int foodNum = 0;

	// Reading in input, running comparisons
	cout << "Please enter an integer: ";
	cin >> foodNum;
	if (foodNum == 57) {
		cout << "Hey that's the Heinz number!";
	}
	else if (foodNum == 13) {
		cout << "Why did you choose the unlucky number D:";
	}
	else {
		cout << "Just a plain old number |:";
	}

	// Part 2: Number in Range
	int numInRangeCheck = 0;

	// Reading in input, running comparisons
	cout << "\nPlease enter an integer within the range of 5 and 10, inclusive: ";
	cin >> numInRangeCheck;

	if (numInRangeCheck > 10) {
		cout << "That number is too big!\n\n";
	}
	else if (numInRangeCheck < 5) {
		cout << "That number is too low!\n\n";
	}
	else if (numInRangeCheck == 7) {
		cout << "Lucky number! :D\n\n";
	}
	else {
		cout << "Great! A number in range.\n\n";
	}
	
	getline(cin, dummy);

}

void worksheet3(string wsName) {
	cout << endl << "worksheet: " << wsName << endl << endl;

	// If Else Worksheet

	// Part 1: Can You Drive?
	// EXTRA: If you are less then 4 years old, has funny prompt.
	string name;
	int age = 0;

	// Reading in input 
	cout << "What is your name? ";
	getline(cin, name);

	cout << "What is your age? ";
	cin >> age;

	// Making comparisons
	if (age >= 16) {
		cout << "It's scary, " << name << ", you can drive now!\n\n";
	}
	else if (age < 4) {
		cout << "How are you using this program?\n\n";
	}
	else {
		cout << "You must wait " << 16 - age << " years until you can drive.\n\n";
	}

	// Part 2: Even or Odd

	int integerToCheck;

	// Reading in input
	cout << "What is the number you want to check? ";
	cin >> integerToCheck;

	// Making comparisons
	if ((integerToCheck & 2) == 1) {
		cout << "Your number is even!\n\n";
	}
	else {
		cout << "Your number is odd!\n\n";
	}

	// Part 3: Telegrams

	double wordsInTelegram;

	// Reading in input
	cout << "How many words are in your telegram? ";
	cin >> wordsInTelegram;

	// Making comparisons, doing some math

	if (wordsInTelegram <= 15) {
		cout << "Your telegram costs $8.50.\n\n";
	}
	else {
		cout << "Your telegram costs $" << 8.5 * ((wordsInTelegram - 15) * .25) << ".\n\n";
	}

	// Part 4: 
	getline(cin, dummy);
}

void worksheet4(string wsName) {
    std::cout << endl << "worksheet: " << wsName << endl << endl;
    //Put all code for worksheet 4 here
}

void worksheet5(string wsName) {
    std::cout << endl << "worksheet: " << wsName << endl << endl;
    //Put all code for worksheet 5 here
}
