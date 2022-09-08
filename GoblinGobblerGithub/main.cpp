#include <iostream>
#include <iomanip>
#include <string>
#include "console.h"
#include "Customer.h"

using namespace std;

void placeOrder(bool, string);

int main() {

    // Variables
    bool running = true;

    string strPrompt;
    string accountUsername = "Bossman";
    string accountPassword = "toocool";
    string accountName = "Big Man (From Splatoon 3) (Real)";

    int choice;

    while(running) {

        if (!running) {
            break;
        }

        // Ask if user wants to sign in
        cout << "Welcome to the Triple G (Gobbler Goblin Grotto)!" << endl
             << "1) Sign into you account" << endl
             << "2) Continue as guest" << endl
             << "3) Exit program" << endl;

        switch(prompt_int_min_max("Enter menu option: ", 1, 3)) {
            case 1:
                // Sign in
                prompt_string_choices("Please enter username: ", {accountUsername});
                prompt_string_choices("Please enter password: ", {accountPassword});
                cout << "Welcome, " << accountName << "!\n";
                placeOrder(true, accountUsername);
                break;
            case 2:
                // Use as guest
                strPrompt = prompt_string("Thank you for using our program, guest! What is your name? ");
                placeOrder(false, strPrompt);
                break;
            case 3:
                // Exit the program
                running = false;
                continue;
        }
    }
}

void placeOrder(bool signedIn, string name) {

    Customer customer(name);

    bool ordering = true;

    while(ordering) {
        cout << "Got to ordering successfully. GG " << customer.getName() << "\n";
        break;
    }
}