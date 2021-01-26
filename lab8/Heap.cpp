//Kyle Jenifer
//11/19/2020


#include <iostream>
#include "Heap.h"

using namespace std;

Heap::Heap() { //constructor initiate array with {4, 12, 3, 19, 23, 5, 32, 11, 2, 24} and heapSize =10 and call buildHeap function to build a heap.

	arr[0] = 12;
	arr[1] = 5;
	arr[2] = 7;
	arr[3] = 9;
	arr[4] = 3;
	arr[5] = 6;
	arr[6] = 4;
	arr[7] = 15;
	arr[8] = 11;
	arr[9] = 8; 
	heapSize = 10;
	buildHeap();
}

int Heap::parent(int i) { // return index of parent of i

	if(i%2==0) {
		return ((i-1)/2);
	}else {
		return(i/2);
	}
}

int Heap::leftChild(int i) { // return index of left child of i.

	return (2*i)+1;

}

int Heap::rightChild(int i) { // return index of right child of i

	return (2*i)+2;

}

void Heap::heapify(int i) { //is the key to maintain the heap property

	int L = leftChild(i);
	int R = rightChild(i);
	int Largest;
	if (L < heapSize && arr[L] > arr[i]) {
 		Largest = L;
	} else {
 		Largest = i;
	}
	if(R < heapSize && arr[R] > arr[Largest]) {
 		Largest = R;
	}
	if (Largest != i) {
 		Swap (arr[i], arr[Largest]);
 		heapify(Largest);
	}

}

void Heap::buildHeap() { //produces a heap from an unordered input array.
	
	for(int i = ((heapSize/2)-1); i >= 0; i--) {
		heapify(i);
	}

}

void Heap::Swap(int &x, int &y) {

        int temp;
        temp = x;
        x = y;
        y = temp;
}

void Heap::heapSort() { //sort an array in place.
	buildHeap();
	int temp = heapSize;
	for(int i = heapSize-1; i >= 0; i--) {
		Swap(arr[0],arr[i]);
		heapSize--;
		heapify(0);
	}
	heapSize = temp;
}

int Heap::extractMax() { //extract maximum value from the heap

	if (heapSize < 1) {
 		cout << "heap extract max underflow" << endl;
		return -999999;
	} else {
		int max = arr[0];
		arr[0] = arr[heapSize-1];
		heapSize = heapSize-1;
		heapify(0);
		return max;
	}
}

int Heap::maximum() { //return maximum value in the Heap.
	   if (heapSize < 1) {
                cout << "heap maximum underflow" << endl;
		return -999999;
        }else { 
		return arr[0];
	}
}

void Heap::insert(int key) { //allow the heap data structure to be used as a priority queue.

	heapSize = heapSize+1;
	int i = heapSize-1;

	while(i>0 && arr[parent(i)] < key) {
	
		arr[i] = arr[parent(i)];
		i = parent(i);
	}
	arr[i] = key;


}


void Heap::printHeap() { //print heap
	if(heapSize < 1) {
		cout << "the list is empty" << endl;
	}
	for(int i = 0; i < heapSize; i++) {
	cout << arr[i] << " ";
	}
	cout << endl;
}
