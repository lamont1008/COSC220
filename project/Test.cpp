//Kyle Jenifer
//11/4/20

#include <iostream>
#include "Cards.h"

using namespace std;

int menu(); 

int main() {

int select = ' ';
Cards* cardsObj = NULL;
Cards newObj;
Cards::ACard hand[5];
int num = 5;


do{
	select = menu();
		if(select == 1) { 
			if(cardsObj == NULL) { //if its null
			 cardsObj = new Cards; //creates card object
			} else {
				delete cardsObj; //will delete if already made
				cardsObj = new Cards;
			}
		}else if(select == 2) {
			cardsObj->ShuffleCard(); //shuffles card
		}else if(select == 3) {
			for(int num = 2; num <= 5; num++) { 	
				for(int i = 0; i < num; i++) {
                			hand[i]= cardsObj->GetCard();//calls getcards and print cards rows two through five
				}
				cardsObj->PrintCard(hand,num);
		}
		}else if(select == 4) {
			delete cardsObj; //deletes object
			cout << "Program Ended" << endl;
		}else {
			cout << "Invalid Entry, Please try again" << endl;
		}
}while(select!=4);


//newObj.PrintCard(hand,num);


}


int menu() {
char x;
        while(true) {
        cout << "Select one" << endl;
        cout << "1. Create a Card Object" << endl;
        cout << "2. Shuffle Cards" << endl;
        cout << "3. Display 2, 3, 4, 5 cards" << endl;
        cout << "4. Quit" << endl;
        cin >> x;
        if(x > 48 && x < 53) {
                break;
        }
        cout << "Invaild entry" << endl;
        }
        return x-48;
}

