/*
    Name: Xander Russell
    Lab: Lab 2.1 Data Basics
    Date: 10/15/21
    Extra Thing: 
*/

#include <iostream>

using namespace std;

int main()
{

    // These first two questions are the main worksheet
    // Extra: If you eat more then 7 slices of pizza, your eating skills get applauded.

    // Celsius to Fahrenheit

    // Inital variable
    double celsius;

    // Reading in the Celsius to instantiated variable, then printing out it's conversion.
    cout << "What is the Celsius temperature you want converted? ";
    cin >> celsius;
    cout << "The Fahrenheit temperature is " << 1.8 * celsius + 32 << " degrees.";

    // Calories to Burn

    // Initial slices variable
    int slices;

    cout << "\n\nHow many pizza slices did you eat? ";
    cin >> slices;
    if (slices > 7) {
        cout << "I applaud your eating abilities.";
    }
    cout << "You should jog " << (slices * 375) / 100 << " miles to burn off those " << slices * 375 << " calories!";

    // The rest is the "More Problems" worksheet.

    // Pounds to ounces.
    int pounds;

    // Reading in the pounds to instantiated variable, then printing out it's conversion.
    cout << "\n\n\nWhat is the weight of your package in pounds? ";
    cin >> pounds ;
    cout << "The weight of your package in ounces is " << pounds * 16 << " ounces.";

    // Inches to feet and inches.
    int inches;

    // Reading in the inches to instantiated variable, then printing out it's conversion.
    cout << "\nWhat is your height in inches? ";
    cin >> inches;
    cout << "Your height in feet and inches is " << inches / 12 << " feet and " << inches % 12 << " inches.";
}


