//Kyle Jenifer
//10/09/2020
// Node.h


#ifndef NODE_H
#define NODE_H

class Node {
	private:
char lastName[20]; // student last name
char firstName[20]; // student first name
int idNumber; // student ID number
Node *next;
	public:
Node(); //constructor
void printNode();
friend class LinkedList;// LinkedList class is a friend of Node class

};

#endif
