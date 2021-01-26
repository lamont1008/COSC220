//Kyle Jenifer
//11/19/2020

#ifndef HEAP_H
#define HEAP_H

class Heap {
private:
	int arr[100]; //maximum space for a heap
	int heapSize; // size of heap
	int parent(int); //return index of parent of i.
	int leftChild(int); // return index of left child of i.
	int rightChild(int);//  return index of right child of i
	void heapify(int);
	void buildHeap();
public:
	Heap();
	void insert(int); //insert new data in the Heap
	void heapSort(); //
	int extractMax(); //extract maximum value from the Heap
	int maximum();//return maximum value in the Heap
	void printHeap();// print heap
	void Swap(int &, int &); 
};


#endif
