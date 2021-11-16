// You need to rename this project using the following Steps
// 1. Rename this replit
// 2. Select "Rename" and rename it appropriately. For example DiGiovanna_WS_Files

// Add your header.

#include <iostream>
#include <string>
// Add all other needed header files

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
	string shutDownPassword;
	string shouldAbandon;

	int orderCount = 0;
	
	int hotdogCount = 0;
	int candyCount = 0;
	int drinkCount = 0;
	int popcornCount = 0;
	int pizzaCount = 0;


	while (running) {
		
		orderCount = 0;

		hotdogCount = 0;
	    candyCount = 0;
	    drinkCount = 0;
		popcornCount = 0;
	    pizzaCount = 0;
		toLowerCount = 0;


		running = true;
		ordering = true;
		abandoned = false;

		cout << "What is your name? ";
		getline(cin, name);
		getline(cin, dummy);
		
		while (ordering) {
			cout << "Please make an order:\n\n(B)everage	$5.00\n(C)andy	$2.25\n(H)ot Dog	$7.00\n(P)opcorn	$6.75\nP(i)zza	            $4.50\n\nPlease enter one of the letters in the parentheses for your order: ";
			cin >> order;

			order = lowerCase(order);

			cout << order;

			if (order == "b") {
				cout << "Your order for a Beverage has been processed!";
				drinkCount++;
			}
			else if (order == "c") {
				cout << "Your order for a Candy has been processed!";
				candyCount++;
			}
			else if (order == "h") {
				cout << "Your order for a Hot Dog has been processed!";
				hotdogCount++;
			}
			else if (order == "p") {
				cout << "Your order for a Popcorn has been processed!";
				popcornCount++;
			}
			else if (order == "i") {
				cout << "Your order for a Pizza has been processed!";
				pizzaCount++;
			}
			else if (order == "q") {
				cout << "Please enter the shut-down password: ";
				getline(cin, shutDownPassword);
				getline(cin, dummy);

				if (shutDownPassword == "ShutMeDown!") {
					shutDown = true;
					break;
				}
			}
			else {
				cout << "That was not a proper menu. Would you like to try again, or would you like me to cancel your order? (Try Again = T, Leave = L) ";
				cin >> shouldAbandon;
				shouldAbandon = lowerCase(shouldAbandon);



			}

			cout << "Would you like to order another item?"
		}

		if (shutDown) {
			break;
		};

	}

}


