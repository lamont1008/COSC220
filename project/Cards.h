//Kyle Jenifer
//10/29/2020

#ifndef CARDS_H
#define CARDS_H

class Cards {
	private:
int NextCard = 0;
const char spade[4]="\xe2\x99\xa0";
const char club[4]= "\xe2\x99\xa3";
const char heart[4] = "\xe2\x99\xa5";
const char diamond[4]="\xe2\x99\xa6";
	public:
struct ACard{
        int Num;
        char Pic[4];
};
ACard cards[52];
Cards();
void ShuffleCard();
ACard GetCard();
void CardAce(const char [], int );
void CardTwo(const char [], int );
void CardThree(const char [], int );
void CardFour(const char [], int);
void CardFive(const char [], int );
void CardSix(const char [], int);
void CardSeven(const char [], int);
void CardEight(const char [], int);
void CardNine(const char[], int);
void CardTen(const char[], int);
void CardJack(const char[], int);
void CardQueen(const char[], int);
void CardKing(const char [], int);
void Swap(ACard &, ACard &);
void PickCard(ACard, int);
void PrintCard(ACard[], int);
};

#endif
