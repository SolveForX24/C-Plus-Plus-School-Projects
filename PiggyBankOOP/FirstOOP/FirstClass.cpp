/**************************************************************************************
* Darryl DiGiovanna
* Date Created:
* Summary:
* Revisions:
*
* This is an example for you to use to create your class. You can't use it as is
* unless you understand refactoring. Create yours from scratch using this as a guide
***************************************************************************************/

// This is only in my repo to serve as reference. -Xander
#include <iostream>
#include "FirstClass.h"
#include <iomanip> 
using namespace std;

//default Constructor
FirstClass::FirstClass() {}
//Construtor with a string variable
FirstClass::FirstClass(string pAString) {
	myStringVar = pAString;
}
FirstClass::FirstClass(int pAnInt) {
	myIntVar = pAnInt;
}
FirstClass::FirstClass(string pAString, int pAnInt) {
	myStringVar = pAString;
	myIntVar = pAnInt;
}
FirstClass::FirstClass(double pADouble) {
	myDoubleVar = pADouble;

}
FirstClass::FirstClass(double pADouble, int pAnInt) {
	myDoubleVar = pADouble;
	myIntVar = pAnInt;
}
FirstClass::FirstClass(double pADouble, string pAString) {
	myDoubleVar = pADouble;
	myStringVar = pAString;
}
FirstClass::FirstClass(double pADouble, string pAString, int pAnInt) {
	myDoubleVar = pADouble;
	myIntVar = pAnInt;
	myStringVar = pAString;
}


// getters/setters typically listed first Use a getter to use the class data in your main
//remember you CAN NOT change private data from main unless you provide a method to do so
double  FirstClass::getMyDouble() {
	return myDoubleVar;
}

//Use a print if your want to print a message about a data element in the class
void FirstClass::printMyString() {
	cout << "My String is " + myStringVar << endl;
}
// methodes to do something useful 
void FirstClass::doubleMyIntValue( ) {
	myIntVar *= 2;
}
void FirstClass::addToDouble(double pADouble) {
	myDoubleVar += pADouble;
}
string FirstClass::append(string aString) {
	return (myStringVar + aString);
}


//ALWAYS provide a way to output your class data using "<<"
// Note the format as you need to make this for your class.
// the name of your class should be after the "const" keyword
// name the parameter the same as your classname, just put an "a" infront of it
// you can access any member of your class as you normally for output purposes.
// eg. for a class called PiggyBank the line would read
// ostream& operator<<(ostream& output, const PiggyBank &aPiggyBank) {
ostream& operator<<(ostream& output, const FirstClass &aFirstClass) {
	
	output << "Private string data: " << aFirstClass.myStringVar << endl <<
		      "Private int data: " << aFirstClass.myIntVar << endl <<
		      "Private double data: "<< aFirstClass.myDoubleVar <<  endl;
	return output;
}