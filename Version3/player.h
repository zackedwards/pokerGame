// Header class for a player
// Author: Zack Edwards

#include <iostream>
#include <ctime>
#include "card.h"
#include "hand.h"

using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class player
{
private:
    string name;
    int money;
    int bet;
    int handSize;
    hand playersHand;

public:
    player(string name, int money);
    void setName(string name);
    void setMoney(int money);
    void setBet(int bet);
    void setHandSize(int handSize);
    void setFullHand();
    int getMoney();
    int getBet();
    int getHandSize();
    string getName();
    string getHand();
    void printAllCards();
    void printPlayer();
};

#endif