//Kyle Jenifer
//11/2/2020

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Cards.h"
#include <iomanip>
#include <string.h>
#include <stdio.h>

using namespace std;

Cards::Cards() { //Constructor initializes cards given them numbers

	ShuffleCard();

	for(int i = 1; i < 14; i++) {
		for(int j = 0; j < 4; j++) {
			cards[i-1].Pic[j] = spade[j];
		}
		cards[i-1].Num = i;
	}

	for(int i = 1; i < 14; i++) {
		for(int j = 0; j < 4; j++) {
			cards[i-1+13].Pic[j] = diamond[j];
		}
		cards[i-1+13].Num = i;
	}

	for(int i = 1; i < 14; i++) {
		for (int j = 0; j < 4; j++) {
			cards[i-1+26].Pic[j] = heart[j];
		}
		cards[i-1+26].Num = i;
	}

	for(int i = 1; i < 14; i++) {
		for (int j = 0; j < 4; j++) {
			cards[i-1+39].Pic[j] = club[j];
	
	}
		cards[i-1+39].Num = i;
	}
}


void Cards::Swap(ACard &x, ACard &y) { //swap function

	ACard temp;
	temp = x;
	x = y;
	y = temp;
}

void Cards::ShuffleCard() { //shuffles thec cards in deck

	int rnum;
	srand(time(0));
	srand((unsigned)time(NULL));

	for(int i = 0; i < 52; i++) {
		rnum = rand() % 52 + 1;
		Swap(cards[i], cards[rnum]);
	}
		NextCard = 0;
}

Cards::ACard Cards::GetCard() { //will choose random card from the deck
	if(NextCard > 51) {
		ShuffleCard();
	}
		NextCard++;
		return cards[NextCard-1];
}

void Cards::CardAce(const char pic [], int line) {
	switch(line) {
		case 1:
			cout <<"---------";
			break;
		case 2:
			cout <<"|"<<"A"<<setw(7)<<"|";
			break;
		case 3:
			cout <<"|"<<setw(8)<<"|";
			break;
		case 4:
			cout <<"|"<<setw(4)<<" "<<setw(4)<<"|";
			break;
		case 5:
			cout <<"|"<<setw(8)<<"|";
			break;
		case 6:
			cout <<"|"<<setw(6)<<pic<<setw(4)<<"|";
			break;
		case 7:
			cout <<"|"<<setw(8)<<"|";
			break;
		case 8:
			cout <<"|"<<setw(4)<<" "<<setw(4)<<"|";
			break;
		case 9:
			cout <<"|"<<setw(8)<<"|";
			break;
		case 10:
			cout <<"|"<<setw(7)<<"A"<<"|";
			break;
		case 11:
			cout <<"---------";
			break;
		default:
			cout << "NO NUMBER FOUND" << endl;
	}
}

void Cards::CardTwo(const char pic[], int line) { 
	switch(line) {
		case 1:
			cout <<"---------";
			break;
		case 2:
			cout <<"|"<<"2"<<setw(7)<<"|";
			break;
		case 3:
			cout <<"|"<<setw(8)<<"|";
			break;
		case 4:
			cout <<"|"<<setw(6)<<pic<<setw(4)<<"|";
			break;
		case 5:
			cout <<"|"<<setw(8)<<"|";
			break;
		case 6:
			cout <<"|"<<setw(8)<<"|";
			break;
		case 7:
			cout <<"|"<<setw(8)<<"|";
			break;
		case 8:
			cout <<"|"<<setw(6)<<pic<<setw(4)<<"|";
			break;
		case 9:
			cout <<"|"<<setw(8)<<"|";
			break;
		case 10:
			cout <<"|"<<setw(7)<<"2"<<"|";
			break;
		case 11:
			cout <<"---------";
			break;
		default:
			cout << "NO NUMBER FOUND" << endl;
	}
}

void Cards::CardThree(const char pic[], int line) {
	switch(line) {
                case 1:
                        cout <<"---------";
                        break;
                case 2:
                        cout <<"|"<<"3"<<setw(7)<<"|";
                        break;
                case 3:
			cout <<"|"<<setw(6)<<pic<<setw(4)<<"|";
                        break;
                case 4:
			cout <<"|"<<setw(8)<<"|";
                        break;
                case 5:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 6:
			cout <<"|"<<setw(6)<<pic<<setw(4)<<"|";
                        break;
                case 7:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 8:
			cout <<"|"<<setw(8)<<"|";
                        break;
                case 9:
                        cout <<"|"<<setw(6)<<pic<<setw(4)<<"|";
                        break;
                case 10:
                        cout <<"|"<<setw(7)<<"3"<<"|";
                        break;
                case 11:
                        cout <<"---------";
                        break;
                default:
                        cout << "NO NUMBER FOUND" << endl;
        }
}

