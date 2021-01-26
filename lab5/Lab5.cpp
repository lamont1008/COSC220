#include <iostream>
#include "Students.h"
#include "Stack.h"

using namespace std;

int menu();

int main() {

int select = ' ';
int start = 0;
Stack <Students*> sstack; //a stack with Student data type
Stack <int> istack; // a stack with integer
	
	
	cout << "Enter 1 for Student Data Type or 2 for int." << endl;
	cin >> start;
	if(start == 1) {
			do 
			{
                		select = menu();
                		if(select == 1) {
                        		Students *top = new Students;//allocate new memory for Students datatype
					sstack.push(top); // will push stack
                		}else if(select == 2) {
                        		sstack.pop(); //will pop stack
                		}else if(select == 3) {
					Students *Sstu = sstack.topStack(); // assign topstack to students datatype
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
                        		istack.push(x); //will push user id num
                		}else if(select == 2) {
                        		istack.pop(); //will pop user id num from top of stack
                		}else if(select == 3) {
					int i = istack.topStack(); // assign topstack to int 
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
        cout << "1. push() : push a new data as a top of stack" << endl;
        cout << "2. pop() : pop a data from the top of stack" << endl;
        cout << "3. topStack() : need display data in the top of stack" << endl;
        cout << "4. Quit" << endl;
        cin >> x;
        if(x > 48 && x < 53) {
                break;
        }
        cout << "Invaild entry" << endl;
        }
        return x-48;

}

