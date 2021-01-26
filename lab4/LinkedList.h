#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList {
	private:
Node* list;
Node* createNode();
Node* searchLocation(int);
	public:
LinkedList();
~LinkedList();
void insertNode();
void deleteNode(int);
void printList();
void searchNode();
};

#endif
