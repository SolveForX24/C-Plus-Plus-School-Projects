//
// Created by compsci on 9/8/2022.
//

#include "Customer.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Constructor
Customer::Customer() {}
Customer::Customer(string na) {
    name = na;
    itemOneAmount = 0;
    itemTwoAmount = 0;
    itemThreeAmount = 0;
    itemFourAmount = 0;
    itemFiveAmount = 0;
    subtotal = 0;
}


// Increases variables based on order
void Customer::increaseItemCount(int amount, int option) {
    switch (option) {
        case 1:
            itemOneAmount += amount;
            subtotal += (amount * 4.99);
            break;
        case 2:
            itemTwoAmount += amount;
            subtotal += (amount * 3.99);
            break;
        case 3:
            itemThreeAmount += amount;
            subtotal += (amount * 2.99);
            break;
        case 4:
            itemFourAmount += amount;
            subtotal += (amount * 2.49);
            break;
        case 5:
            itemFiveAmount += amount;
            subtotal += (amount * 7.99);
            break;
        default:
            cout << "Not sure how you got here. No changes will be made.";
    }

}