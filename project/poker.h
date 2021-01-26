//Kyle Jenifer
//12/2/2020

#ifndef POKER_H
#define POKER_H
#include "Cards.h"
#include <iostream>

class Poker: public Cards
{
	public:
/*struct ACard {

char pic[4];
int num;

};
Cards cardsobj;*/
ACard hand[5];

	Poker();
	void startGame();
	void printFive();
	void printDeck();
};


#endif
