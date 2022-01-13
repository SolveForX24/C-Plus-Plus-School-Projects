/*

    Name: Xander Russell
    Lab: Circle Lab
    Date: 1/13/22
    Extra: The user can choose how many radii to check,

*/
#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

float calculateArea(float);
float calculateVolume(float);

int main()
{

    float currentArea;
    float currentVolume;
    int loops;
    
    cout.setf(ios::fixed);
    cout << setprecision(2);

    cout << "How many radii do you want to check? ";
    cin >> loops;

    for (int i = 1; i <= loops; i++) {
        currentArea = calculateArea(i);
        cout << "With radius " << i << ", the area of the circle is " << currentArea << ".\n";
        if ((i % 2) == 0) {
            currentVolume = calculateVolume(i);
            cout << "Since radius " << i << " is even, we'll calculate the volume of a sphere. The volume is " << currentVolume << ".\n";
        }
    }
}

float calculateArea(float r) {
    return M_PI	 * (r * r);
}

float calculateVolume(float r) {
    return ((4) * (M_PI) * (r * r * r)) / 3;
}