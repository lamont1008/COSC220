//Kyle Jenifer
//11/5/2020

#include "BST.h"
#include "TNode.h"
#include <iostream>

using namespace std;

BST::BST() { //constructor

root = NULL; //intialize root to NULL

}

BST::~BST() { // destructor

deletePost(root); //clean all node in the Binary Search Tree

}

void BST::inOrder(TNode *rootPtr) const { //for inorder work

	if(rootPtr) {
		inOrder(rootPtr->left);
		cout << rootPtr->data << endl;
		inOrder(rootPtr->right);
	}
}

void BST::preOrder(TNode *rootPtr) const { //for pre-order work

	if(rootPtr) {
		cout << rootPtr->data << endl;;
		preOrder(rootPtr->left);
		preOrder(rootPtr->right);
	}	

}

void BST::postOrder(TNode *rootPtr) const { //for post-order work

	if(rootPtr) {
		postOrder(rootPtr->left);
		postOrder(rootPtr->right);
		cout << rootPtr->data << endl;
	}
}

void BST::bstDelete(int num) { //Delete a node from the binary search tree. 
	
	TNode * newNode = bstSearch(num);
	TNode * y;
	TNode * x;
	if(newNode == NULL) {
		cout << "The node is not in the list" << endl;
		return;
	} else {
		if(newNode->left == NULL || newNode->right == NULL) {
			y = newNode;
		} else {
			y = Tree_Successor(newNode);
		} if(y->left != NULL) {
			x = y->left;
		} else {
			x = y->right;
		} if (x != NULL) {
			x->parent = y->parent;
		} if (y->parent == NULL) {
			root = x;
		} else if(y == y->parent->left) {
			y->parent->left = x;
		} else {
			y->parent->right = x;
		}
		if (y != newNode) {
			newNode->data = y->data;
		}	

	delete y;

	}
}

TNode* BST::bstSearch(int num) { //Search a node in the binary search tree.

TNode * y = NULL;
y = root;

while(y != NULL && num != y->data) {

if(num < y->data) {
	y = y->left;
} else {
	y = y->right;
}

}
return y;
}


void BST::bstInsert() { //Insert a new node into the binary search tree. 

	TNode* newNode = createNode();
	TNode * y = NULL;
	TNode * x = root; //while loop find out the location for new node
		if(root == NULL) {
                        root = newNode;
                }
	
		while (x != NULL) {
			y = x;
			if(newNode->data < x->data) {
				x = x->left;
			}else if (newNode->data == x->data) {
				x = NULL;
				cout << "Duplicate" << endl;
			}else {
				x = x->right;
			}
		}
		newNode->parent = y;
		if(y == NULL) {  // means there is any node in the BST
			root = newNode;
		} else if (newNode->data < y->data) { // insert new node as a left child o y
			y->left = newNode;
		} else if(newNode->data == y->data) {
			y = NULL;
			cout << "Duplicate" << endl;
		} else {
			y->right = newNode;  //insert new node as a right child of y
		} 
	}


TNode* BST::Tree_Minimum(TNode* x) { //An element in a binary search tree whose key is a maximum can always be founded by rightmost child.

TNode* y = x;
while(y->left != NULL) {
y = y->left;
}
return y;
}


TNode* BST::Tree_Maximum(TNode* x) { //An element in a binary search tree whose key is a minimum can always be found by leftmost child.

TNode* y = x;
while(y->right != NULL) {
y = y->right;
}
return y;
}


TNode* BST::Tree_Predecessor(TNode * x) { //Predecessor of a Node
if(x->left != NULL) {
	return Tree_Maximum(x->left);
} else {
	TNode * y = x->parent; // if x is y’s rightchild then y is predecessor of x

	while(y != NULL && x == y->left) {
		x = y;
		y = y->parent;
	}
	return y;

}
}

TNode* BST::Tree_Successor(TNode * x) { //Successor of a Node
if(x->right != NULL) {
        return Tree_Minimum(x->right);
} else {
        TNode * y = x->parent; // if x is y’s leftchild then y is successor of x

        while(y != NULL && x == y->right) {
                x = y;
                y = y->parent;
        }
        return y;

}

}

TNode* BST::createNode() {

TNode *newNode = new TNode;
cout << "Enter node " << endl;
cin >> newNode->data;

return newNode;
}


void BST::inOrder() const {

inOrder(root);

}

void BST::preOrder() const {


preOrder(root);

}


void BST::postOrder() const{


postOrder(root);
}



void BST::deletePost(TNode *rootPtr) {

        if(rootPtr) {
                postOrder(rootPtr->left);
                postOrder(rootPtr->right);
                delete rootPtr;
        }
}

