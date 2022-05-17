/*
    Name: Xander Russell
    Lab: Lab 9.3 Structures
    Date: 5/11/22
    Extra: Error trapped
*/

// Includes and defines
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
void SelectionSort(ROCKET_TYPE [140]);

int main() {
    // Call the function to create rocket72
    cout << "Making rocket72: \n";
    ROCKET_TYPE rocket72 = createRocket();
    cout << "Rocket 72's housing: " << rocket72.housing << endl;

    // Generate array of rockets.
    ROCKET_TYPE rocketArray[140] = {};

    // Set up randomization seed
    //cout << "About to randomize:\n";
    srand(time(NULL));
    //cout << "Seed generated\n";
    int randDummy = rand() % 2 + 1; // generate a num between 1 and 2 to reset randomness
    //cout << "randDummy generated: " << randDummy << "\n";

    // Generates "names" for the rocket by generating a bunch of random ints.
    int generatedInt;

    for (int i = 0; i < 140; i++) {
        generatedInt = rand() % 99999 + 1; // generate a num between 1 and 99999
        //cout << "Generated Int: " << generatedInt << "\nInt i: " << i << "\n";
        rocketArray[i].name = to_string(generatedInt);
    }

    // Call selection sort and print out required info.
    SelectionSort(rocketArray);
    cout << "\nRandom Array Made and Sorted by Name\n";
    cout << "15th cell's name (16 in list): " << rocketArray[15].name;

    // Print out the sorted array.
    cout << "\n\nRandom generated names sorted:\n";
    for (int i = 0; i < 140; i++) {
        cout << "#" << i+1 << ": " << rocketArray[i].name << "\n";
    }
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

// Selection Sort Function for Descending Order, modified for custom structure.
void SelectionSort(ROCKET_TYPE num[140])
{
    int i, j, first;
    string temp;
    int numLength = 140;
    for (i= numLength - 1; i > 0; i--)
    {
        first = 0; // initialize to subscript of first element
        for (j=1; j<=i; j++) // locate smallest between positions 1 and i.
        {
            if (stoi(num[j].name) > stoi(num[first].name)) // Switch this comparison to flip ascending and descending order, < being descending and > being ascending.
                first = j;
        }
        temp = num[first].name; // Swap smallest found with element in position i.
        num[first].name = num[i].name;
        num[i].name = temp;
    }
}