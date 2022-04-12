// Refactoring a poker game
// Author: Zack Edwards

#include <iostream>
#include <ctime>


using namespace std;

class card
{
private:
    int suit;
    int rank;

public:
    card()
    {
        this->suit = rand() % 4 + 1;
        this->rank = rand() % 13 + 1;
    }
    
    int getSuit()
    {
        return suit;
    }

    int getRank()
    {
        return rank;
    }

    string getSuitAsString()
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

    string getRankAsString()
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

    string getCardAsString()
    {
        return getRankAsString() + " of " + getSuitAsString();
    }
};

// class for a hand of cards
class hand
{
private:
    // an arraylist of cards
    card *cards;
    int numCards;

public:
    hand()
    {
        cards = new card[5];
        numCards = 0;
    }

    void addCard(card c)
    {
        if (numCards < 5)
        {
            cards[numCards] = c;
            numCards++;
        }
    }

    //test function
    string addFiveCards()
    {
        for (int i = 0; i < 5; i++)
        {
            cards[i] = card();
            //cards[i].hearts();
        }
        numCards = 5;
        sortHand();
        printHand();
        return getPokerHandAsString();
    }  

    void removeCard(int index)
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

    void printHand()
    {
        for (int i = 0; i < numCards; i++)
        {
            cout << cards[i].getCardAsString() << endl;
        }
    }

    int getNumCards()
    {
        return numCards;
    }

    int getPokerHandValue()
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

            sortHand();
            // check for straight
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

            // check for pairs, three of a kind, four of a kind
            for (int i = 0; i < numCards - 1; i++)
            {
                if(countOccurences(cards[i].getRank(), pair, two_pair, three, four) == 2)
                { 
                    if (pair)
                    {
                        if (cards[i].getRank() != cards[i - 1].getRank())
                        {
                            two_pair = true;
                        }
                    }
                    pair = true;
                }
                else if (countOccurences(cards[i].getRank(), pair, two_pair, three, four) == 3)
                {
                    three = true;
                }
                else if (countOccurences(cards[i].getRank(), pair, two_pair, three, four) == 4)
                {
                    four = true;
                }
            }

            // returns the value of the hand
            if (cards[0].getRank() == 1 && cards[4].getRank() == 13 && flush == true && straight == true)
            {
                return 1;
            }
            else if (flush == true && straight == true)
            {
                return 2;
            }
            else if (four)
            {
                return 3;
            }
            else if (three && pair)
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
            else if (three)
            {
                return 7;
            }
            else if (two_pair)
            {
                return 8;
            }
            else if (pair)
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

    void sortHand()
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

    int countOccurences(int x, bool pair, bool two_pair, bool three, bool four)
    {
        // counts the number of occurences of a card in the hand
        // returns the number of occurences
        int count = 0;
        for (int i = 0; i < numCards; i++)
        {
            if (cards[i].getRank() == x)
            {
                count++;
            }
        }
        return count;
    }

    string getPokerHandAsString()
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
            return "High Card";
        }
        else if (value == 0)
        {
            return "5 cards required for a full hand";
        }
        else
        {
            return "Error";
        }
    }
};

class player
{
private:
    string name;
    int money;
    int bet;
    int handSize;
    hand playersHand;

public:
    player(string name, int money)
    {
        this->name = name;
        this->money = money;
        this->bet = 0;
        this->handSize = 5;
        this->playersHand = hand();
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setMoney(int money)
    {
        this->money = money;
    }

    void setBet(int bet)
    {
        this->bet = bet;
    }

    void setHandSize(int handSize)
    {
        this->handSize = handSize;
    }

    void setFullHand()
    {
        for (int i = 0; i < handSize; i++)
        {
            playersHand.addCard(card());
        }
    }

    string getName()
    {
        return name;
    }

    int getMoney()
    {
        return money;
    }

    int getBet()
    {
        return bet;
    }

    int getHandSize()
    {
        return handSize;
    }

    string getHand()
    {
        return playersHand.getPokerHandAsString();
    }

    void printPlayer()
    {
        cout << "Name: " << name << " Money: " << money << " Bet: " << bet << " HandSize: " << handSize << endl;
    }
};

int main(int argc, const char *argv[])
{

    srand(time(NULL));

    // Game Intro
    cout << "*****************************" << endl;
    cout << "            Poker" << endl;
    cout << "*****************************" << endl;
    // cout << "What is your name?" << endl;
    // string name;
    // cin >> name;
    // cout << "Hello " << name << endl;
    // cout << "How much money do you have?" << endl;
    // int money;
    // cin >> money;
    // player player1(name, money);
    player player1("name", 5000);
    // if (player1.getMoney() < 100)
    // {
    //     cout << "You don't have enough money to play" << endl;
    //     cout << "I'll loan you $500, don't forget to pay me back!" << endl;
    //     player1.setMoney(player1.getMoney() + 500);
    // }
    // cout << "You have " << player1.getMoney() << " dollars" << endl;
    // cout << "How much do you want to bet?" << endl;
    // int bet;
    // cin >> bet;
    // player1.setBet(bet);

    // player1.setFullHand();
    // cout << player1.getHand();
    for (size_t i = 0; i < 20; i++)
    {
        cout << hand().addFiveCards() << endl << endl;
    }
    
    

    return 0;
}