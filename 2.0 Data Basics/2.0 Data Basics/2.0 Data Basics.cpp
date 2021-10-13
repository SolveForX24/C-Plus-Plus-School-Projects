// 2.0 Data Basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

    int threeDigit;
    cout << "\nWhat 3 digit number would you like to use? ";
    cin >> threeDigit;
    int digitOne = threeDigit / 100;
    cout << "First Digit: " << digitOne;
    int digitTwo = threeDigit / 10 / 10;
    cout << "\nSecond Digit: " << digitTwo;

    // This section is the "Using Strings" worksheet
    // EXTRA: Adds your name to the printing out of the birthday and color.

    // Concatenation
    string instagramName;
    cout << "\nPlease enter your instagram handle: ";
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

    string userBirthday;
    string userColor;
    cout << "\nPlease enter your birthday: ";
    getline(cin, userBirthday);
    cout << "Please enter your favorite color: ";
    getline(cin, userColor);
    cout << userName << "'s birthday: " << userBirthday << "\n" << userName << "'s favorite color: " << userColor;

    // Counting characters
    string sentence;
    cout << "\nPlease enter a 5 word sentence: ";
    getline(cin, sentence);
    cout << "The amount of characters in your sentence, which was \"" << sentence << "\", is " << sentence.length() << ". (Includes spaces)";


    // This section is the code for the worksheet "Using cin and setprecision"\
    // EXTRA: The Burger Joint also sells milkshakes for $1.50

    // Pizza Place
    double pizzaPrice;
    int pizzaSize;
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

    cout << "\nHow many burgers would you like? ";
    cin >> burgers;
    cout << "How many fries would you like? ";
    cin >> fries;
    cout << "How many sodas would you like? ";
    cin >> sodas;
    cout << "How many shakes would you like? ";
    cin >> shakes;
    cost = (burgers * 1.99) + (fries * .99) + (sodas * 1.1) + (shakes * 1.5);
    tax = cost * 0.07;
    finalCost = cost + tax;
    cout << "Cost before tax: $" << cost << "\nTax: $" << tax << "\nTotal cost: $" << finalCost;

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
