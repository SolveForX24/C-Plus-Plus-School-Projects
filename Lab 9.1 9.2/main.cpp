#include <iostream>
#include <vector>
#include <time.h>
#include "console.h"

using namespace std;

void BubbleSort(vector<int>&);
void ExchangeSort(vector <int> &);
int binarySearch(vector<int>, int, int, int);

int main() {

    // Lab 9.1
    // Part 1
    // Set and sort raffle list and get user ticket.
    vector<int> raffles = {307, 521, 416, 154, 243, 893};
    ExchangeSort(raffles);
    int userTicket = prompt_int_min("What is the number on your ticket? ", 0);

    // Run search.
    int result = binarySearch(raffles, 0, raffles.size() - 1, userTicket); // 0 is the lowerbound (l), n-1 is the upperbond (r), and x is the key variable.

    // Share results.
    if (result == -1) {
        cout << "Sorry! You're ticket is not a winner. :(\n\n";
    } else {
        cout << "Congrats! You're a winner!\n\n";
    }

    // Part 2
    // Set nums list and get user choice.
    vector<int> nums = { 5, 6, 10, 14, 15, 16, 18, 22};

    int userChoice;
    cout << "What number do you think is in the vector? ";
    cin >> userChoice;

    cout << "Past Prompt: " << userChoice << endl;

    // Run search.
    result = binarySearch(nums, 0, nums.size() - 1, userChoice); // 0 is the lowerbound (l), n-1 is the upperbond (r), and x is the key variable.

    // Share results.
    if (result == -1) {
        cout << "Sorry! That number was not in the vector. :(\n\n";
    } else {
        cout << "Correct! That number was in the vector.\n\n";
    }

    // Lab 9.2

    // Setting random seed.
    srand(time(NULL));
    int randDummy = rand() % 2 + 1; // generate a num between 1 and 2 to reset randomness

    // Generate random vector.
    vector <int> randNums;
    for (int i = 0; i <= 50; i++) {
        randNums[i] = rand() % 200 + 1; // generate a num between 1 and 200
    }

    // Get user key.
    int userRandNumChoice = prompt_int_min("What number do you think is in the vector? ", 0);

    // Print out vector in both ways.
    cout << "Array Sorted in Descending Order by the Bubble Sort";
    BubbleSort(randNums);
    for (int i = 0; i <= 50; i++) {
        cout << randNums[i];
    }

    cout << "Array Sorted in Ascending Order by the Exchange Sort";
    ExchangeSort(randNums);
    for (int i = 0; i <= 50; i++) {
        cout << randNums[i];
    }

    // Run search.
    result = binarySearch(randNums, 0, randNums.size() - 1, userRandNumChoice); // 0 is the lowerbound (l), n-1 is the upperbond (r), and x is the key variable.

    // Share results.
    if (result == -1) {
        cout << "Sorry! That number was not in the array. :(\n\n";
    } else {
        cout << "Correct! That number was in the array.\n\n";
    }

    return 0;

}

// Bubble Sort for descending order
void BubbleSort(vector <int>& num)
{
    int i, j, flag = 1; // set flag to 1 to start first pass
    int temp; // holding variable
    int numLength = num.size();
    for(i = 1; (i <= numLength) && flag; i++)
    {
        flag = 0;
        for (j=0; j < (numLength -1); j++)
        {
            if (num[j+1] > num[j])// descending order
            {
                temp = num[j];// swap elements
                num[j] = num[j+1];
                num[j+1] = temp;
                flag = 1; // indicates that a swap occurred.
            }
        }
    }
}

//Exchange Sort Function for ascending Order
void ExchangeSort(vector <int> &num)
{
    int i, j;
    int temp; // holding variable
    int numLength = num.size();
    for (i=0; i < (numLength -1); i++) // element to be compared
    {
        for(j = (i+1); j < numLength; j++) // rest of the elements
        {
            if (num[i] > num[j]) // descending order, swap to > for ascending.
            {
                temp = num[i]; // swap
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
}

// A recursive binary search function. It returns
//   location of x in given array arr[l..r] is present,
//   otherwise -1.

// This function taken from Mr. Botero's example
int binarySearch(vector<int> arr , int l, int r, int x)
{
    cout << "In function\n";
    if (r >= l && l <= arr.size()-2)
    {
        int mid = l + (r - l) / 2;
        cout << "Mid: " << mid << ". L: " << l << ". R: " << r << endl;
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}