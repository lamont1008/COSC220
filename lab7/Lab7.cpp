//Kyle Jenifer
//11/5/2020

#include <iostream>
#include "BST.h"
#include "TNode.h"

using namespace std;
int menu();
int main() {
int select = ' ';

TNode *list = new TNode;
BST *tree = new BST;
char orderSelect = ' ';
int data;
do {
	select = menu();

	if(select == 1) {
	tree->bstInsert();
	}else if (select == 2) {
	cout << "Enter node you want to delete" << endl;	
	cin >> data;
	tree->bstDelete(data);
	} else if (select == 3) {  
		cout << "Select" << endl;
		cout << "a. Inorder" << endl;
		cout << "b. PostOrder" << endl;
		cout << "c. Preorder" << endl;
		cin >> orderSelect;
		do {
			if(orderSelect != 'a' && orderSelect != 'b' && orderSelect != 'c') {
                                                cout << "Invalid Entry" << endl;
                                                cout << "a. Inorder" << endl;
						cout << "b. PostOrder" << endl;
						cout << "c. Preorder" << endl;
                                                cin >> orderSelect;
                                        } else {
						if(orderSelect == 'a') {
							tree->inOrder();					
						} else if(orderSelect == 'b') {
							tree->postOrder();
						} else if(orderSelect == 'c') {
							tree->preOrder();
						}
					}

		}while(orderSelect == 'a' && orderSelect == 'b' && orderSelect == 'c');
	} else if (select == 4) {
		cout << "Program ended" << endl;
	} else {
		cout << "Invalid Entry " << endl;
	}

} while(select != 4);

} 

int menu() {
char x;
        while(true) {
        cout << "Select one" << endl;
        cout << "1. Insert Element to the binary tree" << endl;
        cout << "2. Delete Elements from the binary search tree" << endl;
        cout << "3. Check binary tree by printing" << endl;
        cout << "4. End of Program" << endl;
        cin >> x;
        if(x > 48 && x < 53) {
                break;
        }
        cout << "Invaild entry" << endl;
        }
        return x-48;
}

