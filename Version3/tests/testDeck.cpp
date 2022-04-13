// Test file for the deck class
// Author: Zack Edwards

#include <iostream>
#include <ctime>
#include <cassert>

#include "../include/card/card.h"
#include "../include/hand/hand.h"
#include "../include/player/player.h"
#include "../include/deck/deck.h"

using namespace std;

int main(int argc, const char *argv[])
{
    cout << "Running Test Cases" << endl;
    player player1("name", 5000);
    cout << "Player 1: " << player1.getName() << " " << player1.getMoney() << endl;
    deck deck_of_cards = deck();
    // deck_of_cards.printDeck();
    cout << "Shuffling" << endl;
    deck_of_cards.shuffle();
    // cout << "Printing Deck" << endl;
    // deck_of_cards.printDeck();

    cout << "Dealing Card" << endl;
    player1.setFullHand(&deck_of_cards);
    cout << "Printing Hand: " << player1.getHand() << endl;
    player1.printAllCards();
    player1.clearHand();
    cout << "Printing size" << deck_of_cards.getNumCards() << endl;

    cout << "Dealing Card" << endl;
    player1.setFullHand(&deck_of_cards);
    cout << "Printing Hand: " << player1.getHand() << endl;
    player1.printAllCards();
    player1.clearHand();
    cout << "Printing size" << deck_of_cards.getNumCards() << endl;

    cout << "Dealing Card" << endl;
    player1.setFullHand(&deck_of_cards);
    cout << "Printing Hand: " << player1.getHand() << endl;
    player1.printAllCards();
    player1.clearHand();
    cout << "Printing size" << deck_of_cards.getNumCards() << endl;

    cout << "Dealing Card" << endl;
    player1.setFullHand(&deck_of_cards);
    cout << "Printing Hand: " << player1.getHand() << endl;
    player1.printAllCards();
    player1.clearHand();
    cout << "Printing size" << deck_of_cards.getNumCards() << endl;

    cout << "Dealing Card" << endl;
    player1.setFullHand(&deck_of_cards);
    cout << "Printing Hand: " << player1.getHand() << endl;
    player1.printAllCards();
    player1.clearHand();
    cout << "Printing size" << deck_of_cards.getNumCards() << endl;

    cout << "Dealing Card" << endl;
    player1.setFullHand(&deck_of_cards);
    cout << "Printing Hand: " << player1.getHand() << endl;
    player1.printAllCards();
    player1.clearHand();
    cout << "Printing size" << deck_of_cards.getNumCards() << endl;

    cout << "Tests Passed" << endl;
}