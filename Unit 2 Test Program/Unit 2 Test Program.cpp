/*
    Name: Xander Russell
    Date: 10/29/21
    Assignment: Unit 2 Test
    Extra: Tells how much money is earned for each ghoul.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{

    cout.setf(ios::fixed);

    // Preparing variables

    string freddy = "Freddy Kruger";
    string frank = "Frank N. Stein";

    float freddySightings, frankSightings, totalSightings;

    // Reading in data
    cout << "How many sightings have there been of " << freddy << "? ";
    cin >> freddySightings;
    cout << "How many sightings have there been of " << frank << "? ";
    cin >> frankSightings;

    totalSightings = frankSightings + freddySightings;

    // Final print out of data and calculations.

    cout << freddy << " was sighted " << setprecision(0) << freddySightings << " times.\n" << frank << " was sighted " << frankSightings << " times.\n";
    cout << "That is a total of " << totalSightings << " sightings! Eek!\n";
    cout << "The total reward for ghoul sightings is $" << setprecision(2) << totalSightings * 5.95 << ".\n";

    // Calculating reward for specific ghouls and printing that out. 

    cout << "That's $" << freddySightings * 5.95 << " for " << freddy << " sightings, and $" << frankSightings * 5.95 << " for " << frank << " sightings.\n\nHappy Halloween!";

}
