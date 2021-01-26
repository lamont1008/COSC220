//Kyle Jenifer
//10/28/2020

#include <iostream>
#include "Students.h"

using namespace std;


Students::Students() { // constructor, reads in students name and id
	
	cout << "Enter Last Name" << endl;
	cin >> lastName;

	cout << "Enter First Name" << endl;
	cin >> firstName;

	cout << "Enter ID number" << endl;
	cin >> idNumber;


}

void Students::printStudent() { //will print students info

cout << "ID " << idNumber << " - " << lastName << ", " << firstName << endl;

}

