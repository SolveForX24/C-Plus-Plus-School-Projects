// Worksheets.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Create an empty c++ console project named "YourLastName_WS_WSnumber" For example DiGiovanna_WS_3
// Copy the Worksheets.h and Worksheets.cpp and runWorkSheets file to the directory containing your project's *.sln file
// In the solution Explorer window, add the RunWorksheets.cpp file to the project by 
//  1) Right clicking on the source files folder, select "add"
//  2) Select "existing item"
//  3) A popup appears. Select the "RunWorksheets.cpp" file
// In the solution Explorer window, add the Worksheets.h file to the project by 
//  1) Right clicking on the header files folder, select "add"
//  2) Select "existing item"
//  3) A popup appears. Select the "Worksheets.h" file
// In the solution Explorer window, add the Worksheets.cpp file to the project by 
//  1) Right clicking on the source files folder, select "add"
//  2) Select "existing item"
//  3) A popup appears. Select the "Worksheets.cpp" file
// Add your code to the program per the instructions. 

#include <iostream>
#include "Worksheets.h"
// Add all other needed header files

using namespace std;

int main()
{
    //Change the name of the worksheets to the actual name of the worksheet
    //for example - for 3.0 worksheets they are 
    //"Working with Logical operators", "Working with if", "If else", "More if else", "Switch"

    //NO OTHER CODE BELONGS IN MAIN
    //Your code goes in the functions in Worksheets.cpp

    bool runAgain = false;
    string answer = "n";

    string ws1Name = "Working with Logical Operators";
    string ws2Name = "Working with if Statements";
    string ws3Name = "Worksheet If - Else statements";
    string ws4Name = "Worksheet More work with if - else";
    string ws5Name = "Worksheet Switch";

    do {
        worksheet1(ws1Name);
        cout << "Run Again y/n ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);

    do {
        worksheet2(ws2Name);
        cout << "Run Again y/n ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);

    do {
        worksheet3(ws3Name);
        cout << "Run Again y/n ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);

    do {
        worksheet4(ws4Name);
        cout << "Run Again y/n ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);

    do {
        worksheet5(ws5Name);
        cout << "Run Again y/n ";
        getline(cin, answer);
        if (answer == "y" || answer == "Y") {
            runAgain = true;
        }
        else {
            runAgain = false;
        }
    } while (runAgain);
}