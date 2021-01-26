#include "Node.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList() {
	Node *list = NULL;
}

LinkedList::~LinkedList() {
	Node *temp = list;
	while(temp != NULL) {
		list = temp->next;
		delete temp;
		temp = list;
	}
}

Node *LinkedList::createNode() {
		Node *newNode = new Node; //create a new node
                return newNode;
}

Node *LinkedList::searchLocation(int idNumber) { //A utility Member function which returns a location of node for delete, insert a node in the list
	if(list == NULL) {
		list = NULL;
	}
	Node *temp = list;
	while(temp->next != NULL && temp->next->idNumber < idNumber) {
			temp = temp->next;		
	}
	return temp;
}

void LinkedList::insertNode () {
	Node *newNode = createNode(); // create a new node
	Node *temp = list; // pointer to traverse linked list
	
	if (list == NULL) {// Case1: list is empty
		list = newNode;
	} else if (list->idNumber > newNode->idNumber) { // Case 2: a new node as a first node
		newNode->next = list;
		list = newNode;	
	} else {
		temp = searchLocation(newNode->idNumber);
		if(temp->idNumber == newNode->idNumber) {
			cout << "Duplicate " << endl;
		} else if(temp->next == NULL) { //Case 4:Insert as a last element
                        temp->next = newNode;
                }else if(newNode->idNumber == temp->next->idNumber) { //will check for a duplicate number
                        cout << "Invalid entry, There is already a number here" << endl;
                } else if (temp->next->idNumber > newNode->idNumber) { //Case 3: Insert between two nodes
                        newNode->next = temp->next;
                        temp->next = newNode;
		}
	}
}

void LinkedList::deleteNode(int idNumber) {
	Node* temp1 = list;
	  if(list == NULL ) { // will check to see if list is NULL
                        cout << "List is empty" << endl;
			list = NULL;
                }
                else if(temp1->idNumber == idNumber) {// will delete first node
                        list = temp1->next;
                        delete temp1;
                }
                else {
                       Node *temp2 = searchLocation(idNumber);
                    //   cout << temp2->idNumber << endl; 
                if(temp2->next == NULL || temp2->next->idNumber != idNumber) {
                        cout << "No match for this number" << endl;
                }
                else if(temp2->next == NULL) { //will delete between nodes	
                        temp1->next = NULL;
                        delete temp2;
                }else { //will delete at end
			temp1 = temp2->next;
                        temp2->next = temp1->next;
                        delete temp1;
		}
	}
}

void LinkedList::printList() {
	Node *temp = list;
	while(temp != NULL) {
	temp->printNode(); //print from Node Class
	temp = temp->next;
	}
}

void LinkedList::searchNode() {
	int idNumber;
	cout << "Enter ID" << endl;
	cin >> idNumber;
	Node* temp = list;
	if(list == NULL) {
		list = NULL;
		cout << "list is empty" << endl;
	} else {
	Node* temp = searchLocation(idNumber); //call search location to search for number
	if(temp->idNumber == idNumber) {
                        temp->printNode();		
	}else{
		cout << "NO MATCH FOUND!!!, data is not available in the list" << endl;
		}
	}
}
