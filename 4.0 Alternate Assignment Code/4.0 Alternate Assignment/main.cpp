/*
	Name: Xander Russell
	Assignment: 4.0 Alternate Assignment
	Date: 11/30/21
	Extra: Thanks the user by name for the order.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

	// Here we establish the several variables used in the program, as well as prepare cout precision.
	bool running = true;
	bool ordering = true;
	bool abandoned = false;
	bool shutDown = false;
	
	string answer;
	string name;
	string dummy;
	string order;
	string continueOrder;
	string shutDownPassword;
	string shouldAbandon;

	int orderCount = 0;
	
	int hotdogCount = 0;
	int candyCount = 0;
	int drinkCount = 0;
	int popcornCount = 0;
	int pizzaCount = 0;

	float price = 0;

	cout.setf(ios::fixed);
	cout << setprecision(2);

	// This outer loop maintains the whole program. It will only get broken out of in two cases: the shut down password was inputted, or 1000 users have used the program.
	while (running) {

		// We reset these variables so as not to mess up future orders, and to restart the order booleans.
		hotdogCount = 0;
	    candyCount = 0;
	    drinkCount = 0;
		popcornCount = 0;
	    pizzaCount = 0;

		price = 0;

		running = true;
		ordering = true;
		abandoned = false;

		// Getting name
		cout << "Please enter your full name: ";
		getline(cin, name);
		
		// This loop is the ordering process. Inside this loop, we receive and track orders, calculate price, and check for special cases, i.e the shutdown process and improper response.
		while (ordering) {

			// Getting order
			cout << "\n\nPlease make an order:\n\n(B)everage	$5.00\n(C)andy      	$2.25\n(H)ot Dog	$7.00\n(P)opcorn	$6.75\nP(i)zza	        $4.50\n\nPlease enter one of the letters in the parentheses for your order: ";
			getline(cin, order);

			// Checking the order, then adding to the proper count variable and to the price. 
			if (order == "b" || order == "B") {
				cout << "\nYour order for a Beverage has been processed!";
				drinkCount++;
				price += 5.00;
			}
			else if (order == "c" || order == "C") {
				cout << "\nYour order for a Candy has been processed!";
				candyCount++;
				price += 2.25;
			}
			else if (order == "h" || order == "H") {
				cout << "\nYour order for a Hot Dog has been processed!";
				hotdogCount++;
				price += 7.00;
			}
			else if (order == "p" || order == "P") {
				cout << "\nYour order for a Popcorn has been processed!";
				popcornCount++;
				price += 6.75;
			}
			else if (order == "i" || order == "I") {
				cout << "\nYour order for a Pizza has been processed!";
				pizzaCount++;
				price += 4.50;
			}

			// Special case: if Q is inputted, then ask for password. If password inputted is correct, set shutDown to true, and break out of the loop.
			// Else, go back to beginning of loop.
			else if (order == "q" || order == "Q") {
				cout << "\nPlease enter the shut-down password: ";
				
				getline(cin, shutDownPassword);	

				if (shutDownPassword == "ShutMeDown!") {
					shutDown = true;
					break;
				} else if (shutDownPassword != "ShutMeDown!") {
					shutDownPassword == "a";
					continue;
				}
			}

			// If improper response, then asks the user if they want to try again, or cancel the order. If abandoned, set abandoned boolean to true and break out of loop. 
			// If trying again, returns to beginning of loop. If improper response, indicate as such and return to beginning.
			else {
				cout << "\nThat was not a proper menu order. Would you like to try again, or would you like me to cancel your order? (Try Again = T, Leave = L) ";
				
				getline(cin, shouldAbandon);
				if (shouldAbandon == "L" || shouldAbandon == "l") {
					abandoned = true;
					cout << "\nAbandoning order\n\n";
					break;
				}
				else if (shouldAbandon == "T" || shouldAbandon == "t") {
					continue;
				}
				else {
					cout << "\nImproper response. Returning to order.";
					continue;
				}
			}

			// Checks to see if the order is complete. If yes, then sets ordering to false, so that the ordering loop completes. If ordering again, or improper response,
			// return to menu options.
			cout << "\n\nWould you like to order another item? (y/n) ";
			
			getline(cin, continueOrder);

			if (continueOrder == "n" || continueOrder == "N") {
				cout << "\nHeading to ordar summary: ";
				ordering = false;
			}
			else if (continueOrder == "y" || continueOrder == "Y") {
			}
			else {
				cout << "\n\nOption not determined. Going to order menu.\n";
			}
			
		}

		// Checks special cases.
		// If the shutdown password was inputted, the program breaks out of the loop, ending the loop.
		// If the order was abandoned, we return to the beginning of the loop, skipping the order summary.
		if (shutDown) {
			cout << "\n\nPassword accepted. Shutting down due to admin access.\n\n";
			break;
		}
		else if (abandoned) {
			cout << "Order abandoned\n\n";
			continue;
		}

		// If no special cases were initiaited, then we print out the price, list amount of items ordered,
		// and thank the user by name. We iterate an order count variable, and if it is greater then or equal
		// to 1000, the loop breaks, ending the programs.
		else {
			cout << "\n\nPlease deposit $" << price << " while I process your order.\n";
			if (drinkCount >= 1) {
				cout << "\n" << drinkCount << " Beverage(s)";
			}
			
			if (candyCount >= 1) {
				cout << "\n" << candyCount << " Candy(ies)";
			}

			if (hotdogCount >= 1) {
				cout << "\n" << hotdogCount << " Hot Dog(s)";
			}

			if (popcornCount >= 1) {
				cout << "\n" << popcornCount << " Popcorn(s)";
			}

			if (pizzaCount >= 1) {
				cout << "\n" << pizzaCount << " Pizza(s)";
			}

			cout << "\n\nThank you for your purchase, " << name << "!\n\n\n\n";
			orderCount++;
			if (orderCount >= 1000) {
				cout << "\n\nShutting down to replenish materials.\n\n";
				break;
			}
		}

	}

}
