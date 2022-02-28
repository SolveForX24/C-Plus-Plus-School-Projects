/*
    Name: Xander Russell
    Lab: Lab 8.2 8.3 Worksheets
    Date: 2/23/22
    Extra: Favorite function works with variable size of array, which the user can choose the size of.
*/

// Includes
#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <iterator>
#include <cmath> 

#include "GetData.h"

using namespace std;

// Functions
int favorite(int[], int, int);
void palindrome(string[]);
int distanceCheck(int[], double[]);
void printArray(string[]);


int main()
{
    // Prompt 1

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

    // Prompt 2

    // Create string array.
    string potentialPalindromes[5] = { "radar", "warts", "evil", "racecar", "toot" };

    // Pass to palindrome function.
    palindrome(potentialPalindromes);

    // Prompt 3
    
    // Establish arrays
    int distances[6] = { 50, 100, 200, 400, 800, 1000 };
    double times[6] = { 7.24, 13.54, 28.03, 71.12, 158.67, 220.15 };
    
    // Call distanceCheck
    distanceCheck(distances, times);

    // Prompt 4 
    // Note: I was too lazy to come up with the values, and Matthew W. kindly provided the values for me.
    string names[] = { "Flora Taylor", "Trenton Hubbard", "Kennedy Jeanes", "Claude Jeanes", "Caleb Langley" };
    string addresses[] = { "206 Fairfax Drive, Red Bank NJ 07701", "4265 Caynor Circle, Piscataway NJ 08854", "2619 Lakewood Drive, Cliffside Park NJ 07010", "2979 Lake Road, Pleasantville NJ 08232", "4629 Virgil Street, Wayne NJ 07477"};
    string numbers[] = { "848-466-3950", "908-220-4787", "201-545-5124", "609-377-3255", "732-910-4112" };
    
    // Call printArray to print each of the arrays.
    cout << endl;
    printArray(names);
    cout << endl;
    printArray(addresses);
    cout << endl;
    printArray(numbers);
    
    // Print out the third in each array.
    cout << "\nName: " << names[3] << "\nAddress: " << addresses[3] << "\nPhone Number: " << numbers[3];
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

// Distance function
int distanceCheck(int distances[], double times[]) {
    
    // Get distance to check, and do not allow progress if what the user entered isn't an int or not in the distance array.
    int distancePrompt;
    do {
        cout << "Please enter distance you want to check: ";
    } while (!getValidInt(distancePrompt) || find(distances, distances+6, distancePrompt) == distances+6);
    
    // Find where that distance is exactly in the array.
    int n = sizeof(distances) / sizeof(distances[0]);
    int index;
    int i = 0;
    while (i < n)
    {
        if (distances[i] == distancePrompt) {
            index = i;
            break;
        }
        i++;
    }
    
    // Print out what the user prompted and the corresponding time.
    cout << "Distance: " << distancePrompt << "\nTime: " << times[index];
    return -1;
}


// Print array function
void printArray(string arr[]) {
    // Loop through the array and print.
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
}
