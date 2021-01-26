#include "poker.h"
#include <iostream>

using namespace std;


Poker::Poker() {


	ShuffleCard();

}

void Poker::startGame() {

	for (int i = 0; i < 5; i++) {
		hand[i] = GetCard(); 
	}
	PrintCard(hand,5);

}

void Poker::printFive() {

		for(int i = 0; i < 5; i++) {
				switch(hand[i].Num) {
				
				case 1:
					cout << hand[i].Pic << "A";
					break;
				case 11:
					cout << hand[i].Pic << "J";
					break;
				case 12:
					cout << hand[i].Pic << "K";
					break;
				case 13: 
					cout << hand[i].Pic << "Q";
					break;
				default:
					cout << hand[i].Pic << " " << hand[i].Num;
				}

		}
}
