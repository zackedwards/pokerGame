//Ipleentation class for a card
//Author: Zack Edwards

#include <iostream>
#include <ctime>
#include "card.h"

using namespace texasHoldEm;
using namespace std;

card::card()
{
    this->suit = rand() % 4 + 1;
    this->rank = rand() % 13 + 1;
}

int card::getSuit()
{
    return suit;
}

int card::getRank()
{
    return rank;
}

string card::getSuitAsString()
{
    if (suit == 1)
    {
        return "Clubs";
    }
    else if (suit == 2)
    {
        return "Diamonds";
    }
    else if (suit == 3)
    {
        return "Hearts";
    }
    else if (suit == 4)
    {
        return "Spades";
    }
    else
    {
        return "Error";
    }
}

string card::getRankAsString()
{
    if (rank == 1)
    {
        return "Ace";
    }
    else if (rank == 2)
    {
        return "2";
    }
    else if (rank == 3)
    {
        return "3";
    }
    else if (rank == 4)
    {
        return "4";
    }
    else if (rank == 5)
    {
        return "5";
    }
    else if (rank == 6)
    {
        return "6";
    }
    else if (rank == 7)
    {
        return "7";
    }
    else if (rank == 8)
    {
        return "8";
    }
    else if (rank == 9)
    {
        return "9";
    }
    else if (rank == 10)
    {
        return "10";
    }
    else if (rank == 11)
    {
        return "Jack";
    }
    else if (rank == 12)
    {
        return "Queen";
    }
    else if (rank == 13)
    {
        return "King";
    }
    else
    {
        return "Error";
    }
}

string card::getCardAsString()
{
    return getRankAsString() + " of " + getSuitAsString();
}