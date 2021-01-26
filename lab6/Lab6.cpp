//Kyle Jenifer
//10/29/2020

#include <iostream>
#include "Queue.h"
#include "Students.h"

using namespace std;

int menu();

int main() {

int select = ' ';
int start = 0;
Queue <Students*> squeue; //a queue with Student data type
Queue <int> iqueue; // a queue with integer data type

cout << "Enter 1 for Student Data Type or 2 for int." << endl;
        cin >> start;
        if(start == 1) {
                        do
                        {
                                select = menu();
                                if(select == 1) {
                                        Students *top = new Students;//allocate new memory for Students datatype
					squeue.enQueue(top);
                                }else if(select == 2) {
                                        squeue.deQueue(); //will dequeue stack
                                }else if(select == 3) {
                                        Students *Sstu = squeue.topQueue(); // assign topqueue to students datatype
                                        if(Sstu == NULL) { //will tell list is Null if nothing is in list
                                                cout << "List is NULL" << endl;
                                        } else {
                                        Sstu->printStudent();// print list
                                        }
                                }else if(select == 4) {
                                        cout << "Program ended" << endl;
                                }else {
                                        cout << "Invalid entry" << endl;
                                }
     	                   }while(select != 4);
        	}else if (start == 2) {
                        do
                        {
                                select = menu();
                                if(select == 1) {
                                        int x = 0;
                                        cout << "Enter Id num" << endl;
                                        cin >> x;
                                        iqueue.enQueue(x); //will enQueue user id num
                                }else if(select == 2) {
                                        iqueue.deQueue(); //will deQueue user id num from top of stack
                                }else if(select == 3) {
                                        int i = iqueue.topQueue(); // assign topQueue to int
                                        if(i == 0) {
                                                cout << "List is empty" << endl;
					} else {
                                        cout << i << endl;
                                        }
                                }else if(select == 4) {
                                        cout << "Program ended" << endl;
                                }else {
                                        cout << "Invalid entry" << endl;
				}
                        }while(select != 4);
        	}else {
                			cout << "Invalid Entry" << endl;
        	}

}


int menu() {
char x;
        while(true) {
        cout << "Select one" << endl;
        cout << "1. enQueue() : insert a new element at the end of the Queue" << endl;
        cout << "2. deQueue() : remove an element from the front of the Queue" << endl;
        cout << "3. topQueue() : need display data in the top of queue" << endl;
        cout << "4. Quit" << endl;
        cin >> x;
        if(x > 48 && x < 53) {
                break;
        }
        cout << "Invaild entry" << endl;
        }
        return x-48;
}
