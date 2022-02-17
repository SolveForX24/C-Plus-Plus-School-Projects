/*
    Name: Xander Russell
    Lab: Lab 8.2 8.3 Worksheets
    Date: 2/23/22
    Extra: Favorite function works with 
*/

// Includes
#include <iostream>
#include <string>

#include "GetData.h"

using namespace std;

// Functions
int favorite(int[], int, int);
void palindrome(string[]);

int main()
{
    // Get length of the soon to be initialzed array.
    int numPrompt;
    int numArrayLen;
    do {
        cout << "Please enter a number for the length of the array: ";
    } while (!getValidInt(numArrayLen) || numArrayLen < 0);
    
    // Create dynamically sized array using this code (thanks Stack Overflow).
    // https://stackoverflow.com/questions/15013077/arrayn-vs-array10-initializing-array-with-variable-vs-real-number
    int* nums = new int[numArrayLen];
    //cout << *(&nums + 1) - nums;

    // User inputs all the values.
    for (int i = 0; i < numArrayLen; i++) {
        do {
            cout << "Please enter number " << i + 1 << ": ";
        } while (!getValidInt(numPrompt) || numPrompt < 0);
        nums[i] = numPrompt;
    }

    // Get favorite number.
    do {
        cout << "Please enter your favorite number: ";
    } while (!getValidInt(numPrompt) || numPrompt < 0);

    // Iniialize int with value returned from running the favorite function.
    int favCount = favorite(nums, numPrompt, numArrayLen);

    // Depending on what favorite yielded, print number of favorite appearences or lack thereof.
    if (favCount > 0) {
        cout << "Your favorite number, " << numPrompt << ", appears in the array " << favCount << " time(s)\n\n\n";
    }
    else {
        cout << "Your favorite number, " << numPrompt << ", does not appear in the array.";
    }

    // Create string array.
    string potentialPalindromes[5] = { "radar", "warts", "evil", "racecar", "toot" };

    // Pass to palindrome function.
    palindrome(potentialPalindromes);
}

// Favorite function.
int favorite(int nums[], int x, int len) {
    // Goes through the array, and compares the value to the target. If equal, add 1 to count variable. Return that variable.
    int xCount = 0;
    for (int i = 0; i <= len; i++) {
        if (nums[i] == x) {
            xCount++;
        }
        //cout << "On index " << i << ", count is " << xCount << endl;
    }

    return xCount;
}

// Palindrome function.
void palindrome(string words[]) {
    // Goes through the array, and for each word, will loop through its characters, compiling a new string that was the original value backwards.
    // Then, check to if the original is equal to the backwards version, and if so, state as such.
    string wordToCheck = "";
    string wordBackward = "";
    char currentChar;

    for (int i = 0; i < 5; i++) {
        cout << "Word: " << words[i] << ". ";
        wordToCheck = words[i];

        for (int j = wordToCheck.length(); j > 0; j--) {
            currentChar = wordToCheck.at(j - 1);
            wordBackward += currentChar;
        }

        cout << "Word backwards: " << wordBackward << ". ";

        if (wordBackward == wordToCheck) {
            cout << wordBackward << " is a palindrome.";
        }

        else {
            cout << wordToCheck << " is not a palindrome.";
        }

        wordBackward = "";
        cout << endl;
    }

}