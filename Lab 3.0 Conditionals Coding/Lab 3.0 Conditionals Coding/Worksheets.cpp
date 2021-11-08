#include "Worksheets.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>;

/*
	Name: Xander Russell
	Date: 10/21/20
	Assignment: Lab 2.0 Conditionals
	Extra: 
		Worksheet 1: Has a check in if-else statement for if you have 0 dogs or cats, and if you have a medley of dogs and cats, also prints out for that in part 1.
		Worksheet 2: Adds a check in it-else statement for the number 13 in part 1.
		Worksheet 3: If you are less then 4 years old, then there is a funny prompt in part 1.
		Worksheet 4: Shows the difference in character length for the movie names in part 2.
		Worksheet 5: If number inputted is outside of range, then it prints how far from range that int is.
*/

using namespace std;

string dummy = "a";

void worksheet1(string wsName) {
    cout << endl << "worksheet: " << wsName << endl << endl;
    
	// Logical Operators worksheet
	// Extra in part 1


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
		cout << "You didn't enter a number in range. D: No money for you ):\n\n";
	}

	getline(cin, dummy);
}

void worksheet2(string wsName) {
    cout << endl << "worksheet: " << wsName << endl << endl;
    
	// Working with If Worksheet
	// Extra in part 1

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
		cout << "Great! A number in range between 5 and 10.\n\n";
	}
	
	getline(cin, dummy);

}

void worksheet3(string wsName) {
	cout << endl << "worksheet: " << wsName << endl << endl;

	// If Else Worksheet
	// Extra in part 1


	// Part 1: Can You Drive?
	// EXTRA: If you are less then 4 years old, then there is a funny prompt.
	string name;
	int age = 0;

	// Reading in input 
	cout << "What is your name? ";
	getline(cin, name);

	cout << "What is your age? ";
	cin >> age;

	// Making comparisons
	if (age >= 17) {
		cout << "It's scary, " << name << ", you can drive now!\n\n";
	}
	else if (age < 4) {
		cout << "How are you using this program?\n\n";
	}
	else {
		cout << "You must wait " << 17 - age << " year(s) until you can drive.\n\n";
	}

	// Part 2: Even or Odd

	int integerToCheck;

	// Reading in input
	cout << "What is the number you want to check? ";
	cin >> integerToCheck;

	// Making comparisons
	if ((integerToCheck % 2) == 1) {
		cout << "Your number is odd!\n\n";
	}
	else {
		cout << "Your number is even!\n\n";
	}

	// Part 3: Telegrams

	double wordsInTelegram;
	cout.setf(ios::fixed);

	// Reading in input
	cout << "How many words are in your telegram? ";
	cin >> wordsInTelegram;

	// Making comparisons, doing some math

	if (wordsInTelegram <= 15) {
		cout << "Your telegram costs $8.50.\n\n";
	}
	else {
		cout << "Your telegram costs $" << setprecision(2) << 8.5 + ((wordsInTelegram - 15) * .25) << ".\n\n";
	}

	// Part 4: Song Qualifications 

	int birthYear;
	string fruit;

	// Reading in input to determine qualification for the juke box rally and song to print.

	cout << "What is your birth year? ";
	cin >> birthYear;

	if (birthYear < 1970) {
		cout << "You qualify for the Juke Box Rally\n";
	}

	cout << "What is your favorite fruit in lowercase? ";
	cin >> fruit;

	if (fruit == "strawberry") {
		cout << "Strawberry Fields Forever\n\n";
	}
	else {
		cout << "Bye, bye Miss American Pie\n\n";
	}

	// Part 5: Order Of Ints

	int intOne;
	int intTwo;

	// Getting input, running comparisons.
	cout << "Please enter two integers: \n";
	cin >> intOne >> intTwo;

	
	if (intOne > intTwo) {
		cout << "In ascending order: ";
		cout << intTwo << " " << intOne << "\n\n";
	}
	else if (intTwo > intOne) {
		cout << "In ascending order: ";
		cout << intOne << " " << intTwo << "\n\n";
	}
	else {
		cout << "The integers are equal.\n\n";
	}

	// Part 6: Art Fee

	int ageArt;

	// Getting input, running comparisons.
	cout << "What is your age? ";
	cin >> ageArt;

	if (ageArt <= 5) {
		cout << "Entry fee: $0.00. You get in free because you are so young.\n\n";
	}
	else if (ageArt >= 65) {
		cout << "Entry fee: $1.50.\n\n";
	}
	else {
		cout << "Entry fee: $2.50.\n\n";
	}

	getline(cin, dummy);
}

void worksheet4(string wsName) {
	std::cout << endl << "worksheet: " << wsName << endl << endl;

	// More Working with If-Else
	// Extra in part 2


	// Part 1: Password 

	string password = "password";
	string attempt;

	// Input, comparisons
	cout << "What is the password? ";
	getline(cin, attempt);

	if (attempt == password) {
		cout << "Access granted.\n\n";
	}
	else {
		cout << "WHO ARE YOU? I'M CALLING THE COPS HACKER\n\n";
	}

	// Part 2: Movie Length
	// EXTRA: Shows the difference in character length for the movie names.

	string movieOne, movieTwo;
	int movieOneLength, movieTwoLength;

	// We read in strings, then add it's length to integers.
	cout << "What is your first movie? ";
	getline(cin, movieOne);
	movieOneLength = movieOne.length();

	cout << "What is your second movie? ";
	getline(cin, movieTwo);
	movieTwoLength = movieTwo.length();

	// Comparing those length integers
	if (movieOneLength > movieTwoLength) {
		cout << "Your first movie, " << movieOne << ", is longer than your second movie, " << movieTwo << ", by " << movieOneLength - movieTwoLength << " characters.\n\n";
	}
	else if (movieTwoLength > movieOneLength) {
		cout << "Your second movie, " << movieTwo << ", is longer than your first movie, " << movieOne << ", by " << movieTwoLength - movieOneLength << " characters.\n\n";
	}
	else {
		cout << "Your movies are equal in character length.\n\n";
	}

	// Part 3: Reformatting Hard Drives

	string continueOn;

	// Reading in input, comparing to strings.
	cout << "This program may reformat your hard drive. Do you want to continue? (y/n) ";
	getline(cin, continueOn);

	if (continueOn == "y") {
		cout << "So long, data! :)\n\n";
	}
	else if (continueOn == "n") {
		cout << "Caught in the act! D: Your data is safe.\n\n";
	}
	else {
		cout << "... That is neither a yes or no, but I'll take that as a yes! :)\n\n";
	}

	//getline(cin, dummy);
}

void worksheet5(string wsName) {
    std::cout << endl << "worksheet: " << wsName << endl << endl;
    
	// Worksheet Switch
	// Extra is in part 2


	// Part 1: Grades

	// Getting grade char
	char grade;
	cout << "What is your grade? (Enter A, B, C, D, or F) \n";
	cin >> grade;

	// Switch statement: Based on char variable, prints different messsage.

	switch (grade) {
		case 'A':
			cout << "Your work is outstanding!\n";
			break;
		case 'B':
			cout << "You are doing good work!\n";
			break;
		case 'C':
			cout << "Your work is satisfactory.\n";
			break;
		case 'D':
			cout << "You need to work a little harder.\n";
			break;
		case 'F':
			cout << "Please see me for extra help!\n";
			break;

	}

	// Part 2: Number Type
	// EXTRA: If number inputted is outside of range, then it prints how far from range that int is.

	// Getting toCheck int
	int toCheck;
	cout << "What number do you want to check between 1 and 10, inclusive? ";
	cin >> toCheck;

	// Switch statement to print message based on toCheck int.

	switch (toCheck) {
		case 1:
		case 3:
			cout << "Your number is a low odd number.\n";
			break;
		case 2:
		case 4:
			cout << "Your number is a low even number.\n";
			break;
		case 5:
			cout << "Your number is the middle odd number.\n";
			break;
		case 6:
			cout << "Your number is the middle even number.\n";
			break;
		case 7:
		case 9:
			cout << "Your number is a high odd number.\n";
			break;
		case 8:
		case 10:
			cout << "Your number is a high even number.\n";
			break;
		default:
			if (toCheck < 1) {
				cout << "Your number is not in range. It is " << abs(1 - toCheck) << " number(s) away from being in range.\n";
			}
			else if (toCheck > 10) {
				cout << "Your number is not in range. It is " << abs(toCheck - 10) << " number(s) away from being in range.\n";
			}
			else {
				cout << "Something has gone wrong. I'm not entirely sure how you are seeing this.";
			}
	}

	getline(cin, dummy);

}
