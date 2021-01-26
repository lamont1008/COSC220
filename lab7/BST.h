//Kyle Jenifer
//11/5

#ifndef BST_H
#define BST_H
#include "TNode.h"

class BST {
	private: 
TNode* root;
TNode* Tree_Minimum(TNode *);
TNode* Tree_Maximum(TNode *);
TNode* Tree_Successor(TNode *);
TNode* Tree_Predecessor(TNode *);
TNode* createNode();
void deletePost(TNode*);
void inOrder(TNode *) const;
void preOrder(TNode *) const;
void postOrder(TNode *) const;
	public:
BST();
~BST();
void inOrder() const;
void preOrder() const;
void postOrder() const;
void bstInsert();
void bstDelete(int);
TNode* bstSearch(int);

};

#endif
