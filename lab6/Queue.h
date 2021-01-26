//Kyle Jenifer
//10/29/2020

#ifndef QUEUE_H
#define QUEUE_H

template <class DataType>
struct QueNode
{
 	DataType data;
 	QueNode<DataType> *next;
};	

template <class DataType>
class Queue
{
private:
	 QueNode<DataType> *front;
	 QueNode<DataType> *back;
 	int queueSize; //size of a Queue
 	int queueCnt; // element count in a Queue
public:
 	Queue(int = 5); //class constructor - initialize variables
 	~Queue(); //class destructor – remove all memory spaces used by queue elements
 	void enQueue(const DataType); //add an item to the back of the queue
 	DataType deQueue(); //remove the first item from the queue and return its value
 	DataType topQueue() const; //return the value of the first item in the queue
 	bool isEmpty() const; //returns true if there are no elements in the queue
 	bool isFull() const; //returns true if there is no system memory for a new queue node
};

#endif
