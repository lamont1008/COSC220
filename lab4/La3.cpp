#include <iostream>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

int menu();

int main() 
{
        int select = ' ';
        LinkedList *list = new LinkedList;
        Node *newNode = NULL;
        do {
                select = menu();
                if(select == 1) {
                       list->insertNode();
                }else if(select == 2) {
                        int numDel;
                        cout << "Enter ID NUM" << endl;
                        cin >> numDel;
                       list->deleteNode(numDel);
                }else if(select == 3) {
                       list->printList();
                }else if(select == 4) {
                         list->searchNode();
                }else if(select == 5) {
                        cout << "Program ended" << endl;
                }else {
                        cout << "Invalid entry" << endl;
                }
                }while(select != 5);
	
		return 0;
}


int menu() {
        char x;
        while(true) {
	cout << "Select one" << endl;
        cout << "1. Insert a node" << endl;
        cout << "2. Delete a node" << endl;
        cout << "3. Print List" << endl;
        cout << "4. Search a node – search a node and print information for a student." << endl;
        cout << "5. Quit the program" << endl;
        cin >> x;
        if(x > 48 && x < 54) {
                break;
        }
        cout << "Invaild entry" << endl;
        }
        return x-48;

}

