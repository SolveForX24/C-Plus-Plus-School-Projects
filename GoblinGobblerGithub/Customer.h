//
// Created by compsci on 9/8/2022.
//

#pragma once

#include <iostream>
#include <iomanip>
#include <string>


class Customer {

private:
    std::string name = "EMPTY";
    int itemOneAmount = 0;
    int itemTwoAmount = 0;
    int itemThreeAmount = 0;
    int itemFourAmount = 0;
    int itemFiveAmount = 0;

public:

    //Constructors
    Customer();
    Customer(std::string);

    std::string getName();

    void increaseItemCount(int, int);


};


