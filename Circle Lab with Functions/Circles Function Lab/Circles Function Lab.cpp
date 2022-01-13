/*

    Name: Xander Russell
    Lab: Circle Lab
    Date: 1/13/22
    Extra: The user can choose how many radii to check,

*/

// Defines and includes to use pi and setprecision, as well as namespace.
#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Functions
float calculateArea(float);
float calculateVolume(float);

int main()
{
    
    // Variables and precision setup
    float currentArea;
    float currentVolume;
    int loops;
    
    cout.setf(ios::fixed);
    cout << setprecision(1);
    
    // Getting number of loops to run, or radii to check.
    cout << "How many radii do you want to check? ";
    cin >> loops;
    
    // Loops number of times inputted.
    for (int i = 1; i <= loops; i++) {
        // Runs calculateArea with loop count, saves to variable. Then print out result.
        currentArea = calculateArea(i);
        cout << "With radius " << i << ", the area of the circle is " << currentArea << ".\n";
        // If the loop we are on is even, then calculateVolume, and print out that result as well.
        if ((i % 2) == 0) {
            currentVolume = calculateVolume(i);
            cout << "Since radius " << i << " is even, we'll calculate the volume of a sphere. The volume is " << currentVolume << ".\n";
        }
    }
}

// Simple area calculation, just pi * the radius squared.
float calculateArea(float r) {
    return M_PI	 * (r * r);
}

// Bit more complex, we split up the fraction 4/3 so that it multiplies together, but pi * the radius cubed remains the same.
float calculateVolume(float r) {
    return ((4) * (M_PI) * (r * r * r)) / 3;
}