void Cards::CardFour(const char pic[], int line) {
	switch(line) {
                case 1:
                        cout <<"---------";
                        break;
                case 2:
                        cout <<"|"<<"4"<<setw(7)<<"|";
                        break;
                case 3:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 4:
			cout <<"|"<<setw(8)<<"|";
                        break;
                case 5:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 6:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 7:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 8:
			cout <<"|"<<setw(8)<<"|";
                        break;
                case 9:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 10:
                        cout <<"|"<<setw(7)<<"4"<<"|";
                        break;
                case 11:
                        cout <<"---------";
                        break;
                default:
                        cout << "NO NUMBER FOUND" << endl;
        }
}

void Cards::CardFive(const char pic[], int line) {
	switch(line) {
                case 1:
                        cout <<"---------";
                        break;
                case 2:
                        cout <<"|"<<"5"<<setw(7)<<"|";
                        break;
                case 3:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 4:
			cout <<"|"<<setw(8)<<"|";
                        break;
                case 5:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 6:
			cout <<"|"<<setw(6)<<pic<<setw(4)<<"|";
                        break;
                case 7:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 8:
			cout <<"|"<<setw(8)<<"|";
                        break;
                case 9:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 10:
                        cout <<"|"<<setw(7)<<"5"<<"|";
                        break;
                case 11:
                        cout <<"---------";
                        break;
                default:
                        cout << "NO NUMBER FOUND" << endl;
        }
}

void Cards::CardSix(const char pic[], int line) {
	switch(line) {
                case 1:
                        cout <<"---------";
                        break;
                case 2:
                        cout <<"|"<<"6"<<setw(7)<<"|";
                        break;
                case 3:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 4:
			cout <<"|"<<setw(8)<<"|";
                        break;
                case 5:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 6:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 7:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 8:
			cout <<"|"<<setw(8)<<"|";
                        break;
                case 9:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 10:
                        cout <<"|"<<setw(7)<<"6"<<"|";
                        break;
                case 11:
                        cout <<"---------";
                        break;
                default:
                        cout << "NO NUMBER FOUND" << endl;
        }
}

void Cards::CardSeven(const char pic[], int line) {
	switch(line) {
                case 1:
                        cout <<"---------";
                        break;
                case 2:
                        cout <<"|"<<"7"<<setw(7)<<"|";
                        break;
                case 3:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 4:
                        cout <<"|"<<setw(6)<<pic<<setw(4)<<"|";
                        break;
                case 5:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 6:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 7:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 8:
			cout <<"|"<<setw(8)<<"|";
                        break;
                case 9:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 10:
                        cout <<"|"<<setw(7)<<"7"<<"|";
                        break;
                case 11:
                        cout <<"---------";
                        break;
                default:
                        cout << "NO NUMBER FOUND" << endl;
        }
}

void Cards::CardEight(const char pic[], int line) {
	switch(line) {
                case 1:
                        cout <<"---------";
                        break;
                case 2:
                        cout <<"|"<<"8"<<setw(7)<<"|";
                        break;
                case 3:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 4:
                        cout <<"|"<<setw(6)<<pic<<setw(4)<<"|";
                        break;
                case 5:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 6:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 7:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 8:
                        cout <<"|"<<setw(6)<<pic<<setw(4)<<"|";
                        break;
                case 9:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 10:
                        cout <<"|"<<setw(7)<<"8"<<"|";
                        break;
                case 11:
                        cout <<"---------";
                        break;
                default:
                        cout << "NO NUMBER FOUND" << endl;
        }
}

void Cards::CardNine(const char pic[], int line) {
	switch(line) {
                case 1:
                        cout <<"---------";
                        break;
                case 2:
                        cout <<"|"<<"9"<<setw(7)<<"|";
                        break;
                case 3:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 4:
                        cout <<"|"<<setw(6)<<pic<<setw(4)<<"|";
                        break;
                case 5:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 6:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 7:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 8:
			cout <<"|"<<setw(8)<<"|";
                        break;
                case 9:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 10:
                        cout <<"|"<<setw(7)<<"9"<<"|";
                        break;
                case 11:
                        cout <<"---------";
                        break;
                default:
                        cout << "NO NUMBER FOUND" << endl;
        }
}

