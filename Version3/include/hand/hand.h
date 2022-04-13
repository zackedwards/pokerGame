// Header class for a hand of cards
// Author: Zack Edwards

#include <iostream>
#include <ctime>
#include <map>

#include "../card/card.h"
#include "../deck/deck.h"

using namespace std;

#ifndef HAND_H
#define HAND_H

class hand
{
private:
    // an arraylist of cards
    card *cards;
    int numCards;

public:
    struct occurances_result;
    hand();
    hand(deck);
    void addCard(card);
    void addCard(int, int);
    string getPokerHandAsString();
    int getPokerHandValue();
    int getNumCards();
    void printHand();
    void removeCard(int);
    void sortHand();
    occurances_result countOccurences();
};

#endif // HAND_H