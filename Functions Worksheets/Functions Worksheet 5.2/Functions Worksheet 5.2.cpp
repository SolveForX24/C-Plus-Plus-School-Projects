/*
    Name: Xander Russell
    Lab: Functions Worksheet 5.2
    Date: 1/11/22
    Extra: N/A
*/

#include <iostream>
#include <string>
#include <iomanip>

void doubleNumber(int);
float harmonicMean(float, float);
int squareNumber(int);
int cubeNumber(int);

using namespace std;    

int main()
{

    cout << "Please enter a number: ";
    int toDouble = 0;
    cin >> toDouble;
    doubleNumber(toDouble); // Prints 2 with input of 5

    cout << "\n";
    float firstNum = 2.0;
    float secondNum = 4.0;
    cout << harmonicMean(firstNum, secondNum); // Prints 2.66667

    cout << "\n";
    cout << squareNumber(5); // Prints 25
    cout << "\n";
    cout << cubeNumber(2); // Prints 8

}

void doubleNumber(int x) {
    cout << (x * 2);
}

float harmonicMean(float x, float y) {
    x = (1 / x);
    y = (1 / y);
    float mean = (x + y) / 2;
    return (1 / mean);
}

int squareNumber(int x) {
    return (x * x);
}

int cubeNumber(int x) {
    return (x * x * x);
}