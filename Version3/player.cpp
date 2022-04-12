// Implementation class for a player
// Author: Zack Edwards

#include <iostream>
#include <ctime>
#include "card.h"
#include "hand.h"
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
