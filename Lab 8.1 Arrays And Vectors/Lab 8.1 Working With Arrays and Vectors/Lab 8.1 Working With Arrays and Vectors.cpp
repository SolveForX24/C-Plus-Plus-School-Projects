/*
    Name: Xander Russell
    Date: 2/7/22
    Lab: Lab 8.1 Working With Arrays and Vectors
    Extra: The user can input the sales for the last part.
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

    // Establishing variables, including array.
    int ages[5];
    int agePrompt = 0;

    // Loop through the length of the array. Ask for number, make sure it's an integer and not negative, then add it to array.
    for (int i = 0; i < 5; i++) {
        do {
            cout << "Please enter age #" << i + 1 << ": ";
        } while (!getValidInt(agePrompt) || agePrompt < 0);
        ages[i] = agePrompt;
    }

    // Loop back through array, increase variable if a value is greater then 15.
    int largeCount = 0;
    for (int i = 0; i < 5; i++) {
        if (ages[i] > 15) {
            largeCount++;
        }
    }

    // Print out amount of values greater then 15.
    cout << "\nThere were " << largeCount << " ages greater then 15.\n\n";

    // Question 4

    // Set precision to fit dollar form.
    cout << setprecision(2);

    // Create array by looping, printing out the day's sales you're putting in, allowing for input (checking for correct int form and it's greater then 0) then putting it into the array finally.
    float sales[5];
    float salesPrompt;
    for (int i = 0; i < 5; i++) {
        do {
            cout << "Please enter the sales for ";
            switch (i) {
            case 0:
                cout << "Monday: $";
                break;
            case 1:
                cout << "Tuesday: $";
                break;
            case 2:
                cout << "Wednesday: $";
                break;
            case 3:
                cout << "Thursday: $";
                break;
            case 4:
                cout << "Friday: $";
                break;
            default:
                cout << "Something wacky has happened :D";
            }
        } while (!getValidFloat(salesPrompt) || salesPrompt < 0);
        sales[i] = salesPrompt;
    }


    // This do while loop will print the options (which is the variety of days and leaving the program), then allow for the input of incorrect entries. 
    // It will then print the day and the sales based on user input in a switch. If input is 6, break out of the loop.
    bool running = true;
    int readPrompt = 0;
    do {
        do {
            cout << "\n\nMonday: 1\nTuesday: 2\nWednesday: 3\nThursday: 4\nFriday: 5\nLeave Program: 6\n\nPlease enter the day you want (the number on the right) ";
        } while (!getValidInt(readPrompt));
        readPrompt--;
        cout << "\n\n";
        switch (readPrompt) {
            case 0:
                cout << "Monday's sales: $" << sales[0];
                break;
            case 1:
                cout << "Tuesday's sales: $" << sales[1];
                break;
            case 2:
                cout << "Wednesday's sales: $" << sales[2];
                break;
            case 3:
                cout << "Thursday's sales: $" << sales[3];
                break;
            case 4:
                cout << "Friday's sales: $" << sales[4];
                break;
            case 5:
                cout << "Thank you for using the program! Have a good day!";
                running = false;
                break;
            default:
                cout << "Sorry, that's not an acceptable response. Please try again.";
            }
    } while (running);

}
