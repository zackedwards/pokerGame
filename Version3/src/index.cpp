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

    // Start
    bool gameState = true;

    // Game Loop
    while (gameState)
    {
        cout << "Press 1 to play again, any other key to exit" << endl;
        int input;
        cin >> input;
        if (input != 1)
        {
            gameState = false;
        }
    }
    cout << "Thank you for playing!" << endl;
    return 0;
}