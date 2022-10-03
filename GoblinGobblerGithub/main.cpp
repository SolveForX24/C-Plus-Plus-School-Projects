/*
    Name: Xander Russell
    Lab: Gobbler Goblin Grotto
    Date: 9/20/22
    Extra: The user can abandon the order while ordering.

    NOTE: The formatting can get kind of wacky when printed out.
    I'm not sure if it's my fault, CLion's fault or Matthew Weirs console codes' fault,
    but it's very weird nonetheless. I'm not sure how to fix it.
    NOTE 2: Yeah it was CLion, running the program in Repl.it yields proper formatting.
 */


// Includes and defines
#include <iostream>
#include <iomanip>
#include <string>
#include "console.h"
#include "Customer.h"

using namespace std;

void displayOrder(Customer, bool);
void placeOrder(bool, string);

int main() {

    // Variables
    bool running = true;
    string strPrompt;

    // Hardcoded Account
    string accountUsername = "Bossman";
    string accountPassword = "toocool";
    string accountName = "Big Man (From Splatoon 3) (Real)";

    while(running) {

        // Ask if user wants to sign in
        cout << "Welcome to the Triple G (Gobbler Goblin Grotto)!" << endl
             << "1) Sign into your account" << endl
             << "2) Continue as guest" << endl
             << "3) Exit program" << endl;

        // Get option, proceed with choice
        switch(prompt_int_min_max("Enter menu option: ", 1, 3)) {
            case 1:
                // Sign in
                prompt_string_choices("Please enter username: ", {accountUsername});
                prompt_string_choices("Please enter password: ", {accountPassword});
                cout << "Welcome, " << accountName << "!\n";
                placeOrder(true, accountName);
                break;
            case 2:
                // Use as guest
                strPrompt = prompt_string("Thank you for using our program, guest! What is your name? ");
                placeOrder(false, strPrompt);
                break;
            case 3:
                // Exit the program
                cout << "Thank you! Have a nice day!";
                running = false;
                continue;
        }
    }
}

// Prints out the amount of each item currently in order, then the subtotal,
// then does math and calculates tax and final total.
void displayOrder (Customer customer, bool signedIn) {
    cout << "Current Bill" << endl
         << customer.itemOneAmount << " Cheeseburger(s)" << endl
         << customer.itemTwoAmount << " Chicken Tenders" << endl
         << customer.itemThreeAmount << " French Fries" << endl
         << customer.itemFourAmount << " Onion Rings" << endl
         << customer.itemFiveAmount << " Burger Combo(s)" << endl
         << "Subtotal: $" << customer.subtotal << endl
         << "Current Tax: $" << setprecision(2) << fixed << customer.subtotal * 0.08875 << endl
         << "Total: $" << customer.subtotal + (customer.subtotal * 0.08875) << endl << endl;
    if (signedIn) {
        cout << "Your employee discount reduces the final total to $" << (customer.subtotal + (customer.subtotal * 0.08875)) * .85 << "!\n\n";
    }
}

void placeOrder(bool signedIn, string name) {

    // Customer class
    Customer customer(name);

    // Various variables
    int itemAmount = 0;
    int itemPrompt = 0;
    string strPrompt = "EMPTY";
    char charPrompt = 'X';
    bool ordering = true;
    bool willOrder = true;

    while(ordering) {
        // Ask what the user wants
        cout << "\nWhat would you like to eat?" << endl
             << "1) Cheeseburger ($4.99)" << endl
             << "2) Chicken Tenders ($3.99)" << endl
             << "3) French Fries ($2.99)" << endl
             << "4) Onion Rings ($2.49)" << endl
             << "5) Burger Combo (Cheeseburger + Fries) ($7.99)" << endl
             << "6) View Current Bill" << endl
             << "7) Complete Order" << endl
             << "8) Abandon Order" << endl << endl;

        itemPrompt = prompt_int_min_max("Please enter menu choice: ", 1, 8);

        // Let the user view the current bill.
        if (itemPrompt == 6) {
            displayOrder(customer, signedIn);
            continue;
        }

        // If the user wants to complete order, break out of loop.
        if (itemPrompt == 7) {
            ordering = false;
            break;
        }

        // EXTRA: The user can abandon an order if they decide they don't want the food anymore.
        if (itemPrompt == 8) {
            // Confirmation prompt
            strPrompt = prompt_string_choices("Are you sure you want to abandon your order? (y/n) ", {"y", "Y", "n", "N"});
            charPrompt = strPrompt[0];
            // If yes, mark that the ordering loop should end and the user will bot complete order.
            if (tolower(charPrompt) == 'y') {
                ordering = false;
                willOrder = false;
                break;
            } else {
                continue;
            }

        }

        // Get how many of the item the user wants.
        itemAmount = prompt_int_min("Please enter how many of these you want: ", 1);

        // Increase the amount of the item in the class.
        customer.increaseItemCount(itemAmount, itemPrompt);

    }

    if (willOrder) {
        displayOrder(customer, signedIn);
    }

    cout << "Thank you for coming, " << customer.name << "!\n\n\n";
}

