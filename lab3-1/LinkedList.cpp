//Kyle Jenifer
//10/1/2020

#include <iostream>
#include "Link.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int menu(); //function prototype

int main() 
{
	ifstream gList;
	ofstream receipt;
	int select = ' ';
        Node *list = NULL;
        Node *newNode = NULL;


	int item_selection;
	int itemNum;
        char item[40];
        char taxability;
        char sellingType;
        float unitPrice;
	int item_valid;
        int index;
        float unit_selection;
        float tax = 0.0;
        float subtotal = 0.0;
        float totalCount = 0.0;


		gList.open("item.txt",ios::in);
        	if(!gList)
        	{
                cerr <<"File cannont be opened this time" << endl;
                exit(1);
        	}

		receipt.open("Jenifer_Kyle",ios::out);
                if(!receipt)
                {
                        cerr <<"File cannont be opened this time" << endl;
                        exit(1);
              	}

	
	receipt <<"Item Number "<<setw(20)<<"Item Name "<<setw(20)<<"Unit " <<setw(20)<<"Unit Price "<<setw(20)<<"Tax "<<setw(20)<<"subtotal" << endl;
	
	do {
		select = menu();
	
		if(select == 1) {
			cout << "Enter item number" << endl;
			cin >> item_selection;
			newNode = createNode();
		//	list = insertNode(list,newNode);
			 while(!gList.eof() && item_selection != itemNum) {
                		gList >> itemNum >> item >> taxability >> sellingType >> unitPrice;
                			if(item_selection == itemNum)
                        			break;
                			if(gList.eof()) {
                        			cout << "Try again " << endl;
                			}		
        			}		
                        		if(gList.eof()) {
                        			cout << "Try again " << endl;

                		}else {
					if(sellingType == 'n') {
                               	 	cout << "How many units would you like" << endl;
                                	cin >> unit_selection;
                                		do{
                                        		if(unit_selection <= 0) {
                                                		cout << "invalid selection. Please try again" << endl;
                                                		cout << "How many units would you like" << endl;
                                                		cin >> unit_selection;
                                        		}
                                        	}while(unit_selection <= 0);

				} else if(sellingType == 'p') {
                                	cout << "How many pounds would you like" << endl;
                                	cin >> unit_selection;
                                		do{
                                        		if(unit_selection <= 0) {
                                        			cout << "invalid selection. Please try again" << endl;
                                                		cout << "How many pounds would you like" << endl;
                                                		cin >> unit_selection;
                                        		}
                                        }while(unit_selection <= 0);
                        	} else {
                                	unit_selection = 1;
                        	}	 
			 	if(taxability == 't') {
                                		tax = unit_selection * unitPrice * 0.06;
                        	} else if(taxability == 'n')
                                tax = 0.0;
                        subtotal = (unit_selection * unitPrice) + tax;

                        totalCount+=subtotal;
						
		
			newNode->itemNum = item_selection;
			for(int i = 0; i < 40; i++) {
				newNode->itemName[i]= item[i];
			}
			newNode->unit = unit_selection;
			newNode->tax = tax;
			newNode->unitPrice = unitPrice;
			newNode->subtotal = subtotal;
			newNode->taxability = taxability;
			list = insertNode(list, newNode);

		}
			gList.clear();
                        gList.seekg(0);
		}else if(select == 2) {
                        printList(list);
		}else if(select == 3) {
			int numDel;
			cout << "Enter number you want to delete " << endl;
			cin >> numDel;
			Node *node = searchNode(list,numDel);
			if(node != NULL) {
			cout << "Enter amount to delete" << endl;
			cin >> unit_selection;
			node->unit -= unit_selection;
			if(node->unit <=0) {
			list = deleteNode(list, numDel);
			}else {
				unit_selection = node->unit;
				subtotal = (unit_selection * unitPrice) + tax;			
			}
		}
		}else if(select == 4) {
			cout << "Thanks for shopping have a good day" << endl;


		}else {
			cout << "Invalid entry" << endl;
		}
		}while(select != 4);
	Node * temp = list;
	while (temp != NULL) { 	
receipt <<temp->itemNum <<setw(30)<< temp->itemName <<setw(20) << temp->unit <<setw(20) <<temp->unitPrice << setw(20)  << temp->tax << setw(20) << temp->subtotal << endl;
	temp = temp->Next;	}
	receipt << "Total" <<setw(107) << printTotal(list) <<endl;
		gList.close();
                receipt.close();
		
	
}

