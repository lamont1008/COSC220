//Kyle Jenifer
//9/24/2020

#include <iostream>
#include "Link.h"
using namespace std;

	Node *createNode() {
		Node *newNode = new Node; //create a new node
	        cout << "Enter Last name" << endl; //ask for last name
		cin >> newNode->lastName; //will read in last name
		cout << "Enter First name" << endl; //ask for first name
		cin >> newNode->firstName; //will read in first name	
		cout << "Enter Id number "<< endl; //ask for Id number
		cin >> newNode->idNum; // reads in Id number
		newNode->Next = NULL;
		return newNode; //will return pointer newNode
	}

	Node *insertNode(Node *list, Node *newNode) {
		 if (list == NULL) {
                                list = newNode;//empty list
                 		return list;
		 }

		Node *temp = list;
		 if(newNode->idNum < temp->idNum) { //insert at beginning
                                newNode->Next = temp;
				list = newNode;
				return list;
                 } 
		while(temp->Next && newNode->idNum >= temp->Next->idNum) {	 	
			temp = temp->Next;
			}
		if(newNode->idNum == temp->idNum) { //will check for a duplicate number
			cout << "Invalid entry, There is already a number here" << endl;	
		} else {
			newNode->Next = temp->Next; //will insert at end or middle
			temp->Next = newNode;
		}
		return list;	//will return pointer to linked list
	}


	Node *searchNode(Node* list) {
		int selectNum;
		cout << "Enter number you want to search for" << endl;
		cin >> selectNum;
		Node *temp = list;
		while(temp != NULL) { // will run while list is not empty
		if(temp->idNum == selectNum) {
			cout << temp->lastName << " " <<  temp->firstName << " " << temp->idNum << endl;
                        return temp; //will return pointer to a node matched with ID number
		}
		temp = temp->Next;
	}	
		cout << "NO MATCH!!!" << endl;
		return NULL; // will return null if doesnt find match
}

	Node *deleteNode(Node* list, int idNum) {
	Node *temp1 = list;
	Node *temp2 = list->Next;
       		

		if(list == NULL ) { // will check to see if list is NULL
			cout << "List is empty" << endl;
		}
		else if(temp1->idNum == idNum) { // will delete first node
			list = temp2;
			delete temp1;
		}
		while(temp2 != NULL && temp2->idNum != idNum) {
			temp1 = temp1->Next;
			temp2 = temp2->Next;
			}
		if(temp2 == NULL) { 
                        cout << "No match for this number" << endl;
                }
		else if(temp2->Next == NULL) { //will delete between nodes
			temp1->Next = NULL;
			delete temp2;
		}else{ //will delete at end
			temp1->Next = temp2->Next;
			delete temp2;
		} 
		
		return list;	// will return pointer to the list
	}

	void printList(Node *list) {
		while(list != NULL) { //will print list while list is not NULL
		cout << list->lastName << " " << list->firstName << " " << list->idNum << endl;
			list = list->Next;
		}
	}
