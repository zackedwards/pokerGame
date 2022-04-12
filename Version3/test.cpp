#include <iostream>
#include <ctime>
#include <cassert>

#include "player.h"
#include "card.h"
#include "hand.h"

using namespace std;

int main(int argc, const char *argv[])
{

    srand(time(NULL));

    // Game Intro
    cout << "Running Test Cases" << endl;
    player player1("name", 5000);
    // testing detection of high card
    player1.testSetFullHand(1, 2, 9, 6, 3, 1, 2, 1, 2, 3); // first 5 parameters are rank, then suit
    assert(player1.getHand() == "High Card: 9");
    player1.clearHand();
    // testing detection of pair
    player1.testSetFullHand(4, 2, 3, 4, 5, 1, 2, 1, 2, 3);
    assert(player1.getHand() == "Pair");
    player1.clearHand();
    // testing detection of two pair
    player1.testSetFullHand(4, 2, 3, 4, 2, 1, 2, 1, 2, 3);
    assert(player1.getHand() == "Two Pair");
    player1.clearHand();
    // testing detection of three of a kind
    player1.testSetFullHand(4, 2, 2, 1, 2, 1, 2, 1, 2, 4);
    assert(player1.getHand() == "Three of a Kind");
    player1.clearHand();
    // testing detection of straight
    player1.testSetFullHand(4, 5, 6, 7, 8, 1, 2, 1, 2, 3);
    assert(player1.getHand() == "Straight");
    player1.clearHand();
    // testing detection of flush
    player1.testSetFullHand(4, 9, 12, 7, 3, 2, 2, 2, 2, 2);
    assert(player1.getHand() == "Flush");
    player1.clearHand();
    // testing detection of full house
    player1.testSetFullHand(6, 11, 11, 6, 11, 2, 4, 1, 2, 1);
    assert(player1.getHand() == "Full House");
    player1.clearHand();
    // testing detection of full house with a flush
    player1.testSetFullHand(6, 11, 11, 6, 11, 2, 2, 2, 2, 2);
    assert(player1.getHand() == "Full House");
    player1.clearHand();
    // testing detection of four of a kind
    player1.testSetFullHand(6, 6, 6, 7, 6, 1, 2, 2, 3, 2);
    assert(player1.getHand() == "Four of a Kind");
    player1.clearHand();
    // testing detection of four of a kind with a flush
    player1.testSetFullHand(9, 9, 6, 9, 9, 2, 2, 2, 2, 2);
    assert(player1.getHand() == "Four of a Kind");
    player1.clearHand();
    // testing detection of straight flush
    player1.testSetFullHand(11, 12, 9, 10, 8, 4, 4, 4, 4, 4);
    assert(player1.getHand() == "Straight Flush");
    player1.clearHand();
    // testing detection of royal flush
    player1.testSetFullHand(13, 12, 10, 11, 1, 3, 3, 3, 3, 3);
    assert(player1.getHand() == "Royal Flush");
    cout << "All Test Cases Passed" << endl;
    return 0;
}
