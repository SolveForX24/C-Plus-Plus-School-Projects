//
// Created by compsci on 9/8/2022.
//

#include "Customer.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Customer::Customer() {}
Customer::Customer(string na) {
    name = na;
    itemOneAmount = 0;
    itemTwoAmount = 0;
    itemThreeAmount = 0;
    itemFourAmount = 0;
    itemFiveAmount = 0;
}

// Name Getter
string Customer::getName() {
    return name;
}

// Increases variables based on order
void Customer::increaseItemCount(int amount, int option) {
    switch (option) {
        case 1:
            itemOneAmount += amount;
            break;
        case 2:
            itemTwoAmount += amount;
            break;
        case 3:
            itemThreeAmount += amount;
            break;
        case 4:
            itemFourAmount += amount;
            break;
        case 5:
            itemFiveAmount += amount;
            break;
        default:
            cout << "Not sure how you got here. No changes will be made.";
    }
}