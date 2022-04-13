// Implementation class for a player
// Author: Zack Edwards

#include <iostream>
#include <ctime>

#include "../card/card.h"
#include "../hand/hand.h"
#include "player.h"

using namespace std;

player::player(string name, int money)
{
    this->name = name;
    this->money = money;
    this->bet = 0;
    this->handSize = 5;
    this->playersHand = hand();
}

void player::setName(string name)
{
    this->name = name;
}

void player::setMoney(int money)
{
    this->money = money;
}

void player::setBet(int bet)
{
    this->bet = bet;
}

void player::setHandSize(int handSize)
{
    this->handSize = handSize;
}

void player::setFullHand()
{
    for (int i = 0; i < handSize; i++)
    {
        playersHand.addCard(card());
    }
}

void player::setFullHand(deck *d)
{
    for (int i = 0; i < handSize; i++)
    {
        playersHand.addCard(d->dealCard());
    }
}

void player::testSetFullHand(int rank1, int rank2, int rank3, int rank4, int rank5, int suit1, int suit2, int suit3, int suit4, int suit5)
{
    // first 5 inputs are ranks 1-13
    // next 5 inputs are suits 1-4
    playersHand.addCard(card(rank1, suit1));
    playersHand.addCard(card(rank2, suit2));
    playersHand.addCard(card(rank3, suit3));
    playersHand.addCard(card(rank4, suit4));
    playersHand.addCard(card(rank5, suit5));
}

void player::clearHand()
{
    while (playersHand.getNumCards() > 0)
    {
        playersHand.removeCard(0);
    }
}

string player::getName()
{
    return name;
}

int player::getMoney()
{
    return money;
}

int player::getBet()
{
    return bet;
}

int player::getHandSize()
{
    return handSize;
}

string player::getHand()
{
    return playersHand.getPokerHandAsString();
}

void player::printAllCards()
{
    return playersHand.printHand();
}

void player::printPlayer()
{
    cout << "Name: " << name << " Money: " << money << " Bet: " << bet << " HandSize: " << handSize << endl;
}
