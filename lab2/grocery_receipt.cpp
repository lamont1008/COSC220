#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

	ifstream list;
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


	return 0;
}
