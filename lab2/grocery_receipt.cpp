#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;
int main() {

	ifstream list;
	list.open("item.txt",ios::in);
	if(!list) 
	{
		cerr <<"File cannont be opened this time" << endl;
		exit(1);
	}
	int item_num;
	int item_valid;
        int item_selection;
        int units;
	char item_name[30];
	char taxability;
	char selling_type;
	float unit_price;

	while(list >> item_num >> item_name >> taxability >> selling_type >> unit_price) {
		 do {
        cout << "Press 1 to begin receipt" << endl;
        cout << "Press 2 to show receipt"<< endl;
        cin >> item_valid;
        if(item_valid == 1){
                cout << "enter item number ";
                cin >> item_selection;
                if(item_selection != item_num) {
                        do {
                                cout << "The item number you entered does not exist. Please try again" << endl;
                                cout << "enter item number ";
                                cin >> item_selection;
                        }while(item_selection == item_num);
                } else {
                        if(selling_type == 'p')
                                cout << "how many pounds ";
        }while(item_valid > 0 && item_valid <= 2)

	}
		 }
}
	

	ofstream receipt;
	receipt.open("Jenifer_Kyle.txt",ios::out);
	if(!receipt) {
		cerr << "Error: File could not be opened" << endl;
		exit(1);
	}
	

	list.close();
	receipt.close();

	return 0;














}
