//Implementation class for a hand of cards
//Author: Zack Edwards

#include <iostream>
#include <ctime>
#include "hand.h"

using namespace texasHoldEm;
using namespace std;

hand::hand()
{
    cards = new card[5];
    numCards = 0;
}

void hand::addCard(card c)
{
    if (numCards < 5)
    {
        cards[numCards] = c;
        numCards++;
    }
}

void hand::removeCard(int index)
{
    if (index < numCards)
    {
        for (int i = index; i < numCards; i++)
        {
            cards[i] = cards[i + 1];
        }
        numCards--;
    }
}

void hand::printHand()
{
    for (int i = 0; i < numCards; i++)
    {
        cout << cards[i].getCardAsString() << endl;
    }
}

int hand::getNumCards()
{
    return numCards;
}

int hand::getPokerHandValue()
{
    //return the value of the hand ie Royal Flush, Straight Flush, etc
    //return 0 if not a valid hand
    //return 1 if a royal flush
    //return 2 if a straight flush
    //return 3 if a four of a kind
    //return 4 if a full house
    //return 5 if a flush
    //return 6 if a straight
    //return 7 if a three of a kind
    //return 8 if a two pair
    //return 9 if a pair
    //return 10 if a high card

    if (numCards == 5) //evaluates if hand is full
    {
        bool pair(false), two_pair(false), three(false), four(false), flush(false), straight(false);
        
        //check for flush
        for (int i = 0; i < numCards - 1; i++)
        {
            if (cards[i].getSuit() != cards[i + 1].getSuit())
            {
                flush = false;
                break;
            }
            else
            {
                flush = true;
            }
        }

        sortHand();
        //check for straight
        for (int i = 0; i < numCards - 1; i++)
        {
            if (cards[i].getRank() != cards[i + 1].getRank() - 1)
            {
                straight = false;
                break;
            }
            else
            {
                straight = true;
            }
        }

        //check for pairs, three of a kind, four of a kind
        for (int i = 0; i < numCards - 1; i++)
        {
            countOccurences(cards[i].getRank(), pair, two_pair, three, four);
        }
        

        //returns the value of the hand
        if (cards[0].getRank() == 1 && cards[4].getRank() == 13 && flush == true && straight == true)
        {
            return 1;
        }
        else if (flush == true && straight == true)
        {
            return 2;
        }
        else if (four){
            return 3;
        }
        else if (three && pair){
            return 4;
        }
        else if (flush){
            return 5;
        }
        else if (straight){
            return 6;
        }
        else if (three){
            return 7;
        }
        else if (two_pair){
            return 8;
        }
        else if (pair){
            return 9;
        }
        else
        {
            return 10;
        }
    }
    else
    {
        return 0;
    }
}

void hand::sortHand()
{
    //sort the hand
    for (int i = 0; i < numCards; i++)
    {
        for (int j = 0; j < numCards - 1; j++)
        {
            if (cards[j].getRank() > cards[j + 1].getRank())
            {
                card temp = cards[j];
                cards[j] = cards[j + 1];
                cards[j + 1] = temp;
            }
        }
    }
}

int hand::countOccurences(int x, bool pair, bool two_pair, bool three, bool four)
{
    //counts the number of occurences of a card in the hand
    //returns the number of occurences
    int count = 0;
    for (int i = 0; i < numCards; i++)
    {
        if (cards[i].getRank() == x)
        {
            count++;
        }
    }
    if (count == 2)
    {
        if (pair == true)
        {
            two_pair = true;
        }
        pair = true;
    }
    else if (count == 3)
    {
        three = true;
    }
    else if (count == 4)
    {
        four = true;
    }
    return count;
}

string hand::getPokerHandAsString()
{
    //return the string representation of the hand
    //return "Royal Flush" if a royal flush
    //return "Straight Flush" if a straight flush
    //return "Four of a Kind" if a four of a kind
    //return "Full House" if a full house
    //return "Flush" if a flush
    //return "Straight" if a straight
    //return "Three of a Kind" if a three of a kind
    //return "Two Pair" if a two pair
    //return "Pair" if a pair
    //return "High Card" if a high card
    int value = getPokerHandValue();
    if (value == 1)
    {
        return "Royal Flush";
    }
    else if (value == 2)
    {
        return "Straight Flush";
    }
    else if (value == 3)
    {
        return "Four of a Kind";
    }
    else if (value == 4)
    {
        return "Full House";
    }
    else if (value == 5)
    {
        return "Flush";
    }
    else if (value == 6)
    {
        return "Straight";
    }
    else if (value == 7)
    {
        return "Three of a Kind";
    }
    else if (value == 8)
    {
        return "Two Pair";
    }
    else if (value == 9)
    {
        return "Pair";
    }
    else if (value == 10)
    {
        return "High Card";
    }
    else
    {
        return "Error";
    }
}