/*
    Name: Xander Russell
    Date: 2/7/22
    Lab: Lab 8.1 Working With Arrays and Vectors
    Extra: TBD
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <random>

#include "GetData.h"

using namespace std;

int main()
{

    // Setting decimal printout limit.
    cout.setf(ios::fixed);
    cout << setprecision(1);

    // Question 1

    // Create empty vector (could use array, wanted to try out vectors)
    vector<float> finalGrade = { 85.8,    93.7,   76,   88.5,   100,    91.3 };
    
    // Get sum of vector by looping through and adding up each of the values in the vector.
    float sum = 0;
    for (int i = 0; i < finalGrade.size(); i++) {
        sum += finalGrade[i];
    }

    // Print out the sum divided by length of vector.
    cout << "Average of grades: " << (sum / finalGrade.size()) << "%.\n\n";

    // Question 2
    
    // Set random seed to equal current time.
    srand(time(0));

    // Generate and print out array.
    cout << "Random Number Array:";
    int randInts[10] = {};
    for (int i = 0; i < 10; i++) {
        randInts[i] = (rand() % 9) + 1;
        cout << "\n" << i + 1 << ": " << randInts[i];
    }

    // Starting from end, go BACK through the array and print out in reverse order.
    cout << "\n\nArray Backwards: \n";
    for (int i = 9; i >= 0; i--) {
        cout << i + 1 << ": " << randInts[i] << endl;
    }

    // Looping through the beginning again, check if a value is even. If so, add to a counter.
    int evensCount = 0;
    for (int i = 0; i < 10; i++) {
        if (randInts[i] % 2 == 0) {
            evensCount++;
        }
    }

    // Print out evens.
    cout << "\nThere are a total of " << evensCount << " evens in this random array!\n\n";

    // Question 3

    int ages[5];
    int agePrompt = 0;
    for (int i = 0; i < 5; i++) {
        do {
            cout << "Please enter age #" << i + 1 << ": ";
        } while (!getValidInt(agePrompt) || (agePrompt >= 0));
        ages[i] = agePrompt;
        cout << "At index " << i << ", there is " << ages[i];
    }

}
