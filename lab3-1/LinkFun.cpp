//Kyle Jenifer
//10/1/2020

#include <iostream>
#include "Link.h"
using namespace std;

	Node *createNode() {
		Node *newNode = new Node; //create a new node
	  	newNode->itemNum;
		newNode->itemName;
		newNode->unit;
		newNode->tax;
		newNode->subtotal;
		newNode->taxability;
		newNode->unitPrice;
		newNode->Next = NULL;
		return newNode; //will return pointer newNode
	}

	Node *insertNode(Node *list, Node *newNode) {	
		if (list == NULL) { 
                                list = newNode;//empty list    			
		}
		else if(newNode->itemNum < list->itemNum) { //insert at beginning
                                newNode->Next = list;
				list = newNode;
                 }
		else{
		Node *temp = list;	
		while(temp->Next && newNode->itemNum >= temp->Next->itemNum) {	 	
				temp = temp->Next;
			}
		if(newNode->itemNum == temp->itemNum) {	//will check for a duplicate number
				if(newNode->taxability == 't') {
					temp->unit +=newNode->unit;
					temp->tax = temp->unit*temp->unitPrice*0.06;
                                	temp->subtotal = (temp->unit*temp->unitPrice)+temp->tax;
				}else if(newNode->taxability == 'n') {
					temp->unit +=newNode->unit;
					temp->tax = 0.0;
					temp->subtotal = (temp->unit*temp->unitPrice)+temp->tax;
				}
		}else{ 
			newNode->Next = temp->Next; //will insert at end or middle
			temp->Next = newNode;
		}
	}
		return list;	//will return pointer to linked list
		 
	}

	Node *searchNode(Node* list, int itemNum) {
		Node *temp = list;
		while(temp != NULL) { // will run while list is not empty
		if(temp->itemNum == itemNum) {
			cout << temp->itemNum << " " <<  temp->itemName << " " << temp->unit << " " << temp->tax << " " << temp->subtotal << endl;
                        return temp; //will return pointer to a node matched with ID number
		}
		temp = temp->Next;
	}	
		cout << "NO MATCH!!!" << endl;
		return NULL; // will return null if doesnt find match
}

	Node *deleteNode(Node* list, int itemNum) {
	Node *temp1 = list;

		if(list == NULL ) { // will check to see if list is NULL
			cout << "List is empty" << endl;
		}
		else if(temp1->itemNum == itemNum) {// will delete first node
			list = temp1->Next;
			delete temp1;
		}
		else {
			Node *temp2 = list->Next;
		while(temp2 != NULL && temp2->itemNum != itemNum) {
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
	}
		return list;	// will return pointer to the list
	}

	void printList(Node *list) {
		Node* temp = list;
		while(temp != NULL) { //will print list while list is not NULL
		cout << temp->itemNum << " " << temp->itemName << " " << temp->unit << " " << temp->tax << " " << temp->subtotal << endl;
			temp = temp->Next;
		}
	}

	double printTotal(Node *list) {
	Node *temp = list;
	double total = 0.0;
	while(temp != NULL) {
	total += temp->subtotal;
	temp = temp->Next;
}
	return total;
	}

