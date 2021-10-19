/*
    Name: Xander Russell
    Lab: Lab 2.1 Data Basics
    Date: 10/15/21
    Extra Thing: Described in each section
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

    cout << "\nHow many pizza slices did you eat? ";
    cin >> slices;
    if (slices > 7) {
        cout << "I applaud your eating abilities. ";
    }
    cout << "You should jog " << (slices * 375) / 100 << " miles to burn off those " << slices * 375 << " calories!";

    // The rest is the "More Problems" worksheet.

    // Pounds to ounces.
    int pounds;

    // Reading in the pounds to instantiated variable, then printing out it's conversion.
    cout << "\n\n\nWhat is the weight of your package in pounds? ";
    cin >> pounds;
    cout << "The weight of your package in ounces is " << pounds * 16 << " ounces.";

    // Inches to feet and inches.
    int inches;

    // Reading in the inches to instantiated variable, then printing out it's conversion.
    cout << "\nWhat is your height in inches? ";
    cin >> inches;
    cout << "Your height in feet and inches is " << inches / 12 << " feet and " << inches % 12 << " inches.";

    // Adding 15 years to your life.
    int age;
    
    // Reading in info into age variable, adding 15 to it.
    cout << "\nWhat is your age? ";
    cin >> age;
    cout << "In a decade and a half, you will be " << age + 15 << " years old.";

    // Miles per Gallon
    double miles;
    double gallons;

    // Reading in info, then dividing the variables.
    cout << "\nPlease enter the amount of miles you drove on your trip: ";
    cin >> miles;
    cout << "Please enter the amount of gallons of gas you used on your trip: ";
    cin >> gallons;
    cout << "You achieved " << miles / gallons << " miles per gallon on your trip.";

    // Years to days
    // EXTRA: Also shares the amount of full months you've lived.
    int years;

    const int days = 365;
    const int months = 12;

    // Reading in info, then multiplying.
    cout << "\nPlease enter the amount of years you have lived: ";
    cin >> years;
    cout << "You have lived at least " << years * days << " days and " << years * months << " months.";

    // Spam email.
    int spamMail = 55;
    cout << "\nAmount of spam emails: " << spamMail << "\nSpam emails times 2: " << spamMail * 2 << "\nSpam emails squared: " << spamMail * spamMail;

    // Precious metals.
    double goldWeight;
    const double ouncesInPound = 12;
    const double gramsInOunces = 31.1034768;

    cout << "\nWhat is the weight of your precious metal in troy pounds? ";
    cin >> goldWeight;
    cout << "The weight of your metal in grams is " << (goldWeight * ouncesInPound) * gramsInOunces << ".";

}