int menu() { //  Menu driven program engine
	char x;
	while(true) {
	cout << "Select one" << endl;
	cout << "1. Insert new item" << endl;
	cout << "2. Print currently selected item" << endl;
	cout << "3. Delete item from the currently selected item list" << endl;
	cout << "4. Create a receipt and stop" << endl;
	cin >> x;
	if(x > 48 && x < 53) {
		break;
	}
	cout << "Invaild entry" << endl;
	}
	return x-48;
}
/*
 * ifstream list;
        ofstream receipt;
        int numId;
        char itemName[30];
        char taxability;
        char sellingType;
        float  unitPrice;



        list.open("item.txt",ios::in);
        if(!list)
        {
                cerr <<"File cannont be opened this time" << endl;
                exit(1);
        }

        int item_valid;
        int item_selection;
        int index;
        float unit_selection;
        float tax = 0.0;
        float subtotal = 0.0;
        float totalCount = 0.0;
        char prog_selection;

        receipt.open("Jenifer_Kyle",ios::out);
                if(!receipt)
                {
                        cerr <<"File cannont be opened this time" << endl;
                        exit(1);

              }
                receipt <<"Item Number "<<setw(20)<<"Item Name "<<setw(20)<<"Unit " <<setw(20)<<"Unit Price "<<setw(20)<<"Tax "<<setw(20)<<"subtotal" << endl;
                do {
                do {
                        cout << "Enter Id number " << endl;
                        cin >> item_selection;

		 do {
                        if(item_selection <= 0) {
                                cout << "Invalid selection please try again" << endl;
                                cout << "Enter Id number " << endl;
                                cin >> item_selection;
                        }
                }while(item_selection <=0);
        }while(item_selection <= 0);

        while(!list.eof() && item_selection != numId) {
                list >> numId >> itemName >> taxability >> sellingType >> unitPrice;
                if(item_selection == numId)
                        break;
                if(list.eof()) {
                        cout << "Try again " << endl;
                }
        }
                        if(list.eof()) {
                        cout << "Try again " << endl;

                }

                else{
                        if(sellingType == 'n') {
                                cout << "How many units would you like" << endl;
                                cin >> unit_selection;
                                do{
                                        if(unit_selection <= 0) {
                                                cout << "invalid selection. Please try again" << endl;
                                                cout << "How many units would you like" << endl;
                                                cin >> unit_selection;
                                        }
                                        }while(unit_selection <= 0);

                        } else if(sellingType == 'p') {
                                cout << "How many pounds would you like" << endl;
                                cin >> unit_selection;
                                do{
                                        if(unit_selection <= 0) {
					cout << "invalid selection. Please try again" << endl;
                                                cout << "How many pounds would you like" << endl;
                                                cin >> unit_selection;
                                        }
                                        }while(unit_selection <= 0);
                        } else {
                                unit_selection = 1;
                        }

                        if(taxability == 't') {
                                tax = unit_selection * unitPrice * 0.06;
                        } else if(taxability == 'n')
                                tax = 0.0;
                         subtotal = (unit_selection * unitPrice) + tax;
                        totalCount+=subtotal;
       receipt << numId <<setw(30)<< itemName <<setw(20) << unit_selection <<setw(20) << unitPrice << setw(20)  << tax << setw(20) << subtotal << endl;
                cout << "Would you like to select another item?" << endl;
                cout << "Enter Y/y to select another Item or N/n to end program" << endl;
                cin >> prog_selection;
                        do{
                        if(prog_selection != 'N' && prog_selection != 'n' && prog_selection != 'Y' && prog_selection != 'y') {
                                cout << "Test 1" << endl;
                                cout << "Invalid Selection. Please try again" << endl;
                                cout << "Would you like to select another item?" << endl;
                                cout << "Enter Y/y to select another Item or N/n to end program" << endl;
                                cin >> prog_selection;
                        }
                }while(prog_selection != 'N' && prog_selection != 'n' && prog_selection != 'Y' && prog_selection != 'y');

                        }
                list.clear();
                list.seekg(0);

                } while(prog_selection != 'N' && prog_selection != 'n');

                receipt << "Total" <<setw(107) << totalCount <<endl;

                list.close();
                receipt.close();

 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * */
