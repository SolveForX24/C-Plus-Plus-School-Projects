

// Add your header.

#include <iostream>
#include <string>
// Add all other needed header files
#include <iomanip>

using namespace std;

int main()
{

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

	int orderCount = 999;
	
	int hotdogCount = 0;
	int candyCount = 0;
	int drinkCount = 0;
	int popcornCount = 0;
	int pizzaCount = 0;

	float price = 0;

	cout.setf(ios::fixed);
	cout << setprecision(2);

	while (running) {
		
		hotdogCount = 0;
	    candyCount = 0;
	    drinkCount = 0;
		popcornCount = 0;
	    pizzaCount = 0;

		price = 0;

		running = true;
		ordering = true;
		abandoned = false;

		cout << "What is your name? ";
		getline(cin, name);
		
		while (ordering) {
			cout << "\n\nPlease make an order:\n\n(B)everage	$5.00\n(C)andy      	$2.25\n(H)ot Dog	$7.00\n(P)opcorn	$6.75\nP(i)zza	        $4.50\n\nPlease enter one of the letters in the parentheses for your order: ";
			getline(cin, order);

			if (order == "b" || order == "B") {
				cout << "Your order for a Beverage has been processed!";
				drinkCount++;
				price += 5.00;
			}
			else if (order == "c" || order == "C") {
				cout << "Your order for a Candy has been processed!";
				candyCount++;
				price += 2.25;
			}
			else if (order == "h" || order == "H") {
				cout << "Your order for a Hot Dog has been processed!";
				hotdogCount++;
				price += 7.00;
			}
			else if (order == "p" || order == "P") {
				cout << "Your order for a Popcorn has been processed!";
				popcornCount++;
				price += 6.75;
			}
			else if (order == "i" || order == "I") {
				cout << "Your order for a Pizza has been processed!";
				pizzaCount++;
				price += 4.50;
			}
			else if (order == "q" || order == "Q") {
				cout << "Please enter the shut-down password: ";
				
				getline(cin, shutDownPassword);	

				if (shutDownPassword == "ShutMeDown!") {
					shutDown = true;
					break;
				} else if (shutDownPassword != "ShutMeDown!") {
					shutDownPassword == "a";
					continue;
				}
			}
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
			}

			if (shutDown == true) {
				break;
			} 

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

		if (shutDown) {
			cout << "\n\nPassword accepted. Shutting down due to admin access.\n\n";
			break;
		}
		else if (abandoned) {
			cout << "Order abandoned\n\n";
			continue;
		}
	
		else {
			cout << "\n\nPlease deposit $" << price << " while I process your order.\n";
			if (drinkCount >= 1) {
				cout << "\n" << drinkCount << " Beverage(s)";
			}
			
			if (candyCount >= 1) {
				cout << "\n" << candyCount << " Hot Dog(s)";
			}

			if (hotdogCount >= 1) {
				cout << "\n" << hotdogCount << " Hot Dog(s)";
			}

			if (popcornCount >= 1) {
				cout << "\n" << popcornCount << " Hot Dog(s)";
			}

			if (pizzaCount >= 1) {
				cout << "\n" << pizzaCount << " Hot Dog(s)";
			}

			cout << "\n\nThank you for your purchase!\n\n\n\n";
			orderCount++;
			if (orderCount >= 1000) {
				cout << "\n\nShutting down to replenish materials.\n\n";
				break;
			}
		};

	}

}


