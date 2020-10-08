//Kyle Jenifer
//9/24/2020



#ifndef LINK_H
#define LINK_H


	struct Node {
		char lastName[20]; //student's last name
		char firstName[20]; // sudent's first name
		int idNum; // students's Id Number
		Node *Next; // Pointer to next node
	};
	
	Node *createNode(); //will create the node
	Node *insertNode(Node *, Node *); //will insert the node 
	Node *searchNode(Node*); // will search for a node
	Node *deleteNode(Node*, int); // will delete a node
	void printList(Node*);// will print node
#endif
