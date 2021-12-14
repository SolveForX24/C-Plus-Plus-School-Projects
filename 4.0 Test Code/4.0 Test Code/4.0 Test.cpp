/*
    Name: Xander Russell
    Date: 12/14/21
    Lab: 4.0 Test
    Extra: The percentage of both heads and tails are accurate to 2 decimal points.

    Design:
    The program runs in a do-while loop, that has a nested loop inside of it. Before the for loop, we ask for how many times we should flip the coin. Then, we run the for loop.
    Inside the for loop, we ask for either H or T. If H or h, add to a "heads" integer. If T or t, add to a "tails" integer. If neither, print that the user inputted improper input, 
    then use "continue" to go back to beginning of that loop.
    Once the for loop is complete, we then calculate percentage, print out statement detailing heads vs. tails and percentages, then ask if the user wants to continue. If Y or y, resume loop.
    If N or n, set "running" boolean to false, thereby ending the loop. If neither, print that the user inputted improper input, and use "continue" to try again.
*/

#include <iomanip>
#include <iostream>
#include <string>
#include "GetData.h"

using namespace std;

int main()
{

    // Here we establish variables and the precision at which to print the percent.
    bool running = true;
    
    double heads = 0;
    double tails = 0;
    int coinCount = 0;

    string result;
    string continueRunning;

    cout.setf(ios::fixed);
    cout << setprecision(2);

    // Outer loop. In the first part, we reset heads and tails count, then get a new amount of times to run the for loop using Mrs. Digiovannas error trapping functions. 
    // Then, print number of coins that will get flipped.
    do {

        heads = 0;
        tails = 0;

        cout << "How many coins are we flipping? ";
        while (!getValidInt(coinCount)) {
            cout << "Sorry, that is not a proper number. Try again: ";
        }

        cout << "Flipping " << coinCount << " coins.\n";

        // We run this loop as many times as the user wants. Prints the flip number they are on, and asks for heads (H) or tails (T). If it is one of those, add to the proper variable.
        // If neither gets inputted, print a message stating as such, decrease i so that the continue does not make the current loop get skipped, and continue.
        for (int i = 0; i < coinCount; i++) {
            cout << "Flip coin #" << (i + 1) << " and enter result (H or T): ";
            getline(cin, result);
            if (result == "H" || result == "h") {
                heads++;
            }
            else if (result == "T" || result == "t") {
                tails++;
            }
            else {
                cout << "Sorry, that is not an H or a T. Please try again.\n";
                i--;
                continue;
            }
        }

        // Print the total heads and tails count, and calculate the percent and print it as well.
        cout << "\nResults:\n\nHeads: " << heads << ", or " << (heads/coinCount) * 100.0 << "%.\nTails: " << tails << ", or " << (tails / coinCount) * 100.0 << "%.\n\n";

        // Checks if the user would like to continue. If N or n, print a thank you message, and set running to false to break out of the loop.
        // If Y or y, use /n/n to add 2 lines of whitespace.
        // If neither, print a message stating the user used improper input, and end the program by set running to false.
        cout << "Would you like to continue? (Y or N, anything else ends the code.) ";
        getline(cin, continueRunning);
        if (continueRunning == "N" || continueRunning == "n") {
            cout << "Thank you for using this product.";
            running = false;
        }
        else if (continueRunning == "Y" || continueRunning == "y") {
            cout << "\n\n";
        }
        else {
            cout << "Input not Y or N, ending program.\n\nThank you for using this product.";
            running = false;
        }
    } while (running);
    
}
