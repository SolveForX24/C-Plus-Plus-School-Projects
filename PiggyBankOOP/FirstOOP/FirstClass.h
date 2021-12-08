#pragma once
/************************************************************************************
* Darryl DiGiovanna
* Date Created:
* Summary: 
* Revisions:
*
* This is an example for you to use to create your class. You can't use it as is 
* unless you understand refactoring. Create yours from scratch using this as a guide
************************************************************************************/
#include <iostream>
#include <string>

// Note using namespace std in a header is frowned upon. 
// This has a good explanation of the rationale.
// https://www.geeksforgeeks.org/using-namespace-std-considered-bad-practice/
// However, it will make things easier for new programmers and
// and I will not take points off if you choose to use that namespace in your code.
// The code below shows you how to properly add the friend method.



// This is only in my repo to serve as reference. -Xander


class FirstClass
{
//private: All the data you want to hide from the user. 
//It can't be accessed from main without a method returning that data a "getter"
//It can't be modified without a "setter" (Poor practice - might as well make it public at that point.)
//Your construtors are used to initialize key private variables but note, 
//I always give them some value as it's good practice to initialize variables to a known state
private:
	std::string  myStringVar = "EMPTY";
	int myIntVar = 0;
	double myDoubleVar = 0;
public:
	//All possible combinations of constructors (2^3 or 8)
	//You as the developer control which methods you want to supply
	//I have included the all just for demo purposes
	FirstClass(); //(Default constructor - You ALWAYS need to have at this)
	FirstClass(std::string);
	FirstClass(int);
	FirstClass(std::string,int);
	FirstClass(double);
	FirstClass(double, int);
	FirstClass(double, std::string);
	FirstClass(double, std::string, int);

	//methods your class needs to provide to the user so your class does something useful 
	void printMyString();
	void doubleMyIntValue();
	void addToDouble(double);
	double getMyDouble(); //an example of a "getter" use "get" and the name of the item you're getting
	std::string append(std::string);

	friend std::ostream &operator<<(std::ostream&, const FirstClass&);

};
