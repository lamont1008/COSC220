//Kyle Jenifer
//10/1/2020



#ifndef LINK_H
#define LINK_H


	struct Node{
		int itemNum;
		char itemName[40];
		char taxability;
		double unit; //for pound or number of unit
		double tax;
		double subtotal;
		double unitPrice;
 		Node *Next;
};
	
	Node *createNode(); //will create the node
	Node *insertNode(Node *, Node *); //will insert the node 
	Node *searchNode(Node*, int); // will search for a node
	Node *deleteNode(Node*, int); // will delete a node
	void printList(Node*);// will print node
	double printTotal(Node *);
#endif
