// 2.0 Data Basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Name: Xander Russell
    Date: 10/15/21
    Lab: 2.0 Data Basics
    Extra: Detailed in each section's header.
*/

#include <iostream>
#include <string>;
#include <iomanip>;

using namespace std;

int main()
{
    cout << "Hello World!\n";

    // This is all part of the worksheet "Using Division"

    // Dividing a number and using modulus
    int teamMemberCounts;
    cout << "How many members are on the team? ";
    cin >> teamMemberCounts;
    int teamCount = teamMemberCounts / 5;
    cout << "There will be " << teamCount << " teams of 5 with " << teamMemberCounts % 5 << " students left over.";

    // Using division and modulus to seperate the digits of a 3 digit number, then adding and multyplying them togeter.
    int threeDigit;
    cout << "\nWhat 3 digit number would you like to use? ";
    cin >> threeDigit;
    int digitOne = threeDigit / 100;
    cout << "First Digit: " << digitOne;
    int digitTwo = (threeDigit % 100) / 10;
    cout << "\nSecond Digit: " << digitTwo;
    int digitThree = threeDigit % 10;
    cout << "\nThird Digit: " << digitThree;
    cout << "\nThe sum of the digits is " << (digitOne + digitTwo + digitThree) << ", and the product is " << (digitOne * digitTwo * digitThree) << ".";

    // This section is the "Using Strings" worksheet
    // EXTRA: Adds your name to the printing out of the age and color.

    // Concatenation
    string instagramName;
    cout << "\n\nPlease enter your instagram handle: ";
    cin >> instagramName;
    cout << instagramName + " has +1M followers";

    // Changing the string
    string person = "\nCharlie Brown";
    cout << person;
    person = "\nXander Russell";
    cout << person;

    // Reading in info, using find() to determine the length of the city name.
    string userName;
    string userAddress;
    string userCityStateZip;
    string filler;

    getline(cin, filler);
    cout << "\nPlease enter your name: ";
    getline(cin, userName);
    cout << "Please enter your street address: ";
    getline(cin, userAddress);
    cout << "Please enter your city, state and zip code: ";
    getline(cin, userCityStateZip);
    int lengthOfCityName;
    lengthOfCityName = userCityStateZip.find(",") - 1;
    cout << "Length of city name: " << lengthOfCityName;

    // Using substring to print name correctly.
    string luke = "Skywalker, Luke";
    cout << "\n" << luke.substr(11, 4) << " " << luke.substr(0, 9);

    // Simple reading in strings, then printing them out.
    string userAge;
    string userColor;
    cout << "\nPlease enter your age: ";
    getline(cin, userAge);
    cout << "Please enter your favorite color: ";
    getline(cin, userColor);
    cout << userName << "'s age: " << userAge << "\n" << userName << "'s favorite color: " << userColor;

    // Counting characters
    string sentence;
    cout << "\nPlease enter a 5 word sentence: ";
    getline(cin, sentence);
    cout << "The amount of characters in your sentence, which was \"" << sentence << "\", is " << sentence.length() << ". (Includes spaces)";


    // This section is the code for the worksheet "Using cin and setprecision"\
    // EXTRA: The Burger Joint also sells milkshakes for $1.50, and if you don't give enough money for the Burger Joint you get kicked out of the store

    // Pizza Place
    double pizzaPrice;
    int pizzaSize;

    // Gets size input, establishes a setPrecision, and calculates cost of the pizza.
    cout << "\n\nHow big do you want your pizza to be (inches across)? ";
    cin >> pizzaSize;
    pizzaPrice = (0.05 * pizzaSize * pizzaSize) + 1.2;
    cout.setf(ios::fixed);
    cout << "Your pizza will cost $" << setprecision(2) << pizzaPrice << ".";

    // Burger Joint
    int burgers;
    int fries;
    int sodas;
    int shakes;
    double cost;
    double tax;
    double finalCost;
    double tenderedMoney;

    // Assigning input to variables.
    cout << "\nHow many burgers ($1.99) would you like? ";
    cin >> burgers;
    cout << "How many fries ($.99) would you like? ";
    cin >> fries;
    cout << "How many sodas ($1.10) would you like? ";
    cin >> sodas;
    cout << "How many shakes ($1.50) would you like? ";
    cin >> shakes;

    // Calculating cost, tax and total cost, then printing out that information.
    cost = (burgers * 1.99) + (fries * .99) + (sodas * 1.1) + (shakes * 1.5);
    tax = cost * 0.07;
    finalCost = cost + tax;
    cout << "Cost before tax: $" << cost << "\nTax: $" << tax << "\nTotal cost: $" << finalCost;

    // Getting amount tendered, then checking if amount is more then cost. If not, get kicked out. Else, provide change.
    cout << "\nHow much money have you tendered? $";
    cin >> tenderedMoney;
    if (tenderedMoney < finalCost) {
        cout << "That isn't enough money! Get out of my store!";
    }
    else {
        cout << "The amount of change is $" << (tenderedMoney - finalCost);
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
