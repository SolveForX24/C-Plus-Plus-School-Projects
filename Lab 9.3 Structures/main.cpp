/*
    Name: Xander Russell
    Lab: Lab 9.3 Structures
    Date: 5/11/22
    Extra: Error trapped
*/
#include <iostream>
#include <string>
#include "console.h"

using namespace std;

struct ADDITIONAL_STATS_ROCKET {
    int fuelCap;
    int rocketWeight;
};

struct ROCKET_TYPE {
    string name, housing;
    int firstYear;
    ADDITIONAL_STATS_ROCKET additionalStatsRocket{};
};

ROCKET_TYPE createRocket();

int main() {
    ROCKET_TYPE rocket72 = createRocket();
    cout << "Rocket 72's housing: " << rocket72.housing << endl;
}

// Creates a rocket structure
ROCKET_TYPE createRocket() {

    ROCKET_TYPE current;

    // Get details and add to ROCKET_TYPE
    cout << "Please enter the name of the rocket: ";
    getline(cin, current.name);
    cout << "Please enter the name of the place the rocket is stored in: ";
    getline(cin, current.housing);
    current.firstYear = prompt_int("Please enter the year of " + current.name + "'s first flight: ");
    current.additionalStatsRocket.fuelCap = prompt_int("Please enter the fuel cap of " + current.name + ": ");
    current.additionalStatsRocket.rocketWeight = prompt_int("Please enter the weight of " + current.name + ": ");

    return current;
}