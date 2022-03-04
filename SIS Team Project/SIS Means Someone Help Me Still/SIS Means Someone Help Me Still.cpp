/*
    Name: Xander Russell
    Date: 2/28/22
    Lab: SIS
    Extra: The user can input decimal grades, and the student is allowed to NOT have a phone number. Lastly, the user can choose how many assignments there are for a class. 
*/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip> 

#include "GetData.h"

using namespace std;

int main()
{

    // Setting up print precision and variables.
    cout.setf(ios::fixed);
    cout << setprecision(2);

    // Creating the student info and student classes matrices.
    vector<vector<string>> studentInfo;
    //vector<vector<string>> studentClasses;

    // These are the vectors that we add to in the course of adding in a student, then add to the matrix, alongside the prompt variables we will use.
    vector<string> studentInfoToInput;
    string studentInfoPrompt;

    vector<string> studentClassesToInput;
    string studentClassStringPrompt;
    string currentClass;
    int studentClassIntPrompt;
    double studentClassDoublePrompt;

    int studentCountPrompt;

    // Stuff to determine GPA and assignments.
    int assignmentCount;
    double classAverage = 0;
    double classGPA = 0;
    double cumulativeAverage = 0;

    // Get amount of students.
    do {
        cout << "Please enter the amount of students you will input: ";
    } while (!getValidInt(studentCountPrompt) || studentCountPrompt < 0);

    cout << "\nWe will start entering the first student now.\n";
    // Loop through the amount of students.
    for (int a = 0; a < studentCountPrompt; a++) {

        // If restarting the loop, will inform the user we are moving to the next student.
        if (a > 1) {
            cout << "\n\nWe will enter the next students info now.\n\n";
        }

        // Getting a lot of info.
        cout << "Please enter the students name: ";
        getline(cin, studentInfoPrompt);
        studentInfoToInput.push_back(studentInfoPrompt);

        cout << "Please enter the grade the student is in: ";
        getline(cin, studentInfoPrompt);
        studentInfoToInput.push_back(studentInfoPrompt);

        cout << "Please enter the students year of enrollment: ";
        getline(cin, studentInfoPrompt);
        studentInfoToInput.push_back(studentInfoPrompt);

        cout << "Please enter the students guidance counseler: ";
        getline(cin, studentInfoPrompt);
        studentInfoToInput.push_back(studentInfoPrompt);

        // First checks if the user has a phone number.
        do {
            cout << "Does the student have a phone number? (y/n) ";
            getline(cin, studentInfoPrompt);
            //cout << "studentInfoPrompt: " << studentInfoPrompt << endl;
        } while (studentInfoPrompt != "y" && studentInfoPrompt != "n");

        // If yes, recieve that phone number.
        if (studentInfoPrompt == "y") {
            cout << "Please enter the students phone number: ";
            getline(cin, studentInfoPrompt);
            studentInfoToInput.push_back(studentInfoPrompt);
        }
        // Else, add N/A
        else {
            studentInfoToInput.push_back("N/A");
        }
        // More info
        cout << "Please enter the students emergency contact name: ";
        getline(cin, studentInfoPrompt);
        studentInfoToInput.push_back(studentInfoPrompt);

        cout << "Please enter the students emergency contact number or email: ";
        getline(cin, studentInfoPrompt);
        studentInfoToInput.push_back(studentInfoPrompt);

        studentInfo.push_back(studentInfoToInput);
        // Getting classes and assignments.

        cout << "\nWe will now begin to enter " << studentInfoToInput[0] << "'s classes into the system.\n";

        // Looping 5 times to get all classes and assignments.
        for (int i = 0; i < 5; i++) {
            // Get the class name.
            cout << "Please enter one of " << studentInfoToInput[0] << "'s classes: ";
            getline(cin, studentClassStringPrompt);
            studentClassesToInput.push_back(studentClassStringPrompt);
            currentClass = studentClassStringPrompt;

            // Get the credits this class is worth.
            do {
                cout << "Please enter the amount of credits " << studentClassesToInput[0] << " is worth: ";
            } while (!getValidInt(studentClassIntPrompt) || studentClassIntPrompt < 0);
            studentClassesToInput.push_back(to_string(studentClassIntPrompt));

            //cout << "Credits Inputted\n";

            // Get how many assignments there are for the class.
            do {
                cout << "Please enter how many assignments " << studentInfoToInput[0] << " has submitted for " << currentClass << ": ";
            } while (!getValidInt(studentClassIntPrompt) || studentClassIntPrompt < 0);

            assignmentCount = studentClassIntPrompt;

            // Loop through the amount of assignments and get the grade for each one.
            for (int j = 0; j < assignmentCount; j++) {
                do {
                    cout << "Please enter the grade " << studentInfoToInput[0] << " received for assignment #" << j + 1 << ": ";
                } while (!getValidDouble(studentClassDoublePrompt) || studentClassDoublePrompt < 0 || studentClassDoublePrompt > 100);
                classAverage += studentClassDoublePrompt;
                studentClassesToInput.push_back(to_string(studentClassDoublePrompt));
            }

            // Calculate and add average.
            classAverage = classAverage / assignmentCount;
            cout << "Class Average: " << classAverage << "%.\n\n";
            studentClassesToInput.push_back(to_string(classAverage));
            studentInfo.push_back(studentClassesToInput);
            cumulativeAverage += classAverage;

            // Clear out the array we are inputting.
            studentClassesToInput.clear();
            classAverage = 0;
        }
        
        // Calculating GPA of student, and adding it into student info.
        cumulativeAverage = cumulativeAverage / 5;
        classGPA = (cumulativeAverage / 100) * 5;

        studentClassesToInput.push_back(to_string(classGPA));
        studentInfo.push_back(studentClassesToInput);

        studentClassesToInput.clear();
        cumulativeAverage = 0;
        
        /*
        for (int i = 0; i < studentInfo.size(); i++)
        {
            for (int j = 0; j < studentInfo[i].size(); j++)
            {
                cout << studentInfo[i][j] << " ";
            }

            // Newline for new row
            cout << endl << endl;
        }
        */

        studentInfoToInput.clear();

        

    }
}
