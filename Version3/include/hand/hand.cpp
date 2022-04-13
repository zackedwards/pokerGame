// Implementation class for a hand of cards
// Author: Zack Edwards

#include <iostream>
#include <ctime>
#include <map>

#include "hand.h"

using namespace std;

struct hand::occurances_result
{
    int value;
    int count;
};

hand::hand()
{
    cards = new card[5];
    numCards = 0;
}

hand::hand(deck d)
{
    cards = new card[5];
    numCards = 0;
    for (int i = 0; i < 5; i++)
    {
        cards[i] = d.dealCard();
        numCards++;
    }
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
    // return the value of the hand ie Royal Flush, Straight Flush, etc
    // return 0 if not a valid hand
    // return 1 if a royal flush
    // return 2 if a straight flush
    // return 3 if a four of a kind
    // return 4 if a full house
    // return 5 if a flush
    // return 6 if a straight
    // return 7 if a three of a kind
    // return 8 if a two pair
    // return 9 if a pair
    // return 10 if a high card

    if (numCards == 5) // evaluates if hand is full
    {
        bool pair(false), two_pair(false), three(false), four(false), flush(false), straight(false);

        // check for flush
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

        sortHand(); // ascending
        // check for straight
        for (int i = 0; i < numCards - 1; i++)
        {
            if (cards[i].getRank() != cards[i + 1].getRank() - 1) // check if the one to the right is one rank higher
            {
                if (cards[i].getRank() == 1 && cards[i + 1].getRank() == 10) // ace is high
                {
                    straight = true;
                }
                else
                {
                    straight = false;
                    break;
                }
            }
            else
            {
                straight = true;
            }
        }

        // check for pairs, three of a kind, four of a kind
        occurances_result occurances = countOccurences();

        // returns the value of the hand
        if (cards[0].getRank() == 1 && cards[4].getRank() == 13 && flush == true && straight == true)
        {
            return 1;
        }
        else if (flush == true && straight == true)
        {
            return 2;
        }
        else if (occurances.count == 4) // four of a kind
        {
            return 3;
        }
        else if (occurances.count == 5) // full house
        {
            return 4;
        }
        else if (flush)
        {
            return 5;
        }
        else if (straight)
        {
            return 6;
        }
        else if (occurances.count == 3) // three of a kind
        {
            return 7;
        }
        else if (occurances.count == 2) // two pair
        {
            return 8;
        }
        else if (occurances.count == 1) // pair
        {
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

void hand::sortHand() // ascending order
{
    // sort the hand
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

hand::occurances_result hand::countOccurences()
{
    // counts the number of occurences of a card in the hand
    // returns a struct which represents either a pair, two pair, three of a kind, four of a kind, etc in the count
    // struct also contains the rank of the card for comparing a pair, two pair, etc in the value
    // returns 0 if no occurences
    // returns 1 if one pair
    // returns 2 if two pair
    // returns 3 if three of a kind
    // returns 4 if four of a kind
    // returns 5 if a full house
    occurances_result res;
    res.value = 0;
    res.count = 0;
    map<int, int> occurances;
    for (int i = 0; i < numCards; i++) // this quickly counts occurances
    {
        occurances[cards[i].getRank()]++;
    }
    for (map<int, int>::const_iterator it = occurances.begin(); it != occurances.end(); ++it)
    {
        // std::cout << it->first << " " << it->second << "\n"; //a test debug statement
        if (it->second == 4) // check for four of a kind
        {
            res.value = it->first;
            res.count = 4;
            return res;
        }
        else if (it->second == 3)
        {
            res.value = it->first;
            if (res.count == 1) // check for one pair
            {
                res.count = 5; // its a full house
                return res;
            }
            else
            {
                res.count = 3; // if no pair, its three of a kind
            }
        }
        else if (it->second == 2)
        {
            if (res.count == 1) // check for one pair already existing
            {
                if (it->first > res.value) // if this pairs value is higher than the other
                {
                    res.value = it->first;
                }
                res.count = 2;
                return res; // return two pair
            }
            else if (res.count == 3) // check for three of a kind already existing
            {
                res.count = 5; // its a full house
                return res;
            }
            else
            {
                res.value = it->first;
                res.count = 1; // if no pair or three of a kind, its a pair
            }
        }
    }

    return res;
}

string hand::getPokerHandAsString()
{
    // return the string representation of the hand
    // return "Royal Flush" if a royal flush
    // return "Straight Flush" if a straight flush
    // return "Four of a Kind" if a four of a kind
    // return "Full House" if a full house
    // return "Flush" if a flush
    // return "Straight" if a straight
    // return "Three of a Kind" if a three of a kind
    // return "Two Pair" if a two pair
    // return "Pair" if a pair
    // return "High Card" if a high card
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
        return "High Card: " + cards[4].getRankAsString();
    }
    else
    {
        return "Error";
    }
}