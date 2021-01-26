//Kyle Jenifer
//10/27/2020
//
#include <iostream>
#include "Stack.h"

using namespace std;


template <class DataType>
Stack<DataType>::Stack(int x) { // constructor
	maxSize = x; //initialize maxsize to 10
	numNodes = 0; //initiliaze numNodes to 0 
	top = NULL;  // initiliaze top to Null
}

template <class DataType>
Stack<DataType>::~Stack() { //deconstructor
	while(!isEmpty()) { // will run while not empty
		pop(); // will delete allocated memory 
	}	

}

template <class DataType>
bool Stack<DataType>::isEmpty() const{ // check if stack is empty
	bool empty;
	if(numNodes == 0) {
		empty = true;
	} else {
		empty = false;
	}
	return empty;
}

template <class DataType>
bool Stack<DataType>::isFull() const{// check if stack is full
	bool full;
 	if(numNodes == maxSize) {
                full = true;
        } else {
                full = false;
        }
		return full;
}

template <class DataType>
void Stack<DataType>::push(const DataType T) {  //push a node onto the top of the stack
	if(isFull() == true) { // check to see if list is Null
		cout << "List is Full" << endl;
	} else {
		StackNode<DataType>* newNode = new StackNode<DataType>; //allocate new memory for datatype
		newNode->data = T;
		
		newNode->next = top; 
		top = newNode;
		numNodes++;
	}
}

template <class DataType>
void Stack<DataType>::pop() { // pop a node from the top of stack
       //cout << "this is num" << numNodes << endl;	
	if(isEmpty() == true) {
		cout << "List is Empty" <<  endl;
	} else {
		StackNode<DataType> *prev = top;
		top = prev->next;
	        
		delete prev;
		 numNodes--;

	}	
}
template <class DataType>
DataType Stack<DataType>::topStack() const { // return data from the top of the stack
	//cout << "This is nodes" << numNodes << endl;
	DataType r = NULL;
	if(!isEmpty() == true) {
		 r = top->data;
		}
	return r;
}
