//
// Created by SolveForX24 on 9/8/2022.
//

#pragma once

#include <iostream>
#include <iomanip>
#include <string>


class Customer {
public:

    //Variables
    std::string name = "EMPTY";
    int itemOneAmount = 0;
    int itemTwoAmount = 0;
    int itemThreeAmount = 0;
    int itemFourAmount = 0;
    int itemFiveAmount = 0;
    float subtotal = 0;


    //Constructors
    Customer();
    Customer(std::string);

    //Methods
    void increaseItemCount(int, int);
};


