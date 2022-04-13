// Implementation class for a deck of cards
// Author: Zack Edwards

#include <iostream>
#include <ctime>

#include "deck.h"
#include "../card/card.h"

using namespace std;

deck::deck()
{
    int *ranks = new int[13];
    int *suits = new int[4];
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cards[i * 4 + j] = card(i + 1, j + 1);
        }
    }
    this->numCards = 52;
}

void deck::addCard(card)
{
    if (numCards < 52)
    {
        cards[numCards] = card();
        this->numCards++;
    }
}

void deck::printDeck()
{
    for (int i = 0; i < numCards; i++)
    {
        cout << cards[i].getCardAsString() << endl;
    }
}

void deck::shuffle()
{
    srand(time(NULL));
    for (int i = 0; i < 52; i++)
    {
        int randIndex = rand() % 52;
        card temp = cards[i];
        cards[i] = cards[randIndex];
        cards[randIndex] = temp;
    }
    this->numCards = 52;
}

void deck::decreaseNumCards()
{
    this->numCards--;
}

card deck::dealCard()
{
    cout << "Dealing card" << endl;
    if (numCards > 0)
    {
        card c = cards[numCards - 1];
        cout << numCards << endl;
        decreaseNumCards();
        return c;
    }
    else
    {
        cout << "We need a second deck!" << endl;
        shuffle();

        card c = cards[numCards - 1];
        decreaseNumCards();
        return c;
    }
}

int deck::getNumCards()
{
    return this->numCards;
}