void Cards::CardTen(const char pic[], int line) {
	switch(line) {
                case 1:
                        cout <<"---------";
                        break;
                case 2:
                        cout <<"|"<<"10"<<setw(6)<<"|";
                        break;
                case 3:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 4:
                        cout <<"|"<<setw(6)<<pic<<setw(4)<<"|";
                        break;
                case 5:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 6:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 7:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 8:
                        cout <<"|"<<setw(6)<<pic<<setw(4)<<"|";
                        break;
                case 9:
			cout <<"|"<<setw(3)<<pic<<setw(7)<<pic<<setw(2)<<"|";
                        break;
                case 10:
                        cout <<"|"<<setw(7)<<"10"<<"|";
                        break;
                case 11:
                        cout <<"---------";
                        break;
                default:
                        cout << "NO NUMBER FOUND" << endl;
        }
}

void Cards::CardJack(const char pic[], int line) {
	switch(line) {
                case 1:
                        cout <<"---------";
                        break;
                case 2:
                        cout <<"|"<<"J"<<setw(7)<<"|";
                        break;
                case 3:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 4:
                        cout <<"|"<<setw(4)<<" "<<setw(4)<<"|";
                        break;
                case 5:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 6:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 7:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 8:
                        cout <<"|"<<setw(4)<<" "<<setw(4)<<"|";
                        break;
                case 9:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 10:
                        cout <<"|"<<setw(7)<<"J"<<"|";
                        break;
                case 11:
                        cout <<"---------";
                        break;
                default:
                        cout << "NO NUMBER FOUND" << endl;
        }
}

void Cards::CardQueen(const char pic[], int line) {
	switch(line) {
                case 1:
                        cout <<"---------";
                        break;
                case 2:
                        cout <<"|"<<"Q"<<setw(7)<<"|";
                        break;
                case 3:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 4:
                        cout <<"|"<<setw(4)<<" "<<setw(4)<<"|";
                        break;
                case 5:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 6:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 7:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 8:
                        cout <<"|"<<setw(4)<<" "<<setw(4)<<"|";
                        break;
                case 9:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 10:
                        cout <<"|"<<setw(7)<<"Q"<<"|";
                        break;
                case 11:
                        cout <<"---------";
                        break;
                default:
                        cout << "NO NUMBER FOUND" << endl;
        }
}

void Cards::CardKing(const char pic[], int line) {
	switch(line) {
                case 1:
                        cout <<"---------";
                        break;
                case 2:
                        cout <<"|"<<"K"<<setw(7)<<"|";
                        break;
                case 3:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 4:
                        cout <<"|"<<setw(4)<<" "<<setw(4)<<"|";
                        break;
                case 5:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 6:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 7:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 8:
                        cout <<"|"<<setw(4)<<" "<<setw(4)<<"|";
                        break;
                case 9:
                        cout <<"|"<<setw(8)<<"|";
                        break;
                case 10:
                        cout <<"|"<<setw(7)<<"K"<<"|";
                        break;
               case 11:
                        cout <<"---------";
                        break;
                default:
                        cout << "NO NUMBER FOUND" << endl;
        }
}

void Cards::PickCard(ACard cards, int line) { //chooses lines from cards to display
	switch(cards.Num) {
		case 1:
			CardAce(cards.Pic,line);
			break;
		case 2:
			CardTwo(cards.Pic, line);
			break;
		case 3:
			CardThree(cards.Pic, line);
			break;
		case 4:
			CardFour(cards.Pic, line);
			break;
		case 5:
			CardFive(cards.Pic, line);
			break;
		case 6:
                        CardSix(cards.Pic, line);
                        break;
		case 7:
                        CardSeven(cards.Pic, line);
                        break;
		case 8:
                        CardEight(cards.Pic, line);
                        break;
		case 9:
                        CardNine(cards.Pic, line);
                        break;
		case 10:
                        CardTen(cards.Pic, line);
                        break;
		case 11:
                        CardJack(cards.Pic, line);
                        break;
		case 12:
                        CardQueen(cards.Pic, line);
                        break;
		case 13:
			CardKing(cards.Pic, line);
			break;		
	}
}

void Cards::PrintCard(ACard cards[], int arrLength) { //Prints card from pickcard function
	
	for(int line = 1; line < 12; line++) {
		for(int i = 0; i < arrLength; i++) {
			PickCard(cards[i], line);
		}
			cout << endl;	
	}

} 
