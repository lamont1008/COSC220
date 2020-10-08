//Kyle Jenifer
//9/27/2020

#include <iostream>
#include "Link.h"

using namespace std;

int menu(); //function prototype

int main() 
{
	int select = ' ';
	Node *list = NULL;
	Node *newNode = NULL;
	do {
		select = menu();
		if(select == 1) {
			newNode = createNode();
			list = insertNode(list,newNode);
		}else if(select == 2) {
			int numDel;
			cout << "Enter number you want to delete " << endl;
			cin >> numDel;
			list =  deleteNode(list, numDel);
		}else if(select == 3) {
			printList(list);
		}else if(select == 4) {
			 searchNode(list);
		}else if(select == 5) {
			cout << "Program ended" << endl;
		}else {
			cout << "Invalid entry" << endl;
		}
		}while(select != 5);
}

int menu() { //  Menu driven program engine
	char x;
	while(true) {
	cout << "Select one" << endl;
	cout << "1. Insert a node" << endl;
	cout << "2. Delete a node" << endl;
	cout << "3. Print List" << endl;
	cout << "4. Search a node – search a node and print information for a student." << endl;
	cout << "5. Quit the program" << endl;
	cin >> x;
	if(x > 48 && x < 54) {
		break;
	}
	cout << "Invaild entry" << endl;
	}
	return x-48;
}

