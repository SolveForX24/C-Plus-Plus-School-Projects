//Add any function code goes here
//if you didn't create any functions used exclusively for this worksheet you won't use this file.

#include "MyFunctions.h"
#include "GetData.h"
//Make sure to add any other needed include files
#include <iostream>
#include <string>

using namespace std;
//SAMPLE  - if you delete this also delete the code in MyFunctions.h
void MySampleFunction(void) {
    double testMe = 0;
    float testMe2 = 0;
    do {
        cout << "enter a double between -1.2  and 25.5: ";
    } while (!(getValidDouble(testMe)) || (testMe < -1.2) || (testMe > 25.5));

    do {
        cout << "enter a float between 5.2  and 6: ";
    } while (!(getValidFloat(testMe2)) || (testMe2 < 5.2) || (testMe2 > 6));
};

string lowerCase(string s) {
    char str[] = s;
    char c;

    int toLowerCount = 0;

    while (str[toLowerCount])
    {
        c = str[toLowerCount];
        putchar(tolower(c));
        toLowerCount++;
    }

    return str;
}
