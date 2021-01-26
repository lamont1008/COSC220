#include <iostream>
#include "poker.h"


using namespace std;


int main () {

double amount = 0.0;
double bet = 0.0;
char select = ' '; 
Poker newObj;

	cout << "Welcome to Casino Poker Game!" << endl;
        cout << "Enter an amount of money to play?" << endl;
        cin >> amount;

	do {
		cout << "do you want to play? Enter Y/N" << endl;
		cin >> select;
		if(select != 'Y' && select != 'y' && select != 'N' && select != 'n'){
			cout << "Invalid Entry" << endl;
			cout << "do you want to play? Enter Y/N" << endl;
        	        cin >> select;
		}
		
		cout << "Enter an amount you want to bet" << endl;
		cin >> bet;

		newObj.printFive();



	} while(select != 'Y' && select != 'y' && select != 'N' && select != 'n');



}
