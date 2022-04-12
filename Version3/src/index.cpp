// Refactoring a poker game
// Author: Zack Edwards

#include <iostream>
#include <ctime>

#include "../include/player/player.h"
#include "../include/card/card.h"
#include "../include/hand/hand.h"

using namespace std;

int main(int argc, const char *argv[])
{

    srand(time(NULL));

    // Game Intro
    cout << "*****************************" << endl;
    cout << "            Poker" << endl;
    cout << "*****************************" << endl;

    player player1("name", 5000);
    player1.setFullHand();
    player1.printAllCards();
    cout << player1.getHand();

    return 0;
}