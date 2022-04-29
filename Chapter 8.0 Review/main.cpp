/*
 *
 * Name: Xander Russell
 * Lab: Chapter 8 Review
 * Extra: Error trapped
 * Date: 4/29/22
 *
 */

// Includes
#include <iostream>
#include <vector>

#include "GetDataR2.h"

using namespace std;

// Exchange sort: Exchanges items until the right item is in the current index, then moves onto the next index.
vector<vector<string>> exchangeSort(vector<vector<string>> vect, int index) {
    vector<string> temp;
    int vectLength = (int) vect.size();

    for (int i = 0; i < vectLength - 1; i++) {
        for(int j = i + 1; j < vectLength; j++) {
            if (vect[i][index] > vect[j][index]) {
                temp = vect[i];
                vect[i] = vect[j];
                vect[j] = temp;
            }
        }
    }

    return vect;
}

// Defining matrix, then sorting and printing.
int main() {
    vector<vector<string>> guests = {  {"Matthew Weir", "Standard"}, {"Xander Russell", "Deluxe"},{"Aurora Luer", "Standard"}};
    int index = promptInt("Would you like to sort by name (1) or by room package (2)? ", 1, 2);
    guests = exchangeSort(guests, index - 1);
    for (int i = 0; i < guests.size(); i++) {
        cout << "Name: " << guests[i][0] << "\nRoom Package: " << guests[i][1] << "\n\n";
    }

    cout << "Thank you!";
}
