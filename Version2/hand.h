//Header class for a hand of cards
//Author: Zack Edwards

#include <iostream>
#include <ctime>

#include "card.h"

using namespace std;

#ifndef HAND_H
#define HAND_H

class hand
{
private:
    //an arraylist of cards
    card *cards;
    int numCards;

public:
    hand();
    void addCard(card);
    string getPokerHandAsString();
    int getPokerHandValue();
    int getNumCards();
    void printHand();
    void removeCard(int);
    void sortHand();
    int countOccurences(int x, bool pair, bool two_pair, bool three, bool four);
};

#endif // HAND_H