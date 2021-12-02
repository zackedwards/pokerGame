//Refactoring a poker game
//Author: Zack Edwards

#include <iostream>
#include <ctime>

#include "player.h"
#include "card.h"
#include "hand.h"

using namespace std;

namespace texasHoldem
{
    int main(int argc, const char *argv[])
    {

        srand(time(NULL));

        //Game Intro
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
        //player player1(name, money);
        texasHoldEm::player player1("name", 5000);
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
        player1.texasHoldEm::player::setFullHand();
        player1.texasHoldEm::player::getHand();

        return 0;
    }
}