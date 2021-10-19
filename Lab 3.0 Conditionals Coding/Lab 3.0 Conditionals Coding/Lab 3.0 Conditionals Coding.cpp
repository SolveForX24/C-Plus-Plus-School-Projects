/*
	Name: Xander Russell
	Lab: Lab 3.0 Conditionals
	Date: 10/19/21
	Extra Thing: Described in each section
*/

#include <iostream>

using namespace std;

int main()
{
	// Logical Operators worksheet

	int dogs;
	int cats;

	// Reading in info then using if and if else statements to print out the proper statement
	cout << "How many dogs do you have? ";
	cin >> dogs;
	cout << "How many cats do you have? ";
	cin >> cats;

	if (dogs == cats) {
		cout << "Do your cats and dogs get along?";
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
