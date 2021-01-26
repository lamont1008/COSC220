//Kyle Jenifer
//11/21/2020

#include <iostream> 
#include "Heap.h"

using namespace std;

int menu();

int main() {

Heap obj;
int select = ' ';


do {
	select = menu();
	if(select == 1) {
		int key;
		cout << "Enter key" << endl;
		cin >> key;
		obj.insert(key);
	}else if(select == 2) {
		int maxResult = obj.maximum();
		if(maxResult != -999999) {
		cout <<"this is max val " << maxResult << endl;
		}
	}else if(select == 3) {
		int result = obj.extractMax();
		if(result != -999999) {
			cout << "This is extract max " << result << endl;
		}
	}else if(select == 4) {
		obj.printHeap();
	}else if(select == 5) {
		obj.heapSort();
		obj.printHeap();
	}else {
		cout << "Invaild Entry" << endl;
	}



}while(select!=5);


}

int menu() {
char x;
        while(true) {
        cout << "Select one" << endl;
        cout << "1. Insert element into the heap" << endl;
        cout << "2. Maximum Value" << endl;
        cout << "3. Extract maximum element from the heap" << endl;
        cout << "4. Print heap" << endl;
	cout << "5. Heap Sort, Print sorted results and exit." << endl;
        cin >> x;
        if(x > 48 && x < 54) {
                break;
        }
        cout << "Invaild entry" << endl;
        }
        return x-48;
}

