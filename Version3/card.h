//Header class for a card
//Author: Zack Edwards

#include <iostream>
#include <ctime>

using namespace std;

#ifndef CARD_H
#define CARD_H

namespace texasHoldEm
{
    class card
    {
    private:
        int suit;
        int rank;

    public:
        card();
        card(int, int);
        int getSuit();
        int getRank();
        void setSuit(int);
        void setRank(int);
        void printCard();
        string getSuitAsString();
        string getRankAsString();
        string getCardAsString();
    };
}
#endif // CARD_H