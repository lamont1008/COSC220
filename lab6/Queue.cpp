//Kyle Jenifer
//10/29/2020
#include <iostream>
#include "Queue.h"

using namespace std;


template <class DataType>
Queue<DataType>::Queue(int x) { //constructor 
	queueSize = x; //initialize queSize to 10
	queueCnt = 0; //initialize queueCnt to 0
	front = NULL; //initialize front to NULL
	back = NULL; //initialize back to NULL
}

template <class DataType>
Queue<DataType>::~Queue() { // deconstructor
while(!isEmpty()) { //will run while not empty 

	deQueue(); //will delete allocated memory

	}
}

template <class DataType>
void Queue<DataType>::enQueue(const DataType T) { //put node at top of the stack
	if(isFull() == true) { //check to see if list is full
		cout << "List is Full" << endl;
	} else {
		QueNode<DataType>* newNode = new QueNode<DataType>; // allocate new memory for datatype
		newNode->data = T;
		newNode->next = NULL;
		if(isEmpty() == true) {
			back = newNode;
			front = newNode;
			queueCnt++;
		} else {
		back->next = newNode;
		back = newNode;
		queueCnt++;
		}
	}
}


template <class DataType>
DataType Queue<DataType>::deQueue() { //remove first node from list
	if(isEmpty() == true) {
		cout << "List is Empty" << endl;
	} else {
		QueNode<DataType>* prev = front;
		front = prev->next;
		
		DataType d = prev->data;
		delete prev;
		queueCnt--;
		return d;
	}
}


template <class DataType>
DataType Queue<DataType>::topQueue() const { // will return data;
	DataType r = NULL;
        if(!isEmpty() == true) {
                 r = front->data;
                }
        return r;
}

template <class DataType>
bool Queue<DataType>::isEmpty() const { // check to see if list is empty
	bool empty;
        if(queueCnt == 0) {
                empty = true;
        } else {
                empty = false;
        }
        return empty;
}

template <class DataType>
bool Queue<DataType>::isFull() const { //check to see if list is full
	bool Full;
	if(queueCnt == queueSize) {
		Full = true;
	} else {
		Full = false;
	}
		return Full;
}
