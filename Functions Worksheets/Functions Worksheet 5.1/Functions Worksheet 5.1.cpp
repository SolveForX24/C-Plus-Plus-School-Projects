/*
    Name: Xander Russell
    Lab: Functions Worksheet 5.2
    Date: 1/11/22
    Extra: N/A
*/
#include <iostream>
void displayHeading();
void squareAndAdd(int, int);
void printChar(char, int, int);
using namespace std;

int main()
{
    displayHeading(); // Prints "Welcome to the Company Company!"
    cout << "\n";
    squareAndAdd(2, 3); // Prints 13
    cout << "\n";
    printChar('d', 5, 4); // Prints ddddd
                          //        ddddd
                          //        ddddd
                          //        ddddd
}

void displayHeading() {
    cout << "Welcome to the Company Company!";
}

void squareAndAdd(int x, int y) {
    x = (x * x);
    y = (y * y);
    cout << (x + y);
}

void printChar(char c, int x, int y) {
    for (int i = 0; i < y; i++) {
        for (int n = 0; n < x; n++) {
            cout << c;
        }
        cout << "\n";
    }
}