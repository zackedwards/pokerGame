// Header class for a deck of cards
// Author: Zack Edwards

#include <iostream>
#include <ctime>

#include "../card/card.h"

using namespace std;

#ifndef DECK_H
#define DECK_H

class deck
{
private:
    // an arraylist of cards
    card *cards;
    int numCards;

public:
    deck();
    void addCard(card);
    void printDeck();
    void shuffle();
    void decreaseNumCards();
    card dealCard();
    int getNumCards();
};

#endif