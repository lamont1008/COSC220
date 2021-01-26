//Kyle Jenifer
//11/5/2020

#include <iostream>
#include "TNode.h"

using namespace std;

TNode::TNode() {

parent = NULL;
left = NULL;
right = NULL;
data = NULL;

}

void TNode::printNode() {

cout << parent << " " << left << " " << right << " " << data << " " << endl;


}
