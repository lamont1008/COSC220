//Kyle Jenifer
//11/5/2020

#ifndef TNODE_H
#define TNODE_H

class TNode {
	private:
TNode* parent;
TNode* left;
TNode* right;
double data;
	public: 
TNode();
void printNode();

friend class BST;
};

#endif
