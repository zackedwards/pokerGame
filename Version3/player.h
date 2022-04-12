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
    void testSetFullHand(int rank1, int rank2, int rank3, int rank4, int rank5, int suit1, int suit2, int suit3, int suit4, int suit5);
    void clearHand();
    int getMoney();
    int getBet();
    int getHandSize();
    string getName();
    string getHand();
    void printAllCards();
    void printPlayer();
};

#endif