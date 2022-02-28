/*
    Name: Xander Russell
    Date: 2/28/22
    Lab: SIS
    Extra: The user can input decimal grades.
*/

#include <iostream>
#include <vector>
#include <string>

#include "GetData.h"

using namespace std;

int main()
{
    vector<vector<string>> studentInfo;
    vector<vector<string>> studentClasses;

    vector<string> studentInfoToInput;
    string studentInfoPrompt;

    vector<string> studentClassesToInput;
    string studentClassStringPrompt;
    int studentClassIntPrompt;
    double studentClassDoublePrompt;

    int assignmentCount;
    double classAverage;
    double classGPA;

    cout << "Please enter the students name: ";
    getline(cin, studentInfoPrompt);
    studentInfoToInput.push_back(studentInfoPrompt);

    cout << "Please enter the students grade: ";
    getline(cin, studentInfoPrompt);
    studentInfoToInput.push_back(studentInfoPrompt);

    cout << "Please enter the students year of enrollment: ";
    getline(cin, studentInfoPrompt);
    studentInfoToInput.push_back(studentInfoPrompt);

    for (int i = 0; i < 5; i++) {
        cout << "Please enter one of " << studentInfoToInput[0] << "'s classes: ";
        getline(cin, studentClassStringPrompt);
        studentClassesToInput.push_back(studentClassStringPrompt);
        do {
            cout << "Please enter the amount of credits " << studentClassesToInput[0] << " is worth: ";
        } while (!getValidInt(studentClassIntPrompt) || studentClassIntPrompt < 0);
        studentClassesToInput.push_back(to_string(studentClassIntPrompt));

        do {
            cout << "Please enter how many assignments " << studentInfoToInput[0] << " has submitted for " << studentClassesToInput[i] << ": ";
        } while (!getValidInt(studentClassIntPrompt) || studentClassIntPrompt < 0);

        assignmentCount = studentClassIntPrompt;
        for (int j = 0; j < assignmentCount; j++) {
            do {
                cout << "Please enter the grade " << studentInfoToInput[0] << " received for assignment #" << j + 1 << ": ";
            } while (!getValidDouble(studentClassDoublePrompt) || studentClassDoublePrompt < 0);
            //classAverage += studentClassDoublePrompt;
            studentClassesToInput.push_back(to_string(studentClassDoublePrompt));
        }

        studentClasses.push_back(studentClassesToInput);

        studentClassesToInput.clear();
    }

}
