#include "Node.h"
#include <iostream>
using namespace std;


Node::Node() {
	cout << "Enter Last Name" << endl;
        cin >> lastName;
        cout << "Enter First Name" << endl;
        cin >> firstName;
        cout << "Enter ID Number" << endl;
        cin >> idNumber;
	next = NULL;
}

void Node::printNode() {
	cout << lastName << " " << firstName << " " << idNumber << endl;

}
