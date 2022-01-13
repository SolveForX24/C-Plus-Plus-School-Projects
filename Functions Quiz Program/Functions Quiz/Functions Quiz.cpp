/*

    Name: Xander Russell
    Lab: Functions Quiz
    Date 1/13/21
    Extra: User can choose number of asterisks to place.

*/

// Includes, namespace and function defines.
#include <iostream>
#include <iomanip>

using namespace std;

void printName();
void printAsteriskRow(int);
void printMouse();
void printRun();
void printPaws(int);


int main()
{

    // Part 1: Name and asterisk printout
    
    // Getting count of asterisks.
    int asteriskCount;

    cout << "How many asterisks do you want to print? ";
    cin >> asteriskCount;

    // Printing out asterisks and name.
    printAsteriskRow(asteriskCount);
    printAsteriskRow(asteriskCount);
    printName();
    printAsteriskRow(asteriskCount);
    printAsteriskRow(asteriskCount);

    // Part 2: Three blind mice

    // Setting mice count.
    int mice = 3;

    // Printing out statements and paw count.
    printMouse();
    printMouse();
    printRun();
    printRun();
    printPaws(mice);
}

// Simple printout.
void printName() {
    cout << "Xander\n";
}

// Loops to print individual *'s , then makes a new line.
void printAsteriskRow(int count) {
    for (int i = 0; i < count; i++) {
        cout << "*";
    }
    cout << "\n";
}

// Simple printout.
void printMouse() {
    cout << "Three blind mice.\n";
}

// Simple printout.
void printRun() {
    cout << "See how they run.\n";
}

// Simple printout, combined with a simple calculation.
void printPaws(int mice) {
    cout << "These " << mice << " mice have " << (mice * 4) << " paws.\n";
}