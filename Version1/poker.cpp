//
//  main.cpp
//  Finalproject
//
//  Created by Zack Edwards on 11/28/18.
//  Copyright © 2018 Zack Edwards. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;


int main(int argc, const char * argv[]) {
    
    //Deck shuffle
    srand(time(NULL));
    int score = 0;
    //Intro and selection screen
    cout << "*****************************" << endl;
    cout << "            Poker" << endl;
    cout << "*****************************" << endl;
    int choice1 = 0;
    //thsi while loop keeps the game going until you quit
    while (choice1 != 3) {
        cout << " " << endl;
    cout << "Deal me in (1)" << endl;
    cout << "Rules (2)" << endl;
    cout << "Quit (3)" << endl;
        cout << " " << endl;
        cin.clear();
    cin >> choice1;
    while (choice1 != (1) && choice1 != 2 && choice1 != 3) {
        cout << "Not an option! Try entering '1' to play or '2' for rules" << endl;
        cin >> choice1;
    }
    
    //Passing out random cards
    int card1 = 1, card2 = 1, card3 = 1, card4 = 1, card5 = 1, dcard6 = 1, dcard7 = 1, dcard8 = 1, dcard9 = 1, dcard10 = 1;
    int card1value = 1, card2value = 1, card3value = 1, card4value = 1, card5value = 1, dcard6value = 1, dcard7value = 1, dcard8value = 1, dcard9value = 1, dcard10value = 1;
        //suit key-- hearts = 1, spades = 2, diamonds = 3, clubs = 4
    int card1suit = 0, card2suit = 0, card3suit = 0, card4suit = 0, card5suit = 0, dcard6suit = 0, dcard7suit = 0, dcard8suit = 0, dcard9suit = 0, dcard10suit = 0;
    string cardname1, cardname2, cardname3, cardname4, cardname5, dcardname6, dcardname7, dcardname8, dcardname9, dcardname10;
    if (choice1 == 1) {
        cout << "Dealer- Let me shuffle the deck..." << endl;
        cout << "Ok here are your cards" << endl;
        card1 = (rand() %52) + 1;
        card2 = (rand() %52) + 1;
        card3 = (rand() %52) + 1;
        card4 = (rand() %52) + 1;
        card5 = (rand() %52) + 1;
        
        dcard6 = (rand() %52) + 1;
        dcard7 = (rand() %52) + 1;
        dcard8 = (rand() %52) + 1;
        dcard9 = (rand() %52) + 1;
        dcard10 = (rand() %52) + 1;
        
        //determining the value and suite of the cards
        if (card1 == 1) {
            cardname1 = "Ace of Hearts";
            card1value = 1;
            card1suit = 1;
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 2){
            cardname1 = "Ace of Clubs";
            card1value = 1;
            card1suit = 4;
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 3){
            cardname1 = "Ace of Diamonds";
            card1value = 1;
            card1suit = 3;
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 4){
            card1value = 1;
            cardname1 = "Ace of Spades";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 5){
            card1value = 2;
            card1suit = 1;
            cardname1 = "Two of Hearts";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 6){
            card1value = 2;
            card1suit = 4;
            cardname1 = "Two of Clubs";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 7){
            card1value = 2;
            card1suit = 3;
            cardname1 = "Two of Diamonds";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 8){
            card1value = 2;
            cardname1 = "Two of Spades";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 9) {
            card1value = 3;
            card1suit = 1;
            cardname1 = "Three of Hearts";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 10){
            card1value = 3;
            card1suit = 4;
            cardname1 = "Three of Clubs";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 11){
            card1value = 3;
            card1suit = 3;
            cardname1 = "Three of Diamonds";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 12){
            card1value = 3;
            cardname1 = "Three of Spades";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 13){
            card1value = 4;
            card1suit = 1;
            cardname1 = "Four of Hearts";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 14){
            card1value = 4;
            card1suit = 4;
            cardname1 = "Four of Clubs";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 15){
            card1value = 4;
            card1suit = 3;
            cardname1 = "Four of Diamonds";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 16){
            card1value = 4;
            cardname1 = "Four of Spades";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 17) {
            card1value = 5;
            card1suit = 1;
            cardname1 = "Five of Hearts";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 18){
            card1value = 5;
            card1suit = 4;
            cardname1 = "Five of Clubs";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 19){
            card1value = 5;
            card1suit = 3;
            cardname1 = "Five of Diamonds";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 20){
            card1value = 5;
            cardname1 = "Five of Spades";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 21){
            card1value = 6;
            card1suit = 1;
            cardname1 = "Six of Hearts";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 22){
            card1value = 6;
            card1suit = 4;
            cardname1 = "Six of Clubs";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 23){
            card1value = 6;
            card1suit = 3;
            cardname1 = "Six of Diamonds";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 24){
            card1value = 6;
            cardname1 = "Six of Spades";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 25) {
            card1value = 7;
            card1suit = 1;
            cardname1 = "Seven of Hearts";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 26){
            card1value = 7;
            card1suit = 4;
            cardname1 = "Seven of Clubs";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 27){
            card1value = 7;
            card1suit = 3;
            cardname1 = "Seven of Diamonds";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 28){
            card1value = 7;
            cardname1 = "Seven of Spades";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 29){
            card1value = 8;
            card1suit = 1;
            cardname1 = "Eight of Hearts";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 30){
            card1value = 8;
            card1suit = 4;
            cardname1 = "Eight of Clubs";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 31){
            card1value = 8;
            card1suit = 3;
            cardname1 = "Eight of Diamonds";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 32){
            card1value = 8;
            cardname1 = "Eight of Spades";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 33){
            card1value = 9;
            cardname1 = "Nine of Spades";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 34){
            card1value = 9;
            card1suit = 1;
            cardname1 = "Nine of Hearts";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 35){
            card1value = 9;
            card1suit = 4;
            cardname1 = "Nine of Clubs";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 36){
            card1value = 9;
            card1suit = 3;
            cardname1 = "Nine of Diamonds";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 37){
            card1value = 10;
            cardname1 = "Ten of Spades";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 38) {
            card1value = 10;
            card1suit = 1;
            cardname1 = "Ten of Hearts";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 39){
            card1value = 10;
            card1suit = 4;
            cardname1 = "Ten of Clubs";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 40){
            card1value = 10;
            card1suit = 3;
            cardname1 = "Ten of Diamonds";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 41){
            card1value = 11;
            cardname1 = "Jack of Spades";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 42){
            card1value = 11;
            card1suit = 1;
            cardname1 = "Jack of Hearts";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 43){
            card1value = 11;
            card1suit = 4;
            cardname1 = "Jack of Clubs";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 44){
            card1value = 11;
            card1suit = 3;
            cardname1 = "Jack of Diamonds";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 45){
            card1value = 12;
            cardname1 = "Queen of Spades";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 46) {
            card1value = 12;
            card1suit = 1;
            cardname1 = "Queen of Hearts";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 47){
            card1value = 12;
            card1suit = 4;
            cardname1 = "Queen of Clubs";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 48){
            card1value = 12;
            card1suit = 3;
            cardname1 = "Queen of Diamonds";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 49){
            card1value = 13;
            cardname1 = "King of Spades";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 50){
            card1value = 13;
            card1suit = 1;
            cardname1 = "King of Hearts";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 51){
            card1value = 13;
            card1suit = 4;
            cardname1 = "King of Clubs";
            cout << "1. " << cardname1 << endl;
        }
        else if (card1 == 52){
            card1value = 13;
            card1suit = 3;
            cardname1 = "King of Diamonds";
            cout << "1. " << cardname1 << endl;
        }
    
        //determining card2
        if (card2 == 1) {
            card2value = 1;
            card2suit = 1;
            cardname2 = "Ace of Hearts";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 2){
            card2value = 1;
            card2suit = 4;
            cardname2 = "Ace of Clubs";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 3){
            card2value = 1;
            card2suit = 3;
            cardname2 = "Ace of Diamonds";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 4){
            card2value = 1;
            card2suit = 2;
            cardname2 = "Ace of Spades";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 5){
            card2value = 2;
            card2suit = 1;
            cardname2 = "Two of Hearts";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 6){
            card2value = 2;
            card2suit = 4;
            cardname2 = "Two of Clubs";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 7){
            card2value = 2;
            card2suit = 3;
            cardname2 = "Two of Diamonds";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 8){
            card2value = 2;
            card2suit = 2;
            cardname2 = "Two of Spades";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 9) {
            card2value = 3;
            card2suit = 1;
            cardname2 = "Three of Hearts";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 10){
            card2value = 3;
            card2suit = 4;
            cardname2 = "Three of Clubs";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 11){
            card2value = 3;
            card2suit = 3;
            cardname2 = "Three of Diamonds";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 12){
            card2value = 3;
            card2suit = 2;
            cardname2 = "Three of Spades";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 13){
            card2value = 4;
            card2suit = 1;
            cardname2 = "Four of Hearts";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 14){
            card2value = 4;
            card2suit = 4;
            cardname2 = "Four of Clubs";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 15){
            card2value = 4;
            card2suit = 3;
            cardname2 = "Four of Diamonds";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 16){
            card2value = 4;
            card2suit = 2;
            cardname2 = "Four of Spades";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 17) {
            card2value = 5;
            card2suit = 1;
            cardname2 = "Five of Hearts";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 18){
            card2value = 5;
            card2suit = 4;
            cardname2 = "Five of Clubs";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 19){
            card2value = 5;
            card2suit = 3;
            cardname2 = "Five of Diamonds";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 20){
            card2value = 5;
            card2suit = 2;
            cardname2 = "Five of Spades";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 21){
            card2value = 6;
            card2suit = 1;
            cardname2 = "Six of Hearts";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 22){
            card2value = 6;
            card2suit = 4;
            cardname2 = "Six of Clubs";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 23){
            card2value = 6;
            card2suit = 3;
            cardname2 = "Six of Diamonds";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 24){
            card2value = 6;
            card2suit = 2;
            cardname2 = "Six of Spades";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 25) {
            card2value = 7;
            card2suit = 1;
            cardname2 = "Seven of Hearts";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 26){
            card2value = 7;
            card2suit = 4;
            cardname2 = "Seven of Clubs";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 27){
            card2value = 7;
            card2suit = 3;
            cardname2 = "Seven of Diamonds";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 28){
            card2value = 7;
            card2suit = 2;
            cardname2 = "Seven of Spades";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 29){
            card2value = 8;
            card2suit = 1;
            cardname2 = "Eight of Hearts";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 30){
            card2value = 8;
            card2suit = 4;
            cardname2 = "Eight of Clubs";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 31){
            card2value = 8;
            card2suit = 3;
            cardname2 = "Eight of Diamonds";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 32){
            card2value = 8;
            card2suit = 2;
            cardname2 = "Eight of Spades";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 33){
            card2value = 9;
            card2suit = 2;
            cardname2 = "Nine of Spades";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 34){
            card2value = 9;
            card2suit = 1;
            cardname2 = "Nine of Hearts";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 35){
            card2value = 9;
            card2suit = 4;
            cardname2 = "Nine of Clubs";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 36){
            card2value = 9;
            card2suit = 3;
            cardname2 = "Nine of Diamonds";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 37){
            card2value = 10;
            card2suit = 2;
            cardname2 = "Ten of Spades";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 38) {
            card2value = 10;
            card2suit = 1;
            cardname2 = "Ten of Hearts";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 39){
            card2value = 10;
            card2suit = 4;
            cardname2 = "Ten of Clubs";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 40){
            card2value = 10;
            card2suit = 3;
            cardname2 = "Ten of Diamonds";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 41){
            card2value = 11;
            card2suit = 2;
            cardname2 = "Jack of Spades";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 42){
            card2value = 11;
            card2suit = 1;
            cardname2 = "Jack of Hearts";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 43){
            card2value = 11;
            card2suit = 4;
            cardname2 = "Jack of Clubs";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 44){
            card2value = 11;
            card2suit = 3;
            cardname2 = "Jack of Diamonds";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 45){
            card2value = 12;
            card2suit = 2;
            cardname2 = "Queen of Spades";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 46) {
            card2value = 12;
            card2suit = 1;
            cardname2 = "Queen of Hearts";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 47){
            card2value = 12;
            card2suit = 4;
            cardname2 = "Queen of Clubs";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 48){
            card2value = 12;
            card2suit = 3;
            cardname2 = "Queen of Diamonds";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 49){
            card2value = 13;
            card2suit = 2;
            cardname2 = "King of Spades";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 50){
            card2value = 13;
            card2suit = 1;
            cardname2 = "King of Hearts";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 51){
            card2value = 13;
            card2suit = 4;
            cardname2 = "King of Clubs";
            cout << "2. " << cardname2 << endl;
        }
        else if (card2 == 52){
            card2value = 13;
            card2suit = 3;
            cardname2 = "King of Diamonds";
            cout << "2. " << cardname2 << endl;
        }
        
        //determining card3
        if (card3 == 1) {
            card3value = 1;
            card3suit = 1;
            cardname3 = "Ace of Hearts";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 2){
            card3value = 1;
            card3suit = 4;
            cardname3 = "Ace of Clubs";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 3){
            card3value = 1;
            card3suit = 3;
            cardname3 = "Ace of Diamonds";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 4){
            card3value = 1;
            card3suit = 2;
            cardname3 = "Ace of Spades";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 5){
            card3value = 2;
            card3suit = 1;
            cardname3 = "Two of Hearts";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 6){
            card3value = 2;
            card3suit = 4;
            cardname3 = "Two of Clubs";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 7){
            card3value = 2;
            card3suit = 3;
            cardname3 = "Two of Diamonds";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 8){
            card3value = 2;
            card3suit = 2;
            cardname3 = "Two of Spades";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 9) {
            card3value = 3;
            card3suit = 1;
            cardname3 = "Three of Hearts";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 10){
            card3value = 3;
            card3suit = 4;
            cardname3 = "Three of Clubs";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 11){
            card3value = 3;
            card3suit = 3;
            cardname3 = "Three of Diamonds";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 12){
            card3value = 3;
            card3suit = 2;
            cardname3 = "Three of Spades";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 13){
            card3value = 4;
            card3suit = 1;
            cardname3 = "Four of Hearts";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 14){
            card3value = 4;
            card3suit = 4;
            cardname3 = "Four of Clubs";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 15){
            card3value = 4;
            card3suit = 3;
            cardname3 = "Four of Diamonds";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 16){
            card3value = 4;
            card3suit = 2;
            cardname3 = "Four of Spades";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 17) {
            card3value = 5;
            card3suit = 1;
            cardname3 = "Five of Hearts";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 18){
            card3value = 5;
            card3suit = 4;
            cardname3 = "Five of Clubs";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 19){
            card3value = 5;
            card3suit = 3;
            cardname3 = "Five of Diamonds";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 10){
            card3value = 5;
            card3suit = 2;
            cardname3 = "Five of Spades";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 21){
            card3value = 6;
            card3suit = 1;
            cardname3 = "Six of Hearts";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 22){
            card3value = 6;
            card3suit = 4;
            cardname3 = "Six of Clubs";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 23){
            card3value = 6;
            card3suit = 3;
            cardname3 = "Six of Diamonds";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 24){
            cardname3 = "Six of Spades";
            card3value = 6;
            card3suit = 2;
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 25) {
            card3value = 7;
            card3suit = 1;
            cardname3 = "Seven of Hearts";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 26){
            card3value = 7;
            card3suit = 4;
            cardname3 = "Seven of Clubs";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 27){
            card3value = 7;
            card3suit = 3;
            cardname3 = "Seven of Diamonds";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 28){
            card3value = 7;
            card3suit = 2;
            cardname3 = "Seven of Spades";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 29){
            card3value = 8;
            card3suit = 1;
            cardname3 = "Eight of Hearts";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 30){
            card3value = 8;
            card3suit = 4;
            cardname3 = "Eight of Clubs";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 31){
            card3value = 8;
            card3suit = 3;
            cardname3 = "Eight of Diamonds";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 32){
            card3value = 8;
            card3suit = 2;
            cardname3 = "Eight of Spades";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 33){
            card3value = 9;
            card3suit = 2;
            cardname3 = "Nine of Spades";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 34){
            card3value = 9;
            card3suit = 1;
            cardname3 = "Nine of Hearts";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 35){
            card3value = 9;
            card3suit = 4;
            cardname3 = "Nine of Clubs";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 36){
            card3value = 9;
            card3suit = 3;
            cardname3 = "Nine of Diamonds";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 37){
            card3value = 10;
            card3suit = 2;
            cardname3 = "Ten of Spades";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 38) {
            card3value = 10;
            card3suit = 1;
            cardname3 = "Ten of Hearts";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 39){
            card3value = 10;
            card3suit = 4;
            cardname3 = "Ten of Clubs";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 40){
            card3value = 10;
            card3suit = 3;
            cardname3 = "Ten of Diamonds";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 41){
            card3value = 11;
            card3suit = 2;
            cardname3 = "Jack of Spades";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 42){
            card3value = 11;
            card3suit = 1;
            cardname3 = "Jack of Hearts";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 43){
            card3value = 11;
            card3suit = 4;
            cardname3 = "Jack of Clubs";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 44){
            card3value = 11;
            card3suit = 3;
            cardname3 = "Jack of Diamonds";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 45){
            card3value = 12;
            card3suit = 2;
            cardname3 = "Queen of Spades";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 46) {
            card3value = 12;
            card3suit = 1;
            cardname3 = "Queen of Hearts";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 47){
            card3value = 12;
            card3suit = 4;
            cardname3 = "Queen of Clubs";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 48){
            card3value = 12;
            card3suit = 3;
            cardname3 = "Queen of Diamonds";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 49){
            card3value = 13;
            card3suit = 2;
            cardname3 = "King of Spades";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 50){
            card3value = 13;
            card3suit = 1;
            cardname3 = "King of Hearts";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 51){
            card3value = 13;
            card3suit = 4;
            cardname3 = "King of Clubs";
            cout << "3. " << cardname3 << endl;
        }
        else if (card3 == 52){
            card3value = 13;
            card3suit = 3;
            cardname3 = "King of Diamonds";
            cout << "3. " << cardname3 << endl;
        }
        
        //determining card4
        if (card4 == 1) {
            card4value = 1;
            card4suit = 1;
            cardname4 = "Ace of Hearts";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 2){
            card4value = 1;
            card4suit = 4;
            cardname4 = "Ace of Clubs";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 3){
            card4value = 1;
            card4suit = 3;
            cardname4 = "Ace of Diamonds";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 4){
            card4value = 1;
            card4suit = 2;
            cardname4 = "Ace of Spades";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 5){
            card4value = 2;
            card4suit = 1;
            cardname4 = "Two of Hearts";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 6){
            card4value = 2;
            card4suit = 4;
            cardname4 = "Two of Clubs";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 7){
            card4value = 2;
            card4suit = 3;
            cardname4 = "Two of Diamonds";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 8){
            card4value = 2;
            card4suit = 2;
            cardname4 = "Two of Spades";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 9) {
            card4value = 3;
            card4suit = 1;
            cardname4 = "Three of Hearts";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 10){
            card4value = 3;
            card4suit = 4;
            cardname4 = "Three of Clubs";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 11){
            card4value = 3;
            card4suit = 3;
            cardname4 = "Three of Diamonds";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 12){
            card4value = 3;
            card4suit = 2;
            cardname4 = "Three of Spades";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 13){
            card4value = 4;
            card4suit = 1;
            cardname4 = "Four of Hearts";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 14){
            card4value = 4;
            card4suit = 4;
            cardname4 = "Four of Clubs";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 15){
            card4value = 4;
            card4suit = 3;
            cardname4 = "Four of Diamonds";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 16){
            card4value = 4;
            card4suit = 2;
            cardname4 = "Four of Spades";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 17) {
            card4value = 5;
            card4suit = 1;
            cardname4 = "Five of Hearts";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 18){
            card4value = 5;
            card4suit = 4;
            cardname4 = "Five of Clubs";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 19){
            card4value = 5;
            card4suit = 3;
            cardname4 = "Five of Diamonds";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 10){
            card4value = 5;
            card4suit = 2;
            cardname4 = "Five of Spades";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 21){
            card4value = 6;
            card4suit = 1;
            cardname4 = "Six of Hearts";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 22){
            card4value = 6;
            card4suit = 4;
            cardname4 = "Six of Clubs";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 23){
            card4value = 6;
            card4suit = 3;
            cardname4 = "Six of Diamonds";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 24){
            card4value = 6;
            card4suit = 2;
            cardname4 = "Six of Spades";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 25) {
            card4value = 7;
            card4suit = 1;
            cardname4 = "Seven of Hearts";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 26){
            card4value = 7;
            card4suit = 4;
            cardname4 = "Seven of Clubs";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 27){
            card4value = 7;
            card4suit = 3;
            cardname4 = "Seven of Diamonds";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 28){
            card4value = 7;
            card4suit = 2;
            cardname4 = "Seven of Spades";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 29){
            card4value = 8;
            card4suit = 1;
            cardname4 = "Eight of Hearts";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 30){
            card4value = 8;
            card4suit = 4;
            cardname4 = "Eight of Clubs";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 31){
            card4value = 8;
            card4suit = 3;
            cardname4 = "Eight of Diamonds";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 32){
            card4value = 8;
            card4suit = 2;
            cardname4 = "Eight of Spades";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 33){
            card4value = 9;
            card4suit = 2;
            cardname4 = "Nine of Spades";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 34){
            card4value = 9;
            card4suit = 1;
            cardname4 = "Nine of Hearts";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 35){
            card4value = 9;
            card4suit = 4;
            cardname4 = "Nine of Clubs";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 36){
            card4value = 9;
            card4suit = 3;
            cardname4 = "Nine of Diamonds";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 37){
            card4value = 10;
            card4suit = 2;
            cardname4 = "Ten of Spades";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 38) {
            card4value = 10;
            card4suit = 1;
            cardname4 = "Ten of Hearts";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 39){
            card4value = 10;
            card4suit = 4;
            cardname4 = "Ten of Clubs";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 40){
            card4value = 10;
            card4suit = 3;
            cardname4 = "Ten of Diamonds";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 41){
            card4value = 11;
            card4suit = 2;
            cardname4 = "Jack of Spades";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 42){
            card4value = 11;
            card4suit = 1;
            cardname4 = "Jack of Hearts";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 43){
            card4value = 11;
            card4suit = 4;
            cardname4 = "Jack of Clubs";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 44){
            card4value = 11;
            card4suit = 3;
            cardname4 = "Jack of Diamonds";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 45){
            card4value = 12;
            card4suit = 2;
            cardname4 = "Queen of Spades";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 46) {
            card4value = 12;
            card4suit = 1;
            cardname4 = "Queen of Hearts";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 47){
            card4value = 12;
            card4suit = 4;
            cardname4 = "Queen of Clubs";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 48){
            card4value = 12;
            card4suit = 3;
            cardname4 = "Queen of Diamonds";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 49){
            card4value = 13;
            card4suit = 2;
            cardname4 = "King of Spades";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 50){
            card4value = 13;
            card4suit = 1;
            cardname4 = "King of Hearts";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 51){
            card4value = 13;
            card4suit = 4;
            cardname4 = "King of Clubs";
            cout << "4. " << cardname4 << endl;
        }
        else if (card4 == 52){
            card4value = 13;
            card4suit = 3;
            cardname4 = "King of Diamonds";
            cout << "4. " << cardname4 << endl;
        }
        
        //determining card5
        if (card5 == 1) {
            card5value = 1;
            card5suit = 1;
            cardname5 = "Ace of Hearts";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 2){
            card5value = 1;
            card5suit = 4;
            cardname5 = "Ace of Clubs";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 3){
            card5value = 1;
            card5suit = 3;
            cardname5 = "Ace of Diamonds";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 4){
            card5value = 1;
            card5suit = 2;
            cardname5 = "Ace of Spades";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 5){
            card5value = 2;
            card5suit = 1;
            cardname5 = "Two of Hearts";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 6){
            card5value = 2;
            card5suit = 4;
            cardname5 = "Two of Clubs";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 7){
            card5value = 2;
            card5suit = 3;
            cardname5 = "Two of Diamonds";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 8){
            card5value = 2;
            card5suit = 2;
            cardname5 = "Two of Spades";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 9) {
            card5value = 3;
            card5suit = 1;
            cardname5 = "Three of Hearts";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 10){
            card5value = 3;
            card5suit = 4;
            cardname5 = "Three of Clubs";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 11){
            card5value = 3;
            card5suit = 3;
            cardname5 = "Three of Diamonds";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 12){
            card5value = 3;
            card5suit = 2;
            cardname5 = "Three of Spades";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 13){
            card5value = 4;
            card5suit = 1;
            cardname5 = "Four of Hearts";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 14){
            card5value = 4;
            card5suit = 4;
            cardname5 = "Four of Clubs";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 15){
            card5value = 4;
            card5suit = 3;
            cardname5 = "Four of Diamonds";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 16){
            card5value = 4;
            card5suit = 2;
            cardname5 = "Four of Spades";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 17) {
            card5value = 5;
            card5suit = 1;
            cardname5 = "Five of Hearts";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 18){
            card5value = 5;
            card5suit = 4;
            cardname5 = "Five of Clubs";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 19){
            card5value = 5;
            card5suit = 3;
            cardname5 = "Five of Diamonds";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 10){
            card5value = 5;
            card5suit = 2;
            cardname5 = "Five of Spades";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 21){
            card5value = 6;
            card5suit = 1;
            cardname5 = "Six of Hearts";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 22){
            card5value = 6;
            card5suit = 4;
            cardname5 = "Six of Clubs";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 23){
            card5value = 6;
            card5suit = 3;
            cardname5 = "Six of Diamonds";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 24){
            card5value = 6;
            card5suit = 2;
            cardname5 = "Six of Spades";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 25) {
            card5value = 7;
            card5suit = 1;
            cardname5 = "Seven of Hearts";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 26){
            card5value = 7;
            card5suit = 4;
            cardname5 = "Seven of Clubs";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 27){
            card5value = 7;
            card5suit = 3;
            cardname5 = "Seven of Diamonds";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 28){
            card5value = 7;
            card5suit = 2;
            cardname5 = "Seven of Spades";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 29){
            card5value = 8;
            card5suit = 1;
            cardname5 = "Eight of Hearts";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 30){
            card5value = 8;
            card5suit = 4;
            cardname5 = "Eight of Clubs";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 31){
            card5value = 8;
            card5suit = 3;
            cardname5 = "Eight of Diamonds";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 32){
            card5value = 8;
            card5suit = 2;
            cardname5 = "Eight of Spades";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 33){
            card5value = 9;
            card5suit = 2;
            cardname5 = "Nine of Spades";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 34){
            card5value = 9;
            card5suit = 1;
            cardname5 = "Nine of Hearts";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 35){
            card5value = 9;
            card5suit = 4;
            cardname5 = "Nine of Clubs";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 36){
            card5value = 9;
            card5suit = 3;
            cardname5 = "Nine of Diamonds";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 37){
            card5value = 10;
            card5suit = 2;
            cardname5 = "Ten of Spades";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 38) {
            card5value = 10;
            card5suit = 1;
            cardname5 = "Ten of Hearts";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 39){
            card5value = 10;
            card5suit = 4;
            cardname5 = "Ten of Clubs";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 40){
            card5value = 10;
            card5suit = 3;
            cardname5 = "Ten of Diamonds";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 41){
            card5value = 11;
            card5suit = 2;
            cardname5 = "Jack of Spades";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 42){
            card5value = 11;
            card5suit = 1;
            cardname5 = "Jack of Hearts";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 43){
            card5value = 11;
            card5suit = 4;
            cardname5 = "Jack of Clubs";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 44){
            card5value = 11;
            card5suit = 3;
            cardname5 = "Jack of Diamonds";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 45){
            card5value = 12;
            card5suit = 2;
            cardname5 = "Queen of Spades";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 46) {
            card5value = 12;
            card5suit = 1;
            cardname5 = "Queen of Hearts";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 47){
            card5value = 12;
            card5suit = 4;
            cardname5 = "Queen of Clubs";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 48){
            card5value = 12;
            card5suit = 3;
            cardname5 = "Queen of Diamonds";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 49){
            card5value = 13;
            card5suit = 2;
            cardname5 = "King of Spades";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 50){
            card5value = 13;
            card5suit = 1;
            cardname5 = "King of Hearts";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 51){
            card5value = 13;
            card5suit = 4;
            cardname5 = "King of Clubs";
            cout << "5. " << cardname5 << endl;
        }
        else if (card5 == 52){
            card5value = 13;
            card5suit = 3;
            cardname5 = "King of Diamonds";
            cout << "5. " << cardname5 << endl;
        }
        
        //sorts cards into an array
        int hand[5] = { card1value, card2value, card3value, card4value, card5value };
        int i, j, temp;
        for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(hand[i]>hand[j])
                {
                    temp  = hand[i];
                    hand[i] = hand[j];
                    hand[j] = temp;
                }
            }
        }
        //determine hand
        if (card1value == card2value || card1value == card3value || card1value == card4value || card1value == card5value || card2value == card3value || card2value == card4value || card2value == card5value || card3value == card4value || card3value == card5value || card4value == card5value) {
            if (card1value == card2value == card3value || card1value == card2value == card4value || card1value == card2value == card5value || card1value == card3value == card4value || card1value == card3value == card5value || card1value == card4value == card5value || card2value == card3value == card4value || card2value == card3value == card5value || card3value == card4value == card5value) {
                if (card1value == card2value == card3value == card4value || card1value == card2value == card3value == card5value || card1value == card3value == card4value ==card5value || card1value == card2value == card4value == card5value || card2value == card3value == card4value == card5value) {
                    cout << "Congratulations, 4 of a kind" << endl;
                }
                else {
                    if ((card1value == card2value == card3value && card4value == card5value) || (card1value == card2value == card4value && card3value == card5value) || (card1value == card2value == card5value && card3value == card4value) || (card1value == card3value == card4value && card2value == card5value) || (card1value == card3value == card5value && card2value == card4value) || (card1value == card4value == card5value && card2value == card3value) || (card2value == card3value == card4value && card1value == card5value) || (card2value == card3value == card5value && card1value == card4value) || (card3value == card4value == card5value && card1value == card2value)) {
                        cout << "Congratulations, full house!" << endl;
                    }
                    else{
                    cout << "Congratulations, 3 of a kind" << endl;
                    }}
            }
            else{
                cout << "You have a pair" << endl;
            }
        }
        else if (card1suit == card2suit == card3suit == card4suit == card5suit) {
            if (card1value == 13 || card2value == 13 || card3value == 13 || card4value == 13 || card5value == 13){
                if (card1value == 12 || card2value == 12 || card3value == 12 || card4value == 12 || card5value == 12) {
                    if (card1value == 11 || card2value == 11 || card3value == 11 || card4value == 11 || card5value == 11) {
                        if (card1value == 10 || card2value == 10 || card3value == 10 || card4value == 10 || card5value == 10) {
                            if (card1value == 1 || card2value == 1 || card3value == 1 || card4value == 1 || card5value == 1) {
                                cout << "CONGRATULATIONS, ROYAL FLUSH!!!" << endl;
                            }
                        }
                    }
                }
            }
            else {
            cout << "Congratulations, Flush!" << endl;
            }}
        else if (hand[0] == (hand[1] - 1) && hand[1] == (hand[2] - 1) && hand[2] == (hand[3] - 1) && hand[3] == (hand[4] -1)) {
            if(card1suit == card2suit == card3suit == card4suit == card5suit){
                cout << "Congratulations, Straight Flush!" << endl;
            }
            else {
                cout << "Congratulations, Straight!" << endl;
            }
            }
        else {
            cout << "You have a high card" << endl;
        }
        cout << " " << endl;
        //card exchange
        int choice2;
        cout << " " << endl;
        cout << "Dealer- Choose the number (1-5) of the cards you want to redraw. Enter 0 to skip." << endl;
        cin.clear();
        cin >> choice2;
        if(choice2 == 1){
            card1 = (rand() %52) + 1;
            if (card1 == 1) {
                cardname1 = "Ace of Hearts";
                card1value = 1;
                card1suit = 1;
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 2){
                cardname1 = "Ace of Clubs";
                card1value = 1;
                card1suit = 4;
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 3){
                cardname1 = "Ace of Diamonds";
                card1value = 1;
                card1suit = 3;
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 4){
                card1value = 1;
                cardname1 = "Ace of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 5){
                card1value = 2;
                card1suit = 1;
                cardname1 = "Two of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 6){
                card1value = 2;
                card1suit = 4;
                cardname1 = "Two of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 7){
                card1value = 2;
                card1suit = 3;
                cardname1 = "Two of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 8){
                card1value = 2;
                cardname1 = "Two of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 9) {
                card1value = 3;
                card1suit = 1;
                cardname1 = "Three of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 10){
                card1value = 3;
                card1suit = 4;
                cardname1 = "Three of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 11){
                card1value = 3;
                card1suit = 3;
                cardname1 = "Three of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 12){
                card1value = 3;
                cardname1 = "Three of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 13){
                card1value = 4;
                card1suit = 1;
                cardname1 = "Four of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 14){
                card1value = 4;
                card1suit = 4;
                cardname1 = "Four of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 15){
                card1value = 4;
                card1suit = 3;
                cardname1 = "Four of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 16){
                card1value = 4;
                cardname1 = "Four of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 17) {
                card1value = 5;
                card1suit = 1;
                cardname1 = "Five of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 18){
                card1value = 5;
                card1suit = 4;
                cardname1 = "Five of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 19){
                card1value = 5;
                card1suit = 3;
                cardname1 = "Five of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 20){
                card1value = 5;
                cardname1 = "Five of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 21){
                card1value = 6;
                card1suit = 1;
                cardname1 = "Six of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 22){
                card1value = 6;
                card1suit = 4;
                cardname1 = "Six of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 23){
                card1value = 6;
                card1suit = 3;
                cardname1 = "Six of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 24){
                card1value = 6;
                cardname1 = "Six of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 25) {
                card1value = 7;
                card1suit = 1;
                cardname1 = "Seven of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 26){
                card1value = 7;
                card1suit = 4;
                cardname1 = "Seven of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 27){
                card1value = 7;
                card1suit = 3;
                cardname1 = "Seven of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 28){
                card1value = 7;
                cardname1 = "Seven of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 29){
                card1value = 8;
                card1suit = 1;
                cardname1 = "Eight of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 30){
                card1value = 8;
                card1suit = 4;
                cardname1 = "Eight of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 31){
                card1value = 8;
                card1suit = 3;
                cardname1 = "Eight of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 32){
                card1value = 8;
                cardname1 = "Eight of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 33){
                card1value = 9;
                cardname1 = "Nine of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 34){
                card1value = 9;
                card1suit = 1;
                cardname1 = "Nine of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 35){
                card1value = 9;
                card1suit = 4;
                cardname1 = "Nine of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 36){
                card1value = 9;
                card1suit = 3;
                cardname1 = "Nine of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 37){
                card1value = 10;
                cardname1 = "Ten of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 38) {
                card1value = 10;
                card1suit = 1;
                cardname1 = "Ten of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 39){
                card1value = 10;
                card1suit = 4;
                cardname1 = "Ten of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 40){
                card1value = 10;
                card1suit = 3;
                cardname1 = "Ten of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 41){
                card1value = 11;
                cardname1 = "Jack of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 42){
                card1value = 11;
                card1suit = 1;
                cardname1 = "Jack of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 43){
                card1value = 11;
                card1suit = 4;
                cardname1 = "Jack of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 44){
                card1value = 11;
                card1suit = 3;
                cardname1 = "Jack of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 45){
                card1value = 12;
                cardname1 = "Queen of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 46) {
                card1value = 12;
                card1suit = 1;
                cardname1 = "Queen of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 47){
                card1value = 12;
                card1suit = 4;
                cardname1 = "Queen of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 48){
                card1value = 12;
                card1suit = 3;
                cardname1 = "Queen of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 49){
                card1value = 13;
                cardname1 = "King of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 50){
                card1value = 13;
                card1suit = 1;
                cardname1 = "King of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 51){
                card1value = 13;
                card1suit = 4;
                cardname1 = "King of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 52){
                card1value = 13;
                card1suit = 3;
                cardname1 = "King of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
        }
        else if(choice2 == 2){
             card2 = (rand() %52) + 1;
            if (card2 == 1) {
                card2value = 1;
                card2suit = 1;
                cardname2 = "Ace of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 2){
                card2value = 1;
                card2suit = 4;
                cardname2 = "Ace of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 3){
                card2value = 1;
                card2suit = 3;
                cardname2 = "Ace of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 4){
                card2value = 1;
                card2suit = 2;
                cardname2 = "Ace of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 5){
                card2value = 2;
                card2suit = 1;
                cardname2 = "Two of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 6){
                card2value = 2;
                card2suit = 4;
                cardname2 = "Two of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 7){
                card2value = 2;
                card2suit = 3;
                cardname2 = "Two of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 8){
                card2value = 2;
                card2suit = 2;
                cardname2 = "Two of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 9) {
                card2value = 3;
                card2suit = 1;
                cardname2 = "Three of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 10){
                card2value = 3;
                card2suit = 4;
                cardname2 = "Three of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 11){
                card2value = 3;
                card2suit = 3;
                cardname2 = "Three of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 12){
                card2value = 3;
                card2suit = 2;
                cardname2 = "Three of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 13){
                card2value = 4;
                card2suit = 1;
                cardname2 = "Four of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 14){
                card2value = 4;
                card2suit = 4;
                cardname2 = "Four of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 15){
                card2value = 4;
                card2suit = 3;
                cardname2 = "Four of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 16){
                card2value = 4;
                card2suit = 2;
                cardname2 = "Four of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 17) {
                card2value = 5;
                card2suit = 1;
                cardname2 = "Five of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 18){
                card2value = 5;
                card2suit = 4;
                cardname2 = "Five of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 19){
                card2value = 5;
                card2suit = 3;
                cardname2 = "Five of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 20){
                card2value = 5;
                card2suit = 2;
                cardname2 = "Five of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 21){
                card2value = 6;
                card2suit = 1;
                cardname2 = "Six of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 22){
                card2value = 6;
                card2suit = 4;
                cardname2 = "Six of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 23){
                card2value = 6;
                card2suit = 3;
                cardname2 = "Six of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 24){
                card2value = 6;
                card2suit = 2;
                cardname2 = "Six of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 25) {
                card2value = 7;
                card2suit = 1;
                cardname2 = "Seven of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 26){
                card2value = 7;
                card2suit = 4;
                cardname2 = "Seven of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 27){
                card2value = 7;
                card2suit = 3;
                cardname2 = "Seven of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 28){
                card2value = 7;
                card2suit = 2;
                cardname2 = "Seven of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 29){
                card2value = 8;
                card2suit = 1;
                cardname2 = "Eight of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 30){
                card2value = 8;
                card2suit = 4;
                cardname2 = "Eight of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 31){
                card2value = 8;
                card2suit = 3;
                cardname2 = "Eight of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 32){
                card2value = 8;
                card2suit = 2;
                cardname2 = "Eight of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 33){
                card2value = 9;
                card2suit = 2;
                cardname2 = "Nine of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 34){
                card2value = 9;
                card2suit = 1;
                cardname2 = "Nine of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 35){
                card2value = 9;
                card2suit = 4;
                cardname2 = "Nine of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 36){
                card2value = 9;
                card2suit = 3;
                cardname2 = "Nine of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 37){
                card2value = 10;
                card2suit = 2;
                cardname2 = "Ten of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 38) {
                card2value = 10;
                card2suit = 1;
                cardname2 = "Ten of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 39){
                card2value = 10;
                card2suit = 4;
                cardname2 = "Ten of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 40){
                card2value = 10;
                card2suit = 3;
                cardname2 = "Ten of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 41){
                card2value = 11;
                card2suit = 2;
                cardname2 = "Jack of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 42){
                card2value = 11;
                card2suit = 1;
                cardname2 = "Jack of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 43){
                card2value = 11;
                card2suit = 4;
                cardname2 = "Jack of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 44){
                card2value = 11;
                card2suit = 3;
                cardname2 = "Jack of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 45){
                card2value = 12;
                card2suit = 2;
                cardname2 = "Queen of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 46) {
                card2value = 12;
                card2suit = 1;
                cardname2 = "Queen of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 47){
                card2value = 12;
                card2suit = 4;
                cardname2 = "Queen of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 48){
                card2value = 12;
                card2suit = 3;
                cardname2 = "Queen of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 49){
                card2value = 13;
                card2suit = 2;
                cardname2 = "King of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 50){
                card2value = 13;
                card2suit = 1;
                cardname2 = "King of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 51){
                card2value = 13;
                card2suit = 4;
                cardname2 = "King of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 52){
                card2value = 13;
                card2suit = 3;
                cardname2 = "King of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
        }
        
        else if(choice2 ==3){
             card3 = (rand() %52) + 1;
            if (card3 == 1) {
                card3value = 1;
                card3suit = 1;
                cardname3 = "Ace of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 2){
                card3value = 1;
                card3suit = 4;
                cardname3 = "Ace of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 3){
                card3value = 1;
                card3suit = 3;
                cardname3 = "Ace of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 4){
                card3value = 1;
                card3suit = 2;
                cardname3 = "Ace of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 5){
                card3value = 2;
                card3suit = 1;
                cardname3 = "Two of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 6){
                card3value = 2;
                card3suit = 4;
                cardname3 = "Two of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 7){
                card3value = 2;
                card3suit = 3;
                cardname3 = "Two of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 8){
                card3value = 2;
                card3suit = 2;
                cardname3 = "Two of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 9) {
                card3value = 3;
                card3suit = 1;
                cardname3 = "Three of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 10){
                card3value = 3;
                card3suit = 4;
                cardname3 = "Three of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 11){
                card3value = 3;
                card3suit = 3;
                cardname3 = "Three of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 12){
                card3value = 3;
                card3suit = 2;
                cardname3 = "Three of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 13){
                card3value = 4;
                card3suit = 1;
                cardname3 = "Four of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 14){
                card3value = 4;
                card3suit = 4;
                cardname3 = "Four of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 15){
                card3value = 4;
                card3suit = 3;
                cardname3 = "Four of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 16){
                card3value = 4;
                card3suit = 2;
                cardname3 = "Four of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 17) {
                card3value = 5;
                card3suit = 1;
                cardname3 = "Five of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 18){
                card3value = 5;
                card3suit = 4;
                cardname3 = "Five of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 19){
                card3value = 5;
                card3suit = 3;
                cardname3 = "Five of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 10){
                card3value = 5;
                card3suit = 2;
                cardname3 = "Five of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 21){
                card3value = 6;
                card3suit = 1;
                cardname3 = "Six of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 22){
                card3value = 6;
                card3suit = 4;
                cardname3 = "Six of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 23){
                card3value = 6;
                card3suit = 3;
                cardname3 = "Six of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 24){
                cardname3 = "Six of Spades";
                card3value = 6;
                card3suit = 2;
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 25) {
                card3value = 7;
                card3suit = 1;
                cardname3 = "Seven of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 26){
                card3value = 7;
                card3suit = 4;
                cardname3 = "Seven of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 27){
                card3value = 7;
                card3suit = 3;
                cardname3 = "Seven of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 28){
                card3value = 7;
                card3suit = 2;
                cardname3 = "Seven of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 29){
                card3value = 8;
                card3suit = 1;
                cardname3 = "Eight of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 30){
                card3value = 8;
                card3suit = 4;
                cardname3 = "Eight of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 31){
                card3value = 8;
                card3suit = 3;
                cardname3 = "Eight of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 32){
                card3value = 8;
                card3suit = 2;
                cardname3 = "Eight of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 33){
                card3value = 9;
                card3suit = 2;
                cardname3 = "Nine of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 34){
                card3value = 9;
                card3suit = 1;
                cardname3 = "Nine of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 35){
                card3value = 9;
                card3suit = 4;
                cardname3 = "Nine of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 36){
                card3value = 9;
                card3suit = 3;
                cardname3 = "Nine of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 37){
                card3value = 10;
                card3suit = 2;
                cardname3 = "Ten of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 38) {
                card3value = 10;
                card3suit = 1;
                cardname3 = "Ten of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 39){
                card3value = 10;
                card3suit = 4;
                cardname3 = "Ten of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 40){
                card3value = 10;
                card3suit = 3;
                cardname3 = "Ten of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 41){
                card3value = 11;
                card3suit = 2;
                cardname3 = "Jack of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 42){
                card3value = 11;
                card3suit = 1;
                cardname3 = "Jack of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 43){
                card3value = 11;
                card3suit = 4;
                cardname3 = "Jack of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 44){
                card3value = 11;
                card3suit = 3;
                cardname3 = "Jack of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 45){
                card3value = 12;
                card3suit = 2;
                cardname3 = "Queen of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 46) {
                card3value = 12;
                card3suit = 1;
                cardname3 = "Queen of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 47){
                card3value = 12;
                card3suit = 4;
                cardname3 = "Queen of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 48){
                card3value = 12;
                card3suit = 3;
                cardname3 = "Queen of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 49){
                card3value = 13;
                card3suit = 2;
                cardname3 = "King of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 50){
                card3value = 13;
                card3suit = 1;
                cardname3 = "King of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 51){
                card3value = 13;
                card3suit = 4;
                cardname3 = "King of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 52){
                card3value = 13;
                card3suit = 3;
                cardname3 = "King of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
        }
        else if(choice2 == 4){
            card4 = (rand() %52) + 1;
            if (card4 == 1) {
                card4value = 1;
                card4suit = 1;
                cardname4 = "Ace of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 2){
                card4value = 1;
                card4suit = 4;
                cardname4 = "Ace of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 3){
                card4value = 1;
                card4suit = 3;
                cardname4 = "Ace of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 4){
                card4value = 1;
                card4suit = 2;
                cardname4 = "Ace of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 5){
                card4value = 2;
                card4suit = 1;
                cardname4 = "Two of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 6){
                card4value = 2;
                card4suit = 4;
                cardname4 = "Two of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 7){
                card4value = 2;
                card4suit = 3;
                cardname4 = "Two of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 8){
                card4value = 2;
                card4suit = 2;
                cardname4 = "Two of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 9) {
                card4value = 3;
                card4suit = 1;
                cardname4 = "Three of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 10){
                card4value = 3;
                card4suit = 4;
                cardname4 = "Three of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 11){
                card4value = 3;
                card4suit = 3;
                cardname4 = "Three of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 12){
                card4value = 3;
                card4suit = 2;
                cardname4 = "Three of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 13){
                card4value = 4;
                card4suit = 1;
                cardname4 = "Four of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 14){
                card4value = 4;
                card4suit = 4;
                cardname4 = "Four of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 15){
                card4value = 4;
                card4suit = 3;
                cardname4 = "Four of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 16){
                card4value = 4;
                card4suit = 2;
                cardname4 = "Four of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 17) {
                card4value = 5;
                card4suit = 1;
                cardname4 = "Five of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 18){
                card4value = 5;
                card4suit = 4;
                cardname4 = "Five of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 19){
                card4value = 5;
                card4suit = 3;
                cardname4 = "Five of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 10){
                card4value = 5;
                card4suit = 2;
                cardname4 = "Five of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 21){
                card4value = 6;
                card4suit = 1;
                cardname4 = "Six of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 22){
                card4value = 6;
                card4suit = 4;
                cardname4 = "Six of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 23){
                card4value = 6;
                card4suit = 3;
                cardname4 = "Six of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 24){
                card4value = 6;
                card4suit = 2;
                cardname4 = "Six of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 25) {
                card4value = 7;
                card4suit = 1;
                cardname4 = "Seven of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 26){
                card4value = 7;
                card4suit = 4;
                cardname4 = "Seven of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 27){
                card4value = 7;
                card4suit = 3;
                cardname4 = "Seven of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 28){
                card4value = 7;
                card4suit = 2;
                cardname4 = "Seven of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 29){
                card4value = 8;
                card4suit = 1;
                cardname4 = "Eight of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 30){
                card4value = 8;
                card4suit = 4;
                cardname4 = "Eight of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 31){
                card4value = 8;
                card4suit = 3;
                cardname4 = "Eight of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 32){
                card4value = 8;
                card4suit = 2;
                cardname4 = "Eight of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 33){
                card4value = 9;
                card4suit = 2;
                cardname4 = "Nine of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 34){
                card4value = 9;
                card4suit = 1;
                cardname4 = "Nine of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 35){
                card4value = 9;
                card4suit = 4;
                cardname4 = "Nine of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 36){
                card4value = 9;
                card4suit = 3;
                cardname4 = "Nine of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 37){
                card4value = 10;
                card4suit = 2;
                cardname4 = "Ten of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 38) {
                card4value = 10;
                card4suit = 1;
                cardname4 = "Ten of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 39){
                card4value = 10;
                card4suit = 4;
                cardname4 = "Ten of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 40){
                card4value = 10;
                card4suit = 3;
                cardname4 = "Ten of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 41){
                card4value = 11;
                card4suit = 2;
                cardname4 = "Jack of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 42){
                card4value = 11;
                card4suit = 1;
                cardname4 = "Jack of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 43){
                card4value = 11;
                card4suit = 4;
                cardname4 = "Jack of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 44){
                card4value = 11;
                card4suit = 3;
                cardname4 = "Jack of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 45){
                card4value = 12;
                card4suit = 2;
                cardname4 = "Queen of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 46) {
                card4value = 12;
                card4suit = 1;
                cardname4 = "Queen of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 47){
                card4value = 12;
                card4suit = 4;
                cardname4 = "Queen of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 48){
                card4value = 12;
                card4suit = 3;
                cardname4 = "Queen of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 49){
                card4value = 13;
                card4suit = 2;
                cardname4 = "King of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 50){
                card4value = 13;
                card4suit = 1;
                cardname4 = "King of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 51){
                card4value = 13;
                card4suit = 4;
                cardname4 = "King of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 52){
                card4value = 13;
                card4suit = 3;
                cardname4 = "King of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
        }
        else if(choice2 == 5){
             card5 = (rand() %52) + 1;
            if (card5 == 1) {
                card5value = 1;
                card5suit = 1;
                cardname5 = "Ace of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 2){
                card5value = 1;
                card5suit = 4;
                cardname5 = "Ace of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 3){
                card5value = 1;
                card5suit = 3;
                cardname5 = "Ace of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 4){
                card5value = 1;
                card5suit = 2;
                cardname5 = "Ace of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 5){
                card5value = 2;
                card5suit = 1;
                cardname5 = "Two of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 6){
                card5value = 2;
                card5suit = 4;
                cardname5 = "Two of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 7){
                card5value = 2;
                card5suit = 3;
                cardname5 = "Two of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 8){
                card5value = 2;
                card5suit = 2;
                cardname5 = "Two of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 9) {
                card5value = 3;
                card5suit = 1;
                cardname5 = "Three of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 10){
                card5value = 3;
                card5suit = 4;
                cardname5 = "Three of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 11){
                card5value = 3;
                card5suit = 3;
                cardname5 = "Three of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 12){
                card5value = 3;
                card5suit = 2;
                cardname5 = "Three of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 13){
                card5value = 4;
                card5suit = 1;
                cardname5 = "Four of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 14){
                card5value = 4;
                card5suit = 4;
                cardname5 = "Four of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 15){
                card5value = 4;
                card5suit = 3;
                cardname5 = "Four of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 16){
                card5value = 4;
                card5suit = 2;
                cardname5 = "Four of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 17) {
                card5value = 5;
                card5suit = 1;
                cardname5 = "Five of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 18){
                card5value = 5;
                card5suit = 4;
                cardname5 = "Five of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 19){
                card5value = 5;
                card5suit = 3;
                cardname5 = "Five of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 10){
                card5value = 5;
                card5suit = 2;
                cardname5 = "Five of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 21){
                card5value = 6;
                card5suit = 1;
                cardname5 = "Six of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 22){
                card5value = 6;
                card5suit = 4;
                cardname5 = "Six of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 23){
                card5value = 6;
                card5suit = 3;
                cardname5 = "Six of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 24){
                card5value = 6;
                card5suit = 2;
                cardname5 = "Six of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 25) {
                card5value = 7;
                card5suit = 1;
                cardname5 = "Seven of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 26){
                card5value = 7;
                card5suit = 4;
                cardname5 = "Seven of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 27){
                card5value = 7;
                card5suit = 3;
                cardname5 = "Seven of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 28){
                card5value = 7;
                card5suit = 2;
                cardname5 = "Seven of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 29){
                card5value = 8;
                card5suit = 1;
                cardname5 = "Eight of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 30){
                card5value = 8;
                card5suit = 4;
                cardname5 = "Eight of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 31){
                card5value = 8;
                card5suit = 3;
                cardname5 = "Eight of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 32){
                card5value = 8;
                card5suit = 2;
                cardname5 = "Eight of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 33){
                card5value = 9;
                card5suit = 2;
                cardname5 = "Nine of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 34){
                card5value = 9;
                card5suit = 1;
                cardname5 = "Nine of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 35){
                card5value = 9;
                card5suit = 4;
                cardname5 = "Nine of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 36){
                card5value = 9;
                card5suit = 3;
                cardname5 = "Nine of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 37){
                card5value = 10;
                card5suit = 2;
                cardname5 = "Ten of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 38) {
                card5value = 10;
                card5suit = 1;
                cardname5 = "Ten of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 39){
                card5value = 10;
                card5suit = 4;
                cardname5 = "Ten of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 40){
                card5value = 10;
                card5suit = 3;
                cardname5 = "Ten of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 41){
                card5value = 11;
                card5suit = 2;
                cardname5 = "Jack of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 42){
                card5value = 11;
                card5suit = 1;
                cardname5 = "Jack of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 43){
                card5value = 11;
                card5suit = 4;
                cardname5 = "Jack of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 44){
                card5value = 11;
                card5suit = 3;
                cardname5 = "Jack of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 45){
                card5value = 12;
                card5suit = 2;
                cardname5 = "Queen of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 46) {
                card5value = 12;
                card5suit = 1;
                cardname5 = "Queen of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 47){
                card5value = 12;
                card5suit = 4;
                cardname5 = "Queen of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 48){
                card5value = 12;
                card5suit = 3;
                cardname5 = "Queen of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 49){
                card5value = 13;
                card5suit = 2;
                cardname5 = "King of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 50){
                card5value = 13;
                card5suit = 1;
                cardname5 = "King of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 51){
                card5value = 13;
                card5suit = 4;
                cardname5 = "King of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 52){
                card5value = 13;
                card5suit = 3;
                cardname5 = "King of Diamonds";
                cout << "5. " << cardname5 << endl;
            }

        }
        else if(choice2 == 0){
            cout << " " << endl;
        }
        cout << "Dealer- Again, choose the number (1-5) of the cards you want to redraw. Enter 0 to skip." << endl;
        cin >> choice2;
        if(choice2 == 1){
            card1 = (rand() %52) + 1;
            if (card1 == 1) {
                cardname1 = "Ace of Hearts";
                card1value = 1;
                card1suit = 1;
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 2){
                cardname1 = "Ace of Clubs";
                card1value = 1;
                card1suit = 4;
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 3){
                cardname1 = "Ace of Diamonds";
                card1value = 1;
                card1suit = 3;
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 4){
                card1value = 1;
                cardname1 = "Ace of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 5){
                card1value = 2;
                card1suit = 1;
                cardname1 = "Two of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 6){
                card1value = 2;
                card1suit = 4;
                cardname1 = "Two of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 7){
                card1value = 2;
                card1suit = 3;
                cardname1 = "Two of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 8){
                card1value = 2;
                cardname1 = "Two of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 9) {
                card1value = 3;
                card1suit = 1;
                cardname1 = "Three of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 10){
                card1value = 3;
                card1suit = 4;
                cardname1 = "Three of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 11){
                card1value = 3;
                card1suit = 3;
                cardname1 = "Three of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 12){
                card1value = 3;
                cardname1 = "Three of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 13){
                card1value = 4;
                card1suit = 1;
                cardname1 = "Four of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 14){
                card1value = 4;
                card1suit = 4;
                cardname1 = "Four of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 15){
                card1value = 4;
                card1suit = 3;
                cardname1 = "Four of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 16){
                card1value = 4;
                cardname1 = "Four of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 17) {
                card1value = 5;
                card1suit = 1;
                cardname1 = "Five of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 18){
                card1value = 5;
                card1suit = 4;
                cardname1 = "Five of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 19){
                card1value = 5;
                card1suit = 3;
                cardname1 = "Five of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 20){
                card1value = 5;
                cardname1 = "Five of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 21){
                card1value = 6;
                card1suit = 1;
                cardname1 = "Six of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 22){
                card1value = 6;
                card1suit = 4;
                cardname1 = "Six of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 23){
                card1value = 6;
                card1suit = 3;
                cardname1 = "Six of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 24){
                card1value = 6;
                cardname1 = "Six of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 25) {
                card1value = 7;
                card1suit = 1;
                cardname1 = "Seven of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 26){
                card1value = 7;
                card1suit = 4;
                cardname1 = "Seven of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 27){
                card1value = 7;
                card1suit = 3;
                cardname1 = "Seven of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 28){
                card1value = 7;
                cardname1 = "Seven of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 29){
                card1value = 8;
                card1suit = 1;
                cardname1 = "Eight of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 30){
                card1value = 8;
                card1suit = 4;
                cardname1 = "Eight of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 31){
                card1value = 8;
                card1suit = 3;
                cardname1 = "Eight of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 32){
                card1value = 8;
                cardname1 = "Eight of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 33){
                card1value = 9;
                cardname1 = "Nine of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 34){
                card1value = 9;
                card1suit = 1;
                cardname1 = "Nine of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 35){
                card1value = 9;
                card1suit = 4;
                cardname1 = "Nine of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 36){
                card1value = 9;
                card1suit = 3;
                cardname1 = "Nine of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 37){
                card1value = 10;
                cardname1 = "Ten of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 38) {
                card1value = 10;
                card1suit = 1;
                cardname1 = "Ten of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 39){
                card1value = 10;
                card1suit = 4;
                cardname1 = "Ten of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 40){
                card1value = 10;
                card1suit = 3;
                cardname1 = "Ten of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 41){
                card1value = 11;
                cardname1 = "Jack of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 42){
                card1value = 11;
                card1suit = 1;
                cardname1 = "Jack of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 43){
                card1value = 11;
                card1suit = 4;
                cardname1 = "Jack of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 44){
                card1value = 11;
                card1suit = 3;
                cardname1 = "Jack of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 45){
                card1value = 12;
                cardname1 = "Queen of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 46) {
                card1value = 12;
                card1suit = 1;
                cardname1 = "Queen of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 47){
                card1value = 12;
                card1suit = 4;
                cardname1 = "Queen of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 48){
                card1value = 12;
                card1suit = 3;
                cardname1 = "Queen of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 49){
                card1value = 13;
                cardname1 = "King of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 50){
                card1value = 13;
                card1suit = 1;
                cardname1 = "King of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 51){
                card1value = 13;
                card1suit = 4;
                cardname1 = "King of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 52){
                card1value = 13;
                card1suit = 3;
                cardname1 = "King of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
        }
        else if(choice2 == 2){
            card2 = (rand() %52) + 1;
            if (card2 == 1) {
                card2value = 1;
                card2suit = 1;
                cardname2 = "Ace of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 2){
                card2value = 1;
                card2suit = 4;
                cardname2 = "Ace of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 3){
                card2value = 1;
                card2suit = 3;
                cardname2 = "Ace of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 4){
                card2value = 1;
                card2suit = 2;
                cardname2 = "Ace of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 5){
                card2value = 2;
                card2suit = 1;
                cardname2 = "Two of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 6){
                card2value = 2;
                card2suit = 4;
                cardname2 = "Two of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 7){
                card2value = 2;
                card2suit = 3;
                cardname2 = "Two of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 8){
                card2value = 2;
                card2suit = 2;
                cardname2 = "Two of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 9) {
                card2value = 3;
                card2suit = 1;
                cardname2 = "Three of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 10){
                card2value = 3;
                card2suit = 4;
                cardname2 = "Three of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 11){
                card2value = 3;
                card2suit = 3;
                cardname2 = "Three of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 12){
                card2value = 3;
                card2suit = 2;
                cardname2 = "Three of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 13){
                card2value = 4;
                card2suit = 1;
                cardname2 = "Four of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 14){
                card2value = 4;
                card2suit = 4;
                cardname2 = "Four of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 15){
                card2value = 4;
                card2suit = 3;
                cardname2 = "Four of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 16){
                card2value = 4;
                card2suit = 2;
                cardname2 = "Four of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 17) {
                card2value = 5;
                card2suit = 1;
                cardname2 = "Five of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 18){
                card2value = 5;
                card2suit = 4;
                cardname2 = "Five of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 19){
                card2value = 5;
                card2suit = 3;
                cardname2 = "Five of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 20){
                card2value = 5;
                card2suit = 2;
                cardname2 = "Five of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 21){
                card2value = 6;
                card2suit = 1;
                cardname2 = "Six of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 22){
                card2value = 6;
                card2suit = 4;
                cardname2 = "Six of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 23){
                card2value = 6;
                card2suit = 3;
                cardname2 = "Six of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 24){
                card2value = 6;
                card2suit = 2;
                cardname2 = "Six of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 25) {
                card2value = 7;
                card2suit = 1;
                cardname2 = "Seven of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 26){
                card2value = 7;
                card2suit = 4;
                cardname2 = "Seven of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 27){
                card2value = 7;
                card2suit = 3;
                cardname2 = "Seven of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 28){
                card2value = 7;
                card2suit = 2;
                cardname2 = "Seven of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 29){
                card2value = 8;
                card2suit = 1;
                cardname2 = "Eight of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 30){
                card2value = 8;
                card2suit = 4;
                cardname2 = "Eight of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 31){
                card2value = 8;
                card2suit = 3;
                cardname2 = "Eight of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 32){
                card2value = 8;
                card2suit = 2;
                cardname2 = "Eight of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 33){
                card2value = 9;
                card2suit = 2;
                cardname2 = "Nine of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 34){
                card2value = 9;
                card2suit = 1;
                cardname2 = "Nine of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 35){
                card2value = 9;
                card2suit = 4;
                cardname2 = "Nine of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 36){
                card2value = 9;
                card2suit = 3;
                cardname2 = "Nine of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 37){
                card2value = 10;
                card2suit = 2;
                cardname2 = "Ten of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 38) {
                card2value = 10;
                card2suit = 1;
                cardname2 = "Ten of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 39){
                card2value = 10;
                card2suit = 4;
                cardname2 = "Ten of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 40){
                card2value = 10;
                card2suit = 3;
                cardname2 = "Ten of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 41){
                card2value = 11;
                card2suit = 2;
                cardname2 = "Jack of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 42){
                card2value = 11;
                card2suit = 1;
                cardname2 = "Jack of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 43){
                card2value = 11;
                card2suit = 4;
                cardname2 = "Jack of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 44){
                card2value = 11;
                card2suit = 3;
                cardname2 = "Jack of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 45){
                card2value = 12;
                card2suit = 2;
                cardname2 = "Queen of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 46) {
                card2value = 12;
                card2suit = 1;
                cardname2 = "Queen of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 47){
                card2value = 12;
                card2suit = 4;
                cardname2 = "Queen of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 48){
                card2value = 12;
                card2suit = 3;
                cardname2 = "Queen of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 49){
                card2value = 13;
                card2suit = 2;
                cardname2 = "King of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 50){
                card2value = 13;
                card2suit = 1;
                cardname2 = "King of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 51){
                card2value = 13;
                card2suit = 4;
                cardname2 = "King of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 52){
                card2value = 13;
                card2suit = 3;
                cardname2 = "King of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
        }
        
        else if(choice2 ==3){
            card3 = (rand() %52) + 1;
            if (card3 == 1) {
                card3value = 1;
                card3suit = 1;
                cardname3 = "Ace of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 2){
                card3value = 1;
                card3suit = 4;
                cardname3 = "Ace of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 3){
                card3value = 1;
                card3suit = 3;
                cardname3 = "Ace of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 4){
                card3value = 1;
                card3suit = 2;
                cardname3 = "Ace of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 5){
                card3value = 2;
                card3suit = 1;
                cardname3 = "Two of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 6){
                card3value = 2;
                card3suit = 4;
                cardname3 = "Two of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 7){
                card3value = 2;
                card3suit = 3;
                cardname3 = "Two of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 8){
                card3value = 2;
                card3suit = 2;
                cardname3 = "Two of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 9) {
                card3value = 3;
                card3suit = 1;
                cardname3 = "Three of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 10){
                card3value = 3;
                card3suit = 4;
                cardname3 = "Three of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 11){
                card3value = 3;
                card3suit = 3;
                cardname3 = "Three of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 12){
                card3value = 3;
                card3suit = 2;
                cardname3 = "Three of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 13){
                card3value = 4;
                card3suit = 1;
                cardname3 = "Four of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 14){
                card3value = 4;
                card3suit = 4;
                cardname3 = "Four of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 15){
                card3value = 4;
                card3suit = 3;
                cardname3 = "Four of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 16){
                card3value = 4;
                card3suit = 2;
                cardname3 = "Four of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 17) {
                card3value = 5;
                card3suit = 1;
                cardname3 = "Five of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 18){
                card3value = 5;
                card3suit = 4;
                cardname3 = "Five of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 19){
                card3value = 5;
                card3suit = 3;
                cardname3 = "Five of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 10){
                card3value = 5;
                card3suit = 2;
                cardname3 = "Five of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 21){
                card3value = 6;
                card3suit = 1;
                cardname3 = "Six of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 22){
                card3value = 6;
                card3suit = 4;
                cardname3 = "Six of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 23){
                card3value = 6;
                card3suit = 3;
                cardname3 = "Six of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 24){
                cardname3 = "Six of Spades";
                card3value = 6;
                card3suit = 2;
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 25) {
                card3value = 7;
                card3suit = 1;
                cardname3 = "Seven of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 26){
                card3value = 7;
                card3suit = 4;
                cardname3 = "Seven of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 27){
                card3value = 7;
                card3suit = 3;
                cardname3 = "Seven of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 28){
                card3value = 7;
                card3suit = 2;
                cardname3 = "Seven of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 29){
                card3value = 8;
                card3suit = 1;
                cardname3 = "Eight of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 30){
                card3value = 8;
                card3suit = 4;
                cardname3 = "Eight of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 31){
                card3value = 8;
                card3suit = 3;
                cardname3 = "Eight of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 32){
                card3value = 8;
                card3suit = 2;
                cardname3 = "Eight of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 33){
                card3value = 9;
                card3suit = 2;
                cardname3 = "Nine of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 34){
                card3value = 9;
                card3suit = 1;
                cardname3 = "Nine of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 35){
                card3value = 9;
                card3suit = 4;
                cardname3 = "Nine of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 36){
                card3value = 9;
                card3suit = 3;
                cardname3 = "Nine of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 37){
                card3value = 10;
                card3suit = 2;
                cardname3 = "Ten of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 38) {
                card3value = 10;
                card3suit = 1;
                cardname3 = "Ten of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 39){
                card3value = 10;
                card3suit = 4;
                cardname3 = "Ten of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 40){
                card3value = 10;
                card3suit = 3;
                cardname3 = "Ten of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 41){
                card3value = 11;
                card3suit = 2;
                cardname3 = "Jack of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 42){
                card3value = 11;
                card3suit = 1;
                cardname3 = "Jack of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 43){
                card3value = 11;
                card3suit = 4;
                cardname3 = "Jack of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 44){
                card3value = 11;
                card3suit = 3;
                cardname3 = "Jack of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 45){
                card3value = 12;
                card3suit = 2;
                cardname3 = "Queen of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 46) {
                card3value = 12;
                card3suit = 1;
                cardname3 = "Queen of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 47){
                card3value = 12;
                card3suit = 4;
                cardname3 = "Queen of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 48){
                card3value = 12;
                card3suit = 3;
                cardname3 = "Queen of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 49){
                card3value = 13;
                card3suit = 2;
                cardname3 = "King of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 50){
                card3value = 13;
                card3suit = 1;
                cardname3 = "King of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 51){
                card3value = 13;
                card3suit = 4;
                cardname3 = "King of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 52){
                card3value = 13;
                card3suit = 3;
                cardname3 = "King of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
        }
        else if(choice2 == 4){
            card4 = (rand() %52) + 1;
            if (card4 == 1) {
                card4value = 1;
                card4suit = 1;
                cardname4 = "Ace of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 2){
                card4value = 1;
                card4suit = 4;
                cardname4 = "Ace of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 3){
                card4value = 1;
                card4suit = 3;
                cardname4 = "Ace of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 4){
                card4value = 1;
                card4suit = 2;
                cardname4 = "Ace of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 5){
                card4value = 2;
                card4suit = 1;
                cardname4 = "Two of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 6){
                card4value = 2;
                card4suit = 4;
                cardname4 = "Two of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 7){
                card4value = 2;
                card4suit = 3;
                cardname4 = "Two of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 8){
                card4value = 2;
                card4suit = 2;
                cardname4 = "Two of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 9) {
                card4value = 3;
                card4suit = 1;
                cardname4 = "Three of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 10){
                card4value = 3;
                card4suit = 4;
                cardname4 = "Three of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 11){
                card4value = 3;
                card4suit = 3;
                cardname4 = "Three of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 12){
                card4value = 3;
                card4suit = 2;
                cardname4 = "Three of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 13){
                card4value = 4;
                card4suit = 1;
                cardname4 = "Four of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 14){
                card4value = 4;
                card4suit = 4;
                cardname4 = "Four of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 15){
                card4value = 4;
                card4suit = 3;
                cardname4 = "Four of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 16){
                card4value = 4;
                card4suit = 2;
                cardname4 = "Four of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 17) {
                card4value = 5;
                card4suit = 1;
                cardname4 = "Five of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 18){
                card4value = 5;
                card4suit = 4;
                cardname4 = "Five of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 19){
                card4value = 5;
                card4suit = 3;
                cardname4 = "Five of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 10){
                card4value = 5;
                card4suit = 2;
                cardname4 = "Five of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 21){
                card4value = 6;
                card4suit = 1;
                cardname4 = "Six of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 22){
                card4value = 6;
                card4suit = 4;
                cardname4 = "Six of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 23){
                card4value = 6;
                card4suit = 3;
                cardname4 = "Six of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 24){
                card4value = 6;
                card4suit = 2;
                cardname4 = "Six of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 25) {
                card4value = 7;
                card4suit = 1;
                cardname4 = "Seven of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 26){
                card4value = 7;
                card4suit = 4;
                cardname4 = "Seven of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 27){
                card4value = 7;
                card4suit = 3;
                cardname4 = "Seven of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 28){
                card4value = 7;
                card4suit = 2;
                cardname4 = "Seven of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 29){
                card4value = 8;
                card4suit = 1;
                cardname4 = "Eight of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 30){
                card4value = 8;
                card4suit = 4;
                cardname4 = "Eight of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 31){
                card4value = 8;
                card4suit = 3;
                cardname4 = "Eight of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 32){
                card4value = 8;
                card4suit = 2;
                cardname4 = "Eight of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 33){
                card4value = 9;
                card4suit = 2;
                cardname4 = "Nine of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 34){
                card4value = 9;
                card4suit = 1;
                cardname4 = "Nine of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 35){
                card4value = 9;
                card4suit = 4;
                cardname4 = "Nine of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 36){
                card4value = 9;
                card4suit = 3;
                cardname4 = "Nine of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 37){
                card4value = 10;
                card4suit = 2;
                cardname4 = "Ten of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 38) {
                card4value = 10;
                card4suit = 1;
                cardname4 = "Ten of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 39){
                card4value = 10;
                card4suit = 4;
                cardname4 = "Ten of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 40){
                card4value = 10;
                card4suit = 3;
                cardname4 = "Ten of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 41){
                card4value = 11;
                card4suit = 2;
                cardname4 = "Jack of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 42){
                card4value = 11;
                card4suit = 1;
                cardname4 = "Jack of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 43){
                card4value = 11;
                card4suit = 4;
                cardname4 = "Jack of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 44){
                card4value = 11;
                card4suit = 3;
                cardname4 = "Jack of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 45){
                card4value = 12;
                card4suit = 2;
                cardname4 = "Queen of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 46) {
                card4value = 12;
                card4suit = 1;
                cardname4 = "Queen of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 47){
                card4value = 12;
                card4suit = 4;
                cardname4 = "Queen of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 48){
                card4value = 12;
                card4suit = 3;
                cardname4 = "Queen of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 49){
                card4value = 13;
                card4suit = 2;
                cardname4 = "King of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 50){
                card4value = 13;
                card4suit = 1;
                cardname4 = "King of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 51){
                card4value = 13;
                card4suit = 4;
                cardname4 = "King of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 52){
                card4value = 13;
                card4suit = 3;
                cardname4 = "King of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
        }
        else if(choice2 == 5){
            card5 = (rand() %52) + 1;
            if (card5 == 1) {
                card5value = 1;
                card5suit = 1;
                cardname5 = "Ace of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 2){
                card5value = 1;
                card5suit = 4;
                cardname5 = "Ace of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 3){
                card5value = 1;
                card5suit = 3;
                cardname5 = "Ace of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 4){
                card5value = 1;
                card5suit = 2;
                cardname5 = "Ace of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 5){
                card5value = 2;
                card5suit = 1;
                cardname5 = "Two of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 6){
                card5value = 2;
                card5suit = 4;
                cardname5 = "Two of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 7){
                card5value = 2;
                card5suit = 3;
                cardname5 = "Two of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 8){
                card5value = 2;
                card5suit = 2;
                cardname5 = "Two of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 9) {
                card5value = 3;
                card5suit = 1;
                cardname5 = "Three of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 10){
                card5value = 3;
                card5suit = 4;
                cardname5 = "Three of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 11){
                card5value = 3;
                card5suit = 3;
                cardname5 = "Three of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 12){
                card5value = 3;
                card5suit = 2;
                cardname5 = "Three of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 13){
                card5value = 4;
                card5suit = 1;
                cardname5 = "Four of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 14){
                card5value = 4;
                card5suit = 4;
                cardname5 = "Four of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 15){
                card5value = 4;
                card5suit = 3;
                cardname5 = "Four of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 16){
                card5value = 4;
                card5suit = 2;
                cardname5 = "Four of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 17) {
                card5value = 5;
                card5suit = 1;
                cardname5 = "Five of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 18){
                card5value = 5;
                card5suit = 4;
                cardname5 = "Five of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 19){
                card5value = 5;
                card5suit = 3;
                cardname5 = "Five of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 10){
                card5value = 5;
                card5suit = 2;
                cardname5 = "Five of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 21){
                card5value = 6;
                card5suit = 1;
                cardname5 = "Six of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 22){
                card5value = 6;
                card5suit = 4;
                cardname5 = "Six of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 23){
                card5value = 6;
                card5suit = 3;
                cardname5 = "Six of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 24){
                card5value = 6;
                card5suit = 2;
                cardname5 = "Six of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 25) {
                card5value = 7;
                card5suit = 1;
                cardname5 = "Seven of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 26){
                card5value = 7;
                card5suit = 4;
                cardname5 = "Seven of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 27){
                card5value = 7;
                card5suit = 3;
                cardname5 = "Seven of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 28){
                card5value = 7;
                card5suit = 2;
                cardname5 = "Seven of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 29){
                card5value = 8;
                card5suit = 1;
                cardname5 = "Eight of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 30){
                card5value = 8;
                card5suit = 4;
                cardname5 = "Eight of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 31){
                card5value = 8;
                card5suit = 3;
                cardname5 = "Eight of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 32){
                card5value = 8;
                card5suit = 2;
                cardname5 = "Eight of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 33){
                card5value = 9;
                card5suit = 2;
                cardname5 = "Nine of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 34){
                card5value = 9;
                card5suit = 1;
                cardname5 = "Nine of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 35){
                card5value = 9;
                card5suit = 4;
                cardname5 = "Nine of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 36){
                card5value = 9;
                card5suit = 3;
                cardname5 = "Nine of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 37){
                card5value = 10;
                card5suit = 2;
                cardname5 = "Ten of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 38) {
                card5value = 10;
                card5suit = 1;
                cardname5 = "Ten of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 39){
                card5value = 10;
                card5suit = 4;
                cardname5 = "Ten of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 40){
                card5value = 10;
                card5suit = 3;
                cardname5 = "Ten of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 41){
                card5value = 11;
                card5suit = 2;
                cardname5 = "Jack of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 42){
                card5value = 11;
                card5suit = 1;
                cardname5 = "Jack of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 43){
                card5value = 11;
                card5suit = 4;
                cardname5 = "Jack of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 44){
                card5value = 11;
                card5suit = 3;
                cardname5 = "Jack of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 45){
                card5value = 12;
                card5suit = 2;
                cardname5 = "Queen of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 46) {
                card5value = 12;
                card5suit = 1;
                cardname5 = "Queen of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 47){
                card5value = 12;
                card5suit = 4;
                cardname5 = "Queen of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 48){
                card5value = 12;
                card5suit = 3;
                cardname5 = "Queen of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 49){
                card5value = 13;
                card5suit = 2;
                cardname5 = "King of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 50){
                card5value = 13;
                card5suit = 1;
                cardname5 = "King of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 51){
                card5value = 13;
                card5suit = 4;
                cardname5 = "King of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 52){
                card5value = 13;
                card5suit = 3;
                cardname5 = "King of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            
        }
        else if(choice2 == 0){
            
        }
        cout << " " << endl;
        cout << "Dealer- last time, choose the number (1-5) of the cards you want to redraw. Enter 0 to skip." << endl;
        cin.clear();
        cin >> choice2;
        if(choice2 == 1){
            card1 = (rand() %52) + 1;
            if (card1 == 1) {
                cardname1 = "Ace of Hearts";
                card1value = 1;
                card1suit = 1;
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 2){
                cardname1 = "Ace of Clubs";
                card1value = 1;
                card1suit = 4;
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 3){
                cardname1 = "Ace of Diamonds";
                card1value = 1;
                card1suit = 3;
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 4){
                card1value = 1;
                cardname1 = "Ace of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 5){
                card1value = 2;
                card1suit = 1;
                cardname1 = "Two of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 6){
                card1value = 2;
                card1suit = 4;
                cardname1 = "Two of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 7){
                card1value = 2;
                card1suit = 3;
                cardname1 = "Two of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 8){
                card1value = 2;
                cardname1 = "Two of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 9) {
                card1value = 3;
                card1suit = 1;
                cardname1 = "Three of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 10){
                card1value = 3;
                card1suit = 4;
                cardname1 = "Three of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 11){
                card1value = 3;
                card1suit = 3;
                cardname1 = "Three of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 12){
                card1value = 3;
                cardname1 = "Three of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 13){
                card1value = 4;
                card1suit = 1;
                cardname1 = "Four of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 14){
                card1value = 4;
                card1suit = 4;
                cardname1 = "Four of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 15){
                card1value = 4;
                card1suit = 3;
                cardname1 = "Four of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 16){
                card1value = 4;
                cardname1 = "Four of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 17) {
                card1value = 5;
                card1suit = 1;
                cardname1 = "Five of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 18){
                card1value = 5;
                card1suit = 4;
                cardname1 = "Five of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 19){
                card1value = 5;
                card1suit = 3;
                cardname1 = "Five of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 20){
                card1value = 5;
                cardname1 = "Five of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 21){
                card1value = 6;
                card1suit = 1;
                cardname1 = "Six of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 22){
                card1value = 6;
                card1suit = 4;
                cardname1 = "Six of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 23){
                card1value = 6;
                card1suit = 3;
                cardname1 = "Six of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 24){
                card1value = 6;
                cardname1 = "Six of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 25) {
                card1value = 7;
                card1suit = 1;
                cardname1 = "Seven of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 26){
                card1value = 7;
                card1suit = 4;
                cardname1 = "Seven of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 27){
                card1value = 7;
                card1suit = 3;
                cardname1 = "Seven of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 28){
                card1value = 7;
                cardname1 = "Seven of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 29){
                card1value = 8;
                card1suit = 1;
                cardname1 = "Eight of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 30){
                card1value = 8;
                card1suit = 4;
                cardname1 = "Eight of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 31){
                card1value = 8;
                card1suit = 3;
                cardname1 = "Eight of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 32){
                card1value = 8;
                cardname1 = "Eight of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 33){
                card1value = 9;
                cardname1 = "Nine of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 34){
                card1value = 9;
                card1suit = 1;
                cardname1 = "Nine of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 35){
                card1value = 9;
                card1suit = 4;
                cardname1 = "Nine of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 36){
                card1value = 9;
                card1suit = 3;
                cardname1 = "Nine of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 37){
                card1value = 10;
                cardname1 = "Ten of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 38) {
                card1value = 10;
                card1suit = 1;
                cardname1 = "Ten of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 39){
                card1value = 10;
                card1suit = 4;
                cardname1 = "Ten of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 40){
                card1value = 10;
                card1suit = 3;
                cardname1 = "Ten of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 41){
                card1value = 11;
                cardname1 = "Jack of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 42){
                card1value = 11;
                card1suit = 1;
                cardname1 = "Jack of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 43){
                card1value = 11;
                card1suit = 4;
                cardname1 = "Jack of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 44){
                card1value = 11;
                card1suit = 3;
                cardname1 = "Jack of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 45){
                card1value = 12;
                cardname1 = "Queen of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 46) {
                card1value = 12;
                card1suit = 1;
                cardname1 = "Queen of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 47){
                card1value = 12;
                card1suit = 4;
                cardname1 = "Queen of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 48){
                card1value = 12;
                card1suit = 3;
                cardname1 = "Queen of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 49){
                card1value = 13;
                cardname1 = "King of Spades";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 50){
                card1value = 13;
                card1suit = 1;
                cardname1 = "King of Hearts";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 51){
                card1value = 13;
                card1suit = 4;
                cardname1 = "King of Clubs";
                cout << "1. " << cardname1 << endl;
            }
            else if (card1 == 52){
                card1value = 13;
                card1suit = 3;
                cardname1 = "King of Diamonds";
                cout << "1. " << cardname1 << endl;
            }
        }
        else if(choice2 == 2){
            card2 = (rand() %52) + 1;
            if (card2 == 1) {
                card2value = 1;
                card2suit = 1;
                cardname2 = "Ace of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 2){
                card2value = 1;
                card2suit = 4;
                cardname2 = "Ace of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 3){
                card2value = 1;
                card2suit = 3;
                cardname2 = "Ace of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 4){
                card2value = 1;
                card2suit = 2;
                cardname2 = "Ace of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 5){
                card2value = 2;
                card2suit = 1;
                cardname2 = "Two of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 6){
                card2value = 2;
                card2suit = 4;
                cardname2 = "Two of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 7){
                card2value = 2;
                card2suit = 3;
                cardname2 = "Two of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 8){
                card2value = 2;
                card2suit = 2;
                cardname2 = "Two of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 9) {
                card2value = 3;
                card2suit = 1;
                cardname2 = "Three of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 10){
                card2value = 3;
                card2suit = 4;
                cardname2 = "Three of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 11){
                card2value = 3;
                card2suit = 3;
                cardname2 = "Three of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 12){
                card2value = 3;
                card2suit = 2;
                cardname2 = "Three of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 13){
                card2value = 4;
                card2suit = 1;
                cardname2 = "Four of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 14){
                card2value = 4;
                card2suit = 4;
                cardname2 = "Four of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 15){
                card2value = 4;
                card2suit = 3;
                cardname2 = "Four of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 16){
                card2value = 4;
                card2suit = 2;
                cardname2 = "Four of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 17) {
                card2value = 5;
                card2suit = 1;
                cardname2 = "Five of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 18){
                card2value = 5;
                card2suit = 4;
                cardname2 = "Five of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 19){
                card2value = 5;
                card2suit = 3;
                cardname2 = "Five of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 20){
                card2value = 5;
                card2suit = 2;
                cardname2 = "Five of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 21){
                card2value = 6;
                card2suit = 1;
                cardname2 = "Six of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 22){
                card2value = 6;
                card2suit = 4;
                cardname2 = "Six of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 23){
                card2value = 6;
                card2suit = 3;
                cardname2 = "Six of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 24){
                card2value = 6;
                card2suit = 2;
                cardname2 = "Six of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 25) {
                card2value = 7;
                card2suit = 1;
                cardname2 = "Seven of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 26){
                card2value = 7;
                card2suit = 4;
                cardname2 = "Seven of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 27){
                card2value = 7;
                card2suit = 3;
                cardname2 = "Seven of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 28){
                card2value = 7;
                card2suit = 2;
                cardname2 = "Seven of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 29){
                card2value = 8;
                card2suit = 1;
                cardname2 = "Eight of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 30){
                card2value = 8;
                card2suit = 4;
                cardname2 = "Eight of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 31){
                card2value = 8;
                card2suit = 3;
                cardname2 = "Eight of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 32){
                card2value = 8;
                card2suit = 2;
                cardname2 = "Eight of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 33){
                card2value = 9;
                card2suit = 2;
                cardname2 = "Nine of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 34){
                card2value = 9;
                card2suit = 1;
                cardname2 = "Nine of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 35){
                card2value = 9;
                card2suit = 4;
                cardname2 = "Nine of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 36){
                card2value = 9;
                card2suit = 3;
                cardname2 = "Nine of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 37){
                card2value = 10;
                card2suit = 2;
                cardname2 = "Ten of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 38) {
                card2value = 10;
                card2suit = 1;
                cardname2 = "Ten of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 39){
                card2value = 10;
                card2suit = 4;
                cardname2 = "Ten of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 40){
                card2value = 10;
                card2suit = 3;
                cardname2 = "Ten of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 41){
                card2value = 11;
                card2suit = 2;
                cardname2 = "Jack of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 42){
                card2value = 11;
                card2suit = 1;
                cardname2 = "Jack of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 43){
                card2value = 11;
                card2suit = 4;
                cardname2 = "Jack of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 44){
                card2value = 11;
                card2suit = 3;
                cardname2 = "Jack of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 45){
                card2value = 12;
                card2suit = 2;
                cardname2 = "Queen of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 46) {
                card2value = 12;
                card2suit = 1;
                cardname2 = "Queen of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 47){
                card2value = 12;
                card2suit = 4;
                cardname2 = "Queen of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 48){
                card2value = 12;
                card2suit = 3;
                cardname2 = "Queen of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 49){
                card2value = 13;
                card2suit = 2;
                cardname2 = "King of Spades";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 50){
                card2value = 13;
                card2suit = 1;
                cardname2 = "King of Hearts";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 51){
                card2value = 13;
                card2suit = 4;
                cardname2 = "King of Clubs";
                cout << "2. " << cardname2 << endl;
            }
            else if (card2 == 52){
                card2value = 13;
                card2suit = 3;
                cardname2 = "King of Diamonds";
                cout << "2. " << cardname2 << endl;
            }
        }
        
        else if(choice2 ==3){
            card3 = (rand() %52) + 1;
            if (card3 == 1) {
                card3value = 1;
                card3suit = 1;
                cardname3 = "Ace of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 2){
                card3value = 1;
                card3suit = 4;
                cardname3 = "Ace of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 3){
                card3value = 1;
                card3suit = 3;
                cardname3 = "Ace of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 4){
                card3value = 1;
                card3suit = 2;
                cardname3 = "Ace of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 5){
                card3value = 2;
                card3suit = 1;
                cardname3 = "Two of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 6){
                card3value = 2;
                card3suit = 4;
                cardname3 = "Two of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 7){
                card3value = 2;
                card3suit = 3;
                cardname3 = "Two of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 8){
                card3value = 2;
                card3suit = 2;
                cardname3 = "Two of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 9) {
                card3value = 3;
                card3suit = 1;
                cardname3 = "Three of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 10){
                card3value = 3;
                card3suit = 4;
                cardname3 = "Three of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 11){
                card3value = 3;
                card3suit = 3;
                cardname3 = "Three of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 12){
                card3value = 3;
                card3suit = 2;
                cardname3 = "Three of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 13){
                card3value = 4;
                card3suit = 1;
                cardname3 = "Four of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 14){
                card3value = 4;
                card3suit = 4;
                cardname3 = "Four of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 15){
                card3value = 4;
                card3suit = 3;
                cardname3 = "Four of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 16){
                card3value = 4;
                card3suit = 2;
                cardname3 = "Four of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 17) {
                card3value = 5;
                card3suit = 1;
                cardname3 = "Five of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 18){
                card3value = 5;
                card3suit = 4;
                cardname3 = "Five of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 19){
                card3value = 5;
                card3suit = 3;
                cardname3 = "Five of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 10){
                card3value = 5;
                card3suit = 2;
                cardname3 = "Five of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 21){
                card3value = 6;
                card3suit = 1;
                cardname3 = "Six of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 22){
                card3value = 6;
                card3suit = 4;
                cardname3 = "Six of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 23){
                card3value = 6;
                card3suit = 3;
                cardname3 = "Six of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 24){
                cardname3 = "Six of Spades";
                card3value = 6;
                card3suit = 2;
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 25) {
                card3value = 7;
                card3suit = 1;
                cardname3 = "Seven of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 26){
                card3value = 7;
                card3suit = 4;
                cardname3 = "Seven of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 27){
                card3value = 7;
                card3suit = 3;
                cardname3 = "Seven of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 28){
                card3value = 7;
                card3suit = 2;
                cardname3 = "Seven of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 29){
                card3value = 8;
                card3suit = 1;
                cardname3 = "Eight of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 30){
                card3value = 8;
                card3suit = 4;
                cardname3 = "Eight of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 31){
                card3value = 8;
                card3suit = 3;
                cardname3 = "Eight of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 32){
                card3value = 8;
                card3suit = 2;
                cardname3 = "Eight of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 33){
                card3value = 9;
                card3suit = 2;
                cardname3 = "Nine of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 34){
                card3value = 9;
                card3suit = 1;
                cardname3 = "Nine of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 35){
                card3value = 9;
                card3suit = 4;
                cardname3 = "Nine of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 36){
                card3value = 9;
                card3suit = 3;
                cardname3 = "Nine of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 37){
                card3value = 10;
                card3suit = 2;
                cardname3 = "Ten of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 38) {
                card3value = 10;
                card3suit = 1;
                cardname3 = "Ten of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 39){
                card3value = 10;
                card3suit = 4;
                cardname3 = "Ten of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 40){
                card3value = 10;
                card3suit = 3;
                cardname3 = "Ten of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 41){
                card3value = 11;
                card3suit = 2;
                cardname3 = "Jack of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 42){
                card3value = 11;
                card3suit = 1;
                cardname3 = "Jack of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 43){
                card3value = 11;
                card3suit = 4;
                cardname3 = "Jack of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 44){
                card3value = 11;
                card3suit = 3;
                cardname3 = "Jack of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 45){
                card3value = 12;
                card3suit = 2;
                cardname3 = "Queen of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 46) {
                card3value = 12;
                card3suit = 1;
                cardname3 = "Queen of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 47){
                card3value = 12;
                card3suit = 4;
                cardname3 = "Queen of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 48){
                card3value = 12;
                card3suit = 3;
                cardname3 = "Queen of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 49){
                card3value = 13;
                card3suit = 2;
                cardname3 = "King of Spades";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 50){
                card3value = 13;
                card3suit = 1;
                cardname3 = "King of Hearts";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 51){
                card3value = 13;
                card3suit = 4;
                cardname3 = "King of Clubs";
                cout << "3. " << cardname3 << endl;
            }
            else if (card3 == 52){
                card3value = 13;
                card3suit = 3;
                cardname3 = "King of Diamonds";
                cout << "3. " << cardname3 << endl;
            }
        }
        else if(choice2 == 4){
            card4 = (rand() %52) + 1;
            if (card4 == 1) {
                card4value = 1;
                card4suit = 1;
                cardname4 = "Ace of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 2){
                card4value = 1;
                card4suit = 4;
                cardname4 = "Ace of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 3){
                card4value = 1;
                card4suit = 3;
                cardname4 = "Ace of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 4){
                card4value = 1;
                card4suit = 2;
                cardname4 = "Ace of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 5){
                card4value = 2;
                card4suit = 1;
                cardname4 = "Two of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 6){
                card4value = 2;
                card4suit = 4;
                cardname4 = "Two of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 7){
                card4value = 2;
                card4suit = 3;
                cardname4 = "Two of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 8){
                card4value = 2;
                card4suit = 2;
                cardname4 = "Two of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 9) {
                card4value = 3;
                card4suit = 1;
                cardname4 = "Three of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 10){
                card4value = 3;
                card4suit = 4;
                cardname4 = "Three of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 11){
                card4value = 3;
                card4suit = 3;
                cardname4 = "Three of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 12){
                card4value = 3;
                card4suit = 2;
                cardname4 = "Three of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 13){
                card4value = 4;
                card4suit = 1;
                cardname4 = "Four of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 14){
                card4value = 4;
                card4suit = 4;
                cardname4 = "Four of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 15){
                card4value = 4;
                card4suit = 3;
                cardname4 = "Four of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 16){
                card4value = 4;
                card4suit = 2;
                cardname4 = "Four of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 17) {
                card4value = 5;
                card4suit = 1;
                cardname4 = "Five of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 18){
                card4value = 5;
                card4suit = 4;
                cardname4 = "Five of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 19){
                card4value = 5;
                card4suit = 3;
                cardname4 = "Five of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 10){
                card4value = 5;
                card4suit = 2;
                cardname4 = "Five of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 21){
                card4value = 6;
                card4suit = 1;
                cardname4 = "Six of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 22){
                card4value = 6;
                card4suit = 4;
                cardname4 = "Six of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 23){
                card4value = 6;
                card4suit = 3;
                cardname4 = "Six of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 24){
                card4value = 6;
                card4suit = 2;
                cardname4 = "Six of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 25) {
                card4value = 7;
                card4suit = 1;
                cardname4 = "Seven of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 26){
                card4value = 7;
                card4suit = 4;
                cardname4 = "Seven of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 27){
                card4value = 7;
                card4suit = 3;
                cardname4 = "Seven of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 28){
                card4value = 7;
                card4suit = 2;
                cardname4 = "Seven of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 29){
                card4value = 8;
                card4suit = 1;
                cardname4 = "Eight of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 30){
                card4value = 8;
                card4suit = 4;
                cardname4 = "Eight of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 31){
                card4value = 8;
                card4suit = 3;
                cardname4 = "Eight of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 32){
                card4value = 8;
                card4suit = 2;
                cardname4 = "Eight of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 33){
                card4value = 9;
                card4suit = 2;
                cardname4 = "Nine of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 34){
                card4value = 9;
                card4suit = 1;
                cardname4 = "Nine of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 35){
                card4value = 9;
                card4suit = 4;
                cardname4 = "Nine of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 36){
                card4value = 9;
                card4suit = 3;
                cardname4 = "Nine of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 37){
                card4value = 10;
                card4suit = 2;
                cardname4 = "Ten of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 38) {
                card4value = 10;
                card4suit = 1;
                cardname4 = "Ten of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 39){
                card4value = 10;
                card4suit = 4;
                cardname4 = "Ten of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 40){
                card4value = 10;
                card4suit = 3;
                cardname4 = "Ten of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 41){
                card4value = 11;
                card4suit = 2;
                cardname4 = "Jack of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 42){
                card4value = 11;
                card4suit = 1;
                cardname4 = "Jack of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 43){
                card4value = 11;
                card4suit = 4;
                cardname4 = "Jack of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 44){
                card4value = 11;
                card4suit = 3;
                cardname4 = "Jack of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 45){
                card4value = 12;
                card4suit = 2;
                cardname4 = "Queen of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 46) {
                card4value = 12;
                card4suit = 1;
                cardname4 = "Queen of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 47){
                card4value = 12;
                card4suit = 4;
                cardname4 = "Queen of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 48){
                card4value = 12;
                card4suit = 3;
                cardname4 = "Queen of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 49){
                card4value = 13;
                card4suit = 2;
                cardname4 = "King of Spades";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 50){
                card4value = 13;
                card4suit = 1;
                cardname4 = "King of Hearts";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 51){
                card4value = 13;
                card4suit = 4;
                cardname4 = "King of Clubs";
                cout << "4. " << cardname4 << endl;
            }
            else if (card4 == 52){
                card4value = 13;
                card4suit = 3;
                cardname4 = "King of Diamonds";
                cout << "4. " << cardname4 << endl;
            }
        }
        else if(choice2 == 5){
            card5 = (rand() %52) + 1;
            if (card5 == 1) {
                card5value = 1;
                card5suit = 1;
                cardname5 = "Ace of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 2){
                card5value = 1;
                card5suit = 4;
                cardname5 = "Ace of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 3){
                card5value = 1;
                card5suit = 3;
                cardname5 = "Ace of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 4){
                card5value = 1;
                card5suit = 2;
                cardname5 = "Ace of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 5){
                card5value = 2;
                card5suit = 1;
                cardname5 = "Two of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 6){
                card5value = 2;
                card5suit = 4;
                cardname5 = "Two of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 7){
                card5value = 2;
                card5suit = 3;
                cardname5 = "Two of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 8){
                card5value = 2;
                card5suit = 2;
                cardname5 = "Two of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 9) {
                card5value = 3;
                card5suit = 1;
                cardname5 = "Three of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 10){
                card5value = 3;
                card5suit = 4;
                cardname5 = "Three of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 11){
                card5value = 3;
                card5suit = 3;
                cardname5 = "Three of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 12){
                card5value = 3;
                card5suit = 2;
                cardname5 = "Three of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 13){
                card5value = 4;
                card5suit = 1;
                cardname5 = "Four of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 14){
                card5value = 4;
                card5suit = 4;
                cardname5 = "Four of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 15){
                card5value = 4;
                card5suit = 3;
                cardname5 = "Four of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 16){
                card5value = 4;
                card5suit = 2;
                cardname5 = "Four of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 17) {
                card5value = 5;
                card5suit = 1;
                cardname5 = "Five of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 18){
                card5value = 5;
                card5suit = 4;
                cardname5 = "Five of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 19){
                card5value = 5;
                card5suit = 3;
                cardname5 = "Five of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 10){
                card5value = 5;
                card5suit = 2;
                cardname5 = "Five of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 21){
                card5value = 6;
                card5suit = 1;
                cardname5 = "Six of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 22){
                card5value = 6;
                card5suit = 4;
                cardname5 = "Six of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 23){
                card5value = 6;
                card5suit = 3;
                cardname5 = "Six of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 24){
                card5value = 6;
                card5suit = 2;
                cardname5 = "Six of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 25) {
                card5value = 7;
                card5suit = 1;
                cardname5 = "Seven of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 26){
                card5value = 7;
                card5suit = 4;
                cardname5 = "Seven of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 27){
                card5value = 7;
                card5suit = 3;
                cardname5 = "Seven of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 28){
                card5value = 7;
                card5suit = 2;
                cardname5 = "Seven of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 29){
                card5value = 8;
                card5suit = 1;
                cardname5 = "Eight of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 30){
                card5value = 8;
                card5suit = 4;
                cardname5 = "Eight of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 31){
                card5value = 8;
                card5suit = 3;
                cardname5 = "Eight of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 32){
                card5value = 8;
                card5suit = 2;
                cardname5 = "Eight of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 33){
                card5value = 9;
                card5suit = 2;
                cardname5 = "Nine of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 34){
                card5value = 9;
                card5suit = 1;
                cardname5 = "Nine of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 35){
                card5value = 9;
                card5suit = 4;
                cardname5 = "Nine of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 36){
                card5value = 9;
                card5suit = 3;
                cardname5 = "Nine of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 37){
                card5value = 10;
                card5suit = 2;
                cardname5 = "Ten of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 38) {
                card5value = 10;
                card5suit = 1;
                cardname5 = "Ten of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 39){
                card5value = 10;
                card5suit = 4;
                cardname5 = "Ten of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 40){
                card5value = 10;
                card5suit = 3;
                cardname5 = "Ten of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 41){
                card5value = 11;
                card5suit = 2;
                cardname5 = "Jack of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 42){
                card5value = 11;
                card5suit = 1;
                cardname5 = "Jack of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 43){
                card5value = 11;
                card5suit = 4;
                cardname5 = "Jack of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 44){
                card5value = 11;
                card5suit = 3;
                cardname5 = "Jack of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 45){
                card5value = 12;
                card5suit = 2;
                cardname5 = "Queen of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 46) {
                card5value = 12;
                card5suit = 1;
                cardname5 = "Queen of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 47){
                card5value = 12;
                card5suit = 4;
                cardname5 = "Queen of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 48){
                card5value = 12;
                card5suit = 3;
                cardname5 = "Queen of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 49){
                card5value = 13;
                card5suit = 2;
                cardname5 = "King of Spades";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 50){
                card5value = 13;
                card5suit = 1;
                cardname5 = "King of Hearts";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 51){
                card5value = 13;
                card5suit = 4;
                cardname5 = "King of Clubs";
                cout << "5. " << cardname5 << endl;
            }
            else if (card5 == 52){
                card5value = 13;
                card5suit = 3;
                cardname5 = "King of Diamonds";
                cout << "5. " << cardname5 << endl;
            }
            
        }
        else if(choice2 == 0){
            
        }
        int dscore = 0, rscore = 0;
        cout << " " << endl;
        //reevaluates hand value
        if (card1value == card2value || card1value == card3value || card1value == card4value || card1value == card5value || card2value == card3value || card2value == card4value || card2value == card5value || card3value == card4value || card3value == card5value || card4value == card5value) {
            if (card1value == card2value == card3value || card1value == card2value == card4value || card1value == card2value == card5value || card1value == card3value == card4value || card1value == card3value == card5value || card1value == card4value == card5value || card2value == card3value == card4value || card2value == card3value == card5value || card3value == card4value == card5value) {
                if (card1value == card2value == card3value == card4value || card1value == card2value == card3value == card5value || card1value == card3value == card4value ==card5value || card1value == card2value == card4value == card5value || card2value == card3value == card4value == card5value) {
                    cout << "Congratulations, 4 of a kind" << endl;
                    rscore = 8;
                    
                }
                else {
                    if ((card1value == card2value == card3value && card4value == card5value) || (card1value == card2value == card4value && card3value == card5value) || (card1value == card2value == card5value && card3value == card4value) || (card1value == card3value == card4value && card2value == card5value) || (card1value == card3value == card5value && card2value == card4value) || (card1value == card4value == card5value && card2value == card3value) || (card2value == card3value == card4value && card1value == card5value) || (card2value == card3value == card5value && card1value == card4value) || (card3value == card4value == card5value && card1value == card2value)) {
                        cout << "Congratulations, full house!" << endl;
                        rscore = 7;
                    }
                    else{
                        cout << "Congratulations, 3 of a kind" << endl;
                        rscore = 3;
                    }}
            }
            else{
                cout << "You have a pair" << endl;
                rscore = 2;
            }
        }
        else if (card1suit == card2suit == card3suit == card4suit == card5suit) {
            if (card1value == 13 || card2value == 13 || card3value == 13 || card4value == 13 || card5value == 13){
                if (card1value == 12 || card2value == 12 || card3value == 12 || card4value == 12 || card5value == 12) {
                    if (card1value == 11 || card2value == 11 || card3value == 11 || card4value == 11 || card5value == 11) {
                        if (card1value == 10 || card2value == 10 || card3value == 10 || card4value == 10 || card5value == 10) {
                            if (card1value == 1 || card2value == 1 || card3value == 1 || card4value == 1 || card5value == 1) {
                                cout << "CONGRATULATIONS, ROYAL FLUSH!!!" << endl;
                                rscore = 10;
                            }
                        }
                    }
                }
            }
            else {
                cout << "Congratulations, Flush!" << endl;
                rscore = 6;
            }}
        else if (hand[0] == (hand[1] - 1) && hand[1] == (hand[2] - 1) && hand[2] == (hand[3] - 1) && hand[3] == (hand[4] -1)) {
            if(card1suit == card2suit == card3suit == card4suit == card5suit){
                cout << "Congratulations, Straight Flush!" << endl;
                rscore = 9;
            }
            else {
                cout << "Congratulations, Straight!" << endl;
                rscore = 5;
            }
        }
        else {
            cout << "You have a high card" << endl;
            rscore = 1;
        }
        cout << " " << endl;
        cout << "Dealer- Now lets compare cards, here's mine!" << endl;
        
        
        //determining dealers hand
        if (dcard6 == 1) {
            dcardname6 = "Ace of Hearts";
            dcard6value = 1;
            dcard6suit = 1;
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 2){
            dcardname6 = "Ace of Clubs";
            dcard6value = 1;
            dcard6suit = 4;
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 3){
            dcardname6 = "Ace of Diamonds";
            dcard6value = 1;
            dcard6suit = 3;
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 4){
            dcard6value = 1;
            dcardname6 = "Ace of Spades";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 5){
            dcard6value = 2;
            dcard6suit = 1;
            dcardname6 = "Two of Hearts";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 6){
            dcard6value = 2;
            dcard6suit = 4;
            dcardname6 = "Two of Clubs";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 7){
            dcard6value = 2;
            dcard6suit = 3;
            dcardname6 = "Two of Diamonds";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 8){
            dcard6value = 2;
            dcardname6 = "Two of Spades";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 9) {
            dcard6value = 3;
            dcard6suit = 1;
            dcardname6 = "Three of Hearts";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 10){
            dcard6value = 3;
            dcard6suit = 4;
            dcardname6 = "Three of Clubs";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 11){
            dcard6value = 3;
            dcard6suit = 3;
            dcardname6 = "Three of Diamonds";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 12){
            dcard6value = 3;
            dcardname6 = "Three of Spades";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 13){
            dcard6value = 4;
            dcard6suit = 1;
            dcardname6 = "Four of Hearts";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 14){
            dcard6value = 4;
            dcard6suit = 4;
            dcardname6 = "Four of Clubs";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 15){
            dcard6value = 4;
            dcard6suit = 3;
            dcardname6 = "Four of Diamonds";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 16){
            dcard6value = 4;
            dcardname6 = "Four of Spades";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 17) {
            dcard6value = 5;
            dcard6suit = 1;
            dcardname6 = "Five of Hearts";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 18){
            dcard6value = 5;
            dcard6suit = 4;
            dcardname6 = "Five of Clubs";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 19){
            dcard6value = 5;
            dcard6suit = 3;
            dcardname6 = "Five of Diamonds";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 20){
            dcard6value = 5;
            dcardname6 = "Five of Spades";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 21){
            dcard6value = 6;
            dcard6suit = 1;
            dcardname6 = "Six of Hearts";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 22){
            dcard6value = 6;
            dcard6suit = 4;
            dcardname6 = "Six of Clubs";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 23){
            dcard6value = 6;
            dcard6suit = 3;
            dcardname6 = "Six of Diamonds";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 24){
            dcard6value = 6;
            dcardname6 = "Six of Spades";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 25) {
            dcard6value = 7;
            dcard6suit = 1;
            dcardname6 = "Seven of Hearts";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 26){
            dcard6value = 7;
            dcard6suit = 4;
            dcardname6 = "Seven of Clubs";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 27){
            dcard6value = 7;
            dcard6suit = 3;
            dcardname6 = "Seven of Diamonds";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 28){
            dcard6value = 7;
            dcardname6 = "Seven of Spades";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 29){
            dcard6value = 8;
            dcard6suit = 1;
            dcardname6 = "Eight of Hearts";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 30){
            dcard6value = 8;
            dcard6suit = 4;
            dcardname6 = "Eight of Clubs";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 31){
            dcard6value = 8;
            dcard6suit = 3;
            dcardname6 = "Eight of Diamonds";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 32){
            dcard6value = 8;
            dcardname6 = "Eight of Spades";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 33){
            dcard6value = 9;
            dcardname6 = "Nine of Spades";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 34){
            dcard6value = 9;
            dcard6suit = 1;
            dcardname6 = "Nine of Hearts";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 35){
            dcard6value = 9;
            dcard6suit = 4;
            dcardname6 = "Nine of Clubs";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 36){
            dcard6value = 9;
            dcard6suit = 3;
            dcardname6 = "Nine of Diamonds";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 37){
            dcard6value = 10;
            dcardname6 = "Ten of Spades";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 38) {
            dcard6value = 10;
            dcard6suit = 1;
            dcardname6 = "Ten of Hearts";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 39){
            dcard6value = 10;
            dcard6suit = 4;
            dcardname6 = "Ten of Clubs";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 40){
            dcard6value = 10;
            dcard6suit = 3;
            dcardname6 = "Ten of Diamonds";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 41){
            dcard6value = 11;
            dcardname6 = "Jack of Spades";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 42){
            dcard6value = 11;
            dcard6suit = 1;
            dcardname6 = "Jack of Hearts";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 43){
            dcard6value = 11;
            dcard6suit = 4;
            dcardname6 = "Jack of Clubs";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 44){
            dcard6value = 11;
            dcard6suit = 3;
            dcardname6 = "Jack of Diamonds";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 45){
            dcard6value = 12;
            dcardname6 = "Queen of Spades";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 46) {
            dcard6value = 12;
            dcard6suit = 1;
            dcardname6 = "Queen of Hearts";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 47){
            dcard6value = 12;
            dcard6suit = 4;
            dcardname6 = "Queen of Clubs";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 48){
            dcard6value = 12;
            dcard6suit = 3;
            dcardname6 = "Queen of Diamonds";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 49){
            dcard6value = 13;
            dcardname6 = "King of Spades";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 50){
            dcard6value = 13;
            dcard6suit = 1;
            dcardname6 = "King of Hearts";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 51){
            dcard6value = 13;
            dcard6suit = 4;
            dcardname6 = "King of Clubs";
            cout << "1. " << dcardname6 << endl;
        }
        else if (dcard6 == 52){
            dcard6value = 13;
            dcard6suit = 3;
            dcardname6 = "King of Diamonds";
            cout << "1. " << dcardname6 << endl;
        }
        
        //determining dcard7
        if (dcard7 == 1) {
            dcard7value = 1;
            dcard7suit = 1;
            dcardname7 = "Ace of Hearts";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 2){
            dcard7value = 1;
            dcard7suit = 4;
            dcardname7 = "Ace of Clubs";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 3){
            dcard7value = 1;
            dcard7suit = 3;
            dcardname7 = "Ace of Diamonds";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 4){
            dcard7value = 1;
            dcard7suit = 2;
            dcardname7 = "Ace of Spades";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 5){
            dcard7value = 2;
            dcard7suit = 1;
            dcardname7 = "Two of Hearts";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 6){
            dcard7value = 2;
            dcard7suit = 4;
            dcardname7 = "Two of Clubs";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 7){
            dcard7value = 2;
            dcard7suit = 3;
            dcardname7 = "Two of Diamonds";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 8){
            dcard7value = 2;
            dcard7suit = 2;
            dcardname7 = "Two of Spades";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 9) {
            dcard7value = 3;
            dcard7suit = 1;
            dcardname7 = "Three of Hearts";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 10){
            dcard7value = 3;
            dcard7suit = 4;
            dcardname7 = "Three of Clubs";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 11){
            dcard7value = 3;
            dcard7suit = 3;
            dcardname7 = "Three of Diamonds";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 12){
            dcard7value = 3;
            dcard7suit = 2;
            dcardname7 = "Three of Spades";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 13){
            dcard7value = 4;
            dcard7suit = 1;
            dcardname7 = "Four of Hearts";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 14){
            dcard7value = 4;
            dcard7suit = 4;
            dcardname7 = "Four of Clubs";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 15){
            dcard7value = 4;
            dcard7suit = 3;
            dcardname7 = "Four of Diamonds";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 16){
            dcard7value = 4;
            dcard7suit = 2;
            dcardname7 = "Four of Spades";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 17) {
            dcard7value = 5;
            dcard7suit = 1;
            dcardname7 = "Five of Hearts";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 18){
            dcard7value = 5;
            dcard7suit = 4;
            dcardname7 = "Five of Clubs";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 19){
            dcard7value = 5;
            dcard7suit = 3;
            dcardname7 = "Five of Diamonds";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 20){
            dcard7value = 5;
            dcard7suit = 2;
            dcardname7 = "Five of Spades";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 21){
            dcard7value = 6;
            dcard7suit = 1;
            dcardname7 = "Six of Hearts";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 22){
            dcard7value = 6;
            dcard7suit = 4;
            dcardname7 = "Six of Clubs";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 23){
            dcard7value = 6;
            dcard7suit = 3;
            dcardname7 = "Six of Diamonds";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 24){
            dcard7value = 6;
            dcard7suit = 2;
            dcardname7 = "Six of Spades";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 25) {
            dcard7value = 7;
            dcard7suit = 1;
            dcardname7 = "Seven of Hearts";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 26){
            dcard7value = 7;
            dcard7suit = 4;
            dcardname7 = "Seven of Clubs";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 27){
            dcard7value = 7;
            dcard7suit = 3;
            dcardname7 = "Seven of Diamonds";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 28){
            dcard7value = 7;
            dcard7suit = 2;
            dcardname7 = "Seven of Spades";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 29){
            dcard7value = 8;
            dcard7suit = 1;
            dcardname7 = "Eight of Hearts";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 30){
            dcard7value = 8;
            dcard7suit = 4;
            dcardname7 = "Eight of Clubs";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 31){
            dcard7value = 8;
            dcard7suit = 3;
            dcardname7 = "Eight of Diamonds";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 32){
            dcard7value = 8;
            dcard7suit = 2;
            dcardname7 = "Eight of Spades";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 33){
            dcard7value = 9;
            dcard7suit = 2;
            dcardname7 = "Nine of Spades";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 34){
            dcard7value = 9;
            dcard7suit = 1;
            dcardname7 = "Nine of Hearts";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 35){
            dcard7value = 9;
            dcard7suit = 4;
            dcardname7 = "Nine of Clubs";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 36){
            dcard7value = 9;
            dcard7suit = 3;
            dcardname7 = "Nine of Diamonds";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 37){
            dcard7value = 10;
            dcard7suit = 2;
            dcardname7 = "Ten of Spades";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 38) {
            dcard7value = 10;
            dcard7suit = 1;
            dcardname7 = "Ten of Hearts";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 39){
            dcard7value = 10;
            dcard7suit = 4;
            dcardname7 = "Ten of Clubs";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 40){
            dcard7value = 10;
            dcard7suit = 3;
            dcardname7 = "Ten of Diamonds";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 41){
            dcard7value = 11;
            dcard7suit = 2;
            dcardname7 = "Jack of Spades";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 42){
            dcard7value = 11;
            dcard7suit = 1;
            dcardname7 = "Jack of Hearts";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 43){
            dcard7value = 11;
            dcard7suit = 4;
            dcardname7 = "Jack of Clubs";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 44){
            dcard7value = 11;
            dcard7suit = 3;
            dcardname7 = "Jack of Diamonds";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 45){
            dcard7value = 12;
            dcard7suit = 2;
            dcardname7 = "Queen of Spades";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 46) {
            dcard7value = 12;
            dcard7suit = 1;
            dcardname7 = "Queen of Hearts";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 47){
            dcard7value = 12;
            dcard7suit = 4;
            dcardname7 = "Queen of Clubs";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 48){
            dcard7value = 12;
            dcard7suit = 3;
            dcardname7 = "Queen of Diamonds";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 49){
            dcard7value = 13;
            dcard7suit = 2;
            dcardname7 = "King of Spades";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 50){
            dcard7value = 13;
            dcard7suit = 1;
            dcardname7 = "King of Hearts";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 51){
            dcard7value = 13;
            dcard7suit = 4;
            dcardname7 = "King of Clubs";
            cout << "2. " << dcardname7 << endl;
        }
        else if (dcard7 == 52){
            dcard7value = 13;
            dcard7suit = 3;
            dcardname7 = "King of Diamonds";
            cout << "2. " << dcardname7 << endl;
        }
        
        //determining dcard8
        if (dcard8 == 1) {
            dcard8value = 1;
            dcard8suit = 1;
            dcardname8 = "Ace of Hearts";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 2){
            dcard8value = 1;
            dcard8suit = 4;
            dcardname8 = "Ace of Clubs";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 3){
            dcard8value = 1;
            dcard8suit = 3;
            dcardname8 = "Ace of Diamonds";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 4){
            dcard8value = 1;
            dcard8suit = 2;
            dcardname8 = "Ace of Spades";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 5){
            dcard8value = 2;
            dcard8suit = 1;
            dcardname8 = "Two of Hearts";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 6){
            dcard8value = 2;
            dcard8suit = 4;
            dcardname8 = "Two of Clubs";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 7){
            dcard8value = 2;
            dcard8suit = 3;
            dcardname8 = "Two of Diamonds";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 8){
            dcard8value = 2;
            dcard8suit = 2;
            dcardname8 = "Two of Spades";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 9) {
            dcard8value = 3;
            dcard8suit = 1;
            dcardname8 = "Three of Hearts";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 10){
            dcard8value = 3;
            dcard8suit = 4;
            dcardname8 = "Three of Clubs";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 11){
            dcard8value = 3;
            dcard8suit = 3;
            dcardname8 = "Three of Diamonds";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 12){
            dcard8value = 3;
            dcard8suit = 2;
            dcardname8 = "Three of Spades";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 13){
            dcard8value = 4;
            dcard8suit = 1;
            dcardname8 = "Four of Hearts";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 14){
            dcard8value = 4;
            dcard8suit = 4;
            dcardname8 = "Four of Clubs";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 15){
            dcard8value = 4;
            dcard8suit = 3;
            dcardname8 = "Four of Diamonds";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 16){
            dcard8value = 4;
            dcard8suit = 2;
            dcardname8 = "Four of Spades";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 17) {
            dcard8value = 5;
            dcard8suit = 1;
            dcardname8 = "Five of Hearts";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 18){
            dcard8value = 5;
            dcard8suit = 4;
            dcardname8 = "Five of Clubs";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 19){
            dcard8value = 5;
            dcard8suit = 3;
            dcardname8 = "Five of Diamonds";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 10){
            dcard8value = 5;
            dcard8suit = 2;
            dcardname8 = "Five of Spades";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 21){
            dcard8value = 6;
            dcard8suit = 1;
            dcardname8 = "Six of Hearts";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 22){
            dcard8value = 6;
            dcard8suit = 4;
            dcardname8 = "Six of Clubs";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 23){
            dcard8value = 6;
            dcard8suit = 3;
            dcardname8 = "Six of Diamonds";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 24){
            dcardname8 = "Six of Spades";
            dcard8value = 6;
            dcard8suit = 2;
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 25) {
            dcard8value = 7;
            dcard8suit = 1;
            dcardname8 = "Seven of Hearts";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 26){
            dcard8value = 7;
            dcard8suit = 4;
            dcardname8 = "Seven of Clubs";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 27){
            dcard8value = 7;
            dcard8suit = 3;
            dcardname8 = "Seven of Diamonds";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 28){
            dcard8value = 7;
            dcard8suit = 2;
            dcardname8 = "Seven of Spades";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 29){
            dcard8value = 8;
            dcard8suit = 1;
            dcardname8 = "Eight of Hearts";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 30){
            dcard8value = 8;
            dcard8suit = 4;
            dcardname8 = "Eight of Clubs";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 31){
            dcard8value = 8;
            dcard8suit = 3;
            dcardname8 = "Eight of Diamonds";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 32){
            dcard8value = 8;
            dcard8suit = 2;
            dcardname8 = "Eight of Spades";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 33){
            dcard8value = 9;
            dcard8suit = 2;
            dcardname8 = "Nine of Spades";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 34){
            dcard8value = 9;
            dcard8suit = 1;
            dcardname8 = "Nine of Hearts";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 35){
            dcard8value = 9;
            dcard8suit = 4;
            dcardname8 = "Nine of Clubs";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 36){
            dcard8value = 9;
            dcard8suit = 3;
            dcardname8 = "Nine of Diamonds";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 37){
            dcard8value = 10;
            dcard8suit = 2;
            dcardname8 = "Ten of Spades";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 38) {
            dcard8value = 10;
            dcard8suit = 1;
            dcardname8 = "Ten of Hearts";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 39){
            dcard8value = 10;
            dcard8suit = 4;
            dcardname8 = "Ten of Clubs";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 40){
            dcard8value = 10;
            dcard8suit = 3;
            dcardname8 = "Ten of Diamonds";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 41){
            dcard8value = 11;
            dcard8suit = 2;
            dcardname8 = "Jack of Spades";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 42){
            dcard8value = 11;
            dcard8suit = 1;
            dcardname8 = "Jack of Hearts";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 43){
            dcard8value = 11;
            dcard8suit = 4;
            dcardname8 = "Jack of Clubs";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 44){
            dcard8value = 11;
            dcard8suit = 3;
            dcardname8 = "Jack of Diamonds";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 45){
            dcard8value = 12;
            dcard8suit = 2;
            dcardname8 = "Queen of Spades";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 46) {
            dcard8value = 12;
            dcard8suit = 1;
            dcardname8 = "Queen of Hearts";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 47){
            dcard8value = 12;
            dcard8suit = 4;
            dcardname8 = "Queen of Clubs";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 48){
            dcard8value = 12;
            dcard8suit = 3;
            dcardname8 = "Queen of Diamonds";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 49){
            dcard8value = 13;
            dcard8suit = 2;
            dcardname8 = "King of Spades";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 50){
            dcard8value = 13;
            dcard8suit = 1;
            dcardname8 = "King of Hearts";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 51){
            dcard8value = 13;
            dcard8suit = 4;
            dcardname8 = "King of Clubs";
            cout << "3. " << dcardname8 << endl;
        }
        else if (dcard8 == 52){
            dcard8value = 13;
            dcard8suit = 3;
            dcardname8 = "King of Diamonds";
            cout << "3. " << dcardname8 << endl;
        }
        
        //determining dcard9
        if (dcard9 == 1) {
            dcard9value = 1;
            dcard9suit = 1;
            dcardname9 = "Ace of Hearts";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 2){
            dcard9value = 1;
            dcard9suit = 4;
            dcardname9 = "Ace of Clubs";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 3){
            dcard9value = 1;
            dcard9suit = 3;
            dcardname9 = "Ace of Diamonds";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 4){
            dcard9value = 1;
            dcard9suit = 2;
            dcardname9 = "Ace of Spades";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 5){
            dcard9value = 2;
            dcard9suit = 1;
            dcardname9 = "Two of Hearts";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 6){
            dcard9value = 2;
            dcard9suit = 4;
            dcardname9 = "Two of Clubs";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 7){
            dcard9value = 2;
            dcard9suit = 3;
            dcardname9 = "Two of Diamonds";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 8){
            dcard9value = 2;
            dcard9suit = 2;
            dcardname9 = "Two of Spades";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 9) {
            dcard9value = 3;
            dcard9suit = 1;
            dcardname9 = "Three of Hearts";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 10){
            dcard9value = 3;
            dcard9suit = 4;
            dcardname9 = "Three of Clubs";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 11){
            dcard9value = 3;
            dcard9suit = 3;
            dcardname9 = "Three of Diamonds";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 12){
            dcard9value = 3;
            dcard9suit = 2;
            dcardname9 = "Three of Spades";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 13){
            dcard9value = 4;
            dcard9suit = 1;
            dcardname9 = "Four of Hearts";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 14){
            dcard9value = 4;
            dcard9suit = 4;
            dcardname9 = "Four of Clubs";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 15){
            dcard9value = 4;
            dcard9suit = 3;
            dcardname9 = "Four of Diamonds";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 16){
            dcard9value = 4;
            dcard9suit = 2;
            dcardname9 = "Four of Spades";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 17) {
            dcard9value = 5;
            dcard9suit = 1;
            dcardname9 = "Five of Hearts";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 18){
            dcard9value = 5;
            dcard9suit = 4;
            dcardname9 = "Five of Clubs";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 19){
            dcard9value = 5;
            dcard9suit = 3;
            dcardname9 = "Five of Diamonds";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 10){
            dcard9value = 5;
            dcard9suit = 2;
            dcardname9 = "Five of Spades";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 21){
            dcard9value = 6;
            dcard9suit = 1;
            dcardname9 = "Six of Hearts";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 22){
            dcard9value = 6;
            dcard9suit = 4;
            dcardname9 = "Six of Clubs";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 23){
            dcard9value = 6;
            dcard9suit = 3;
            dcardname9 = "Six of Diamonds";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 24){
            dcard9value = 6;
            dcard9suit = 2;
            dcardname9 = "Six of Spades";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 25) {
            dcard9value = 7;
            dcard9suit = 1;
            dcardname9 = "Seven of Hearts";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 26){
            dcard9value = 7;
            dcard9suit = 4;
            dcardname9 = "Seven of Clubs";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 27){
            dcard9value = 7;
            dcard9suit = 3;
            dcardname9 = "Seven of Diamonds";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 28){
            dcard9value = 7;
            dcard9suit = 2;
            dcardname9 = "Seven of Spades";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 29){
            dcard9value = 8;
            dcard9suit = 1;
            dcardname9 = "Eight of Hearts";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 30){
            dcard9value = 8;
            dcard9suit = 4;
            dcardname9 = "Eight of Clubs";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 31){
            dcard9value = 8;
            dcard9suit = 3;
            dcardname9 = "Eight of Diamonds";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 32){
            dcard9value = 8;
            dcard9suit = 2;
            dcardname9 = "Eight of Spades";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 33){
            dcard9value = 9;
            dcard9suit = 2;
            dcardname9 = "Nine of Spades";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 34){
            dcard9value = 9;
            dcard9suit = 1;
            dcardname9 = "Nine of Hearts";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 35){
            dcard9value = 9;
            dcard9suit = 4;
            dcardname9 = "Nine of Clubs";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 36){
            dcard9value = 9;
            dcard9suit = 3;
            dcardname9 = "Nine of Diamonds";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 37){
            dcard9value = 10;
            dcard9suit = 2;
            dcardname9 = "Ten of Spades";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 38) {
            dcard9value = 10;
            dcard9suit = 1;
            dcardname9 = "Ten of Hearts";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 39){
            dcard9value = 10;
            dcard9suit = 4;
            dcardname9 = "Ten of Clubs";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 40){
            dcard9value = 10;
            dcard9suit = 3;
            dcardname9 = "Ten of Diamonds";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 41){
            dcard9value = 11;
            dcard9suit = 2;
            dcardname9 = "Jack of Spades";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 42){
            dcard9value = 11;
            dcard9suit = 1;
            dcardname9 = "Jack of Hearts";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 43){
            dcard9value = 11;
            dcard9suit = 4;
            dcardname9 = "Jack of Clubs";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 44){
            dcard9value = 11;
            dcard9suit = 3;
            dcardname9 = "Jack of Diamonds";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 45){
            dcard9value = 12;
            dcard9suit = 2;
            dcardname9 = "Queen of Spades";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 46) {
            dcard9value = 12;
            dcard9suit = 1;
            dcardname9 = "Queen of Hearts";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 47){
            dcard9value = 12;
            dcard9suit = 4;
            dcardname9 = "Queen of Clubs";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 48){
            dcard9value = 12;
            dcard9suit = 3;
            dcardname9 = "Queen of Diamonds";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 49){
            dcard9value = 13;
            dcard9suit = 2;
            dcardname9 = "King of Spades";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 50){
            dcard9value = 13;
            dcard9suit = 1;
            dcardname9 = "King of Hearts";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 51){
            dcard9value = 13;
            dcard9suit = 4;
            dcardname9 = "King of Clubs";
            cout << "4. " << dcardname9 << endl;
        }
        else if (dcard9 == 52){
            dcard9value = 13;
            dcard9suit = 3;
            dcardname9 = "King of Diamonds";
            cout << "4. " << dcardname9 << endl;
        }
        
        //determining dcard10
        if (dcard10 == 1) {
            dcard10value = 1;
            dcard10suit = 1;
            dcardname10 = "Ace of Hearts";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 2){
            dcard10value = 1;
            dcard10suit = 4;
            dcardname10 = "Ace of Clubs";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 3){
            dcard10value = 1;
            dcard10suit = 3;
            dcardname10 = "Ace of Diamonds";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 4){
            dcard10value = 1;
            dcard10suit = 2;
            dcardname10 = "Ace of Spades";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 5){
            dcard10value = 2;
            dcard10suit = 1;
            dcardname10 = "Two of Hearts";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 6){
            dcard10value = 2;
            dcard10suit = 4;
            dcardname10 = "Two of Clubs";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 7){
            dcard10value = 2;
            dcard10suit = 3;
            dcardname10 = "Two of Diamonds";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 8){
            dcard10value = 2;
            dcard10suit = 2;
            dcardname10 = "Two of Spades";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 9) {
            dcard10value = 3;
            dcard10suit = 1;
            dcardname10 = "Three of Hearts";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 10){
            dcard10value = 3;
            dcard10suit = 4;
            dcardname10 = "Three of Clubs";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 11){
            dcard10value = 3;
            dcard10suit = 3;
            dcardname10 = "Three of Diamonds";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 12){
            dcard10value = 3;
            dcard10suit = 2;
            dcardname10 = "Three of Spades";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 13){
            dcard10value = 4;
            dcard10suit = 1;
            dcardname10 = "Four of Hearts";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 14){
            dcard10value = 4;
            dcard10suit = 4;
            dcardname10 = "Four of Clubs";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 15){
            dcard10value = 4;
            dcard10suit = 3;
            dcardname10 = "Four of Diamonds";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 16){
            dcard10value = 4;
            dcard10suit = 2;
            dcardname10 = "Four of Spades";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 17) {
            dcard10value = 5;
            dcard10suit = 1;
            dcardname10 = "Five of Hearts";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 18){
            dcard10value = 5;
            dcard10suit = 4;
            dcardname10 = "Five of Clubs";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 19){
            dcard10value = 5;
            dcard10suit = 3;
            dcardname10 = "Five of Diamonds";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 10){
            dcard10value = 5;
            dcard10suit = 2;
            dcardname10 = "Five of Spades";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 21){
            dcard10value = 6;
            dcard10suit = 1;
            dcardname10 = "Six of Hearts";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 22){
            dcard10value = 6;
            dcard10suit = 4;
            dcardname10 = "Six of Clubs";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 23){
            dcard10value = 6;
            dcard10suit = 3;
            dcardname10 = "Six of Diamonds";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 24){
            dcard10value = 6;
            dcard10suit = 2;
            dcardname10 = "Six of Spades";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 25) {
            dcard10value = 7;
            dcard10suit = 1;
            dcardname10 = "Seven of Hearts";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 26){
            dcard10value = 7;
            dcard10suit = 4;
            dcardname10 = "Seven of Clubs";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 27){
            dcard10value = 7;
            dcard10suit = 3;
            dcardname10 = "Seven of Diamonds";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 28){
            dcard10value = 7;
            dcard10suit = 2;
            dcardname10 = "Seven of Spades";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 29){
            dcard10value = 8;
            dcard10suit = 1;
            dcardname10 = "Eight of Hearts";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 30){
            dcard10value = 8;
            dcard10suit = 4;
            dcardname10 = "Eight of Clubs";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 31){
            dcard10value = 8;
            dcard10suit = 3;
            dcardname10 = "Eight of Diamonds";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 32){
            dcard10value = 8;
            dcard10suit = 2;
            dcardname10 = "Eight of Spades";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 33){
            dcard10value = 9;
            dcard10suit = 2;
            dcardname10 = "Nine of Spades";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 34){
            dcard10value = 9;
            dcard10suit = 1;
            dcardname10 = "Nine of Hearts";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 35){
            dcard10value = 9;
            dcard10suit = 4;
            dcardname10 = "Nine of Clubs";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 36){
            dcard10value = 9;
            dcard10suit = 3;
            dcardname10 = "Nine of Diamonds";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 37){
            dcard10value = 10;
            dcard10suit = 2;
            dcardname10 = "Ten of Spades";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 38) {
            dcard10value = 10;
            dcard10suit = 1;
            dcardname10 = "Ten of Hearts";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 39){
            dcard10value = 10;
            dcard10suit = 4;
            dcardname10 = "Ten of Clubs";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 40){
            dcard10value = 10;
            dcard10suit = 3;
            dcardname10 = "Ten of Diamonds";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 41){
            dcard10value = 11;
            dcard10suit = 2;
            dcardname10 = "Jack of Spades";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 42){
            dcard10value = 11;
            dcard10suit = 1;
            dcardname10 = "Jack of Hearts";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 43){
            dcard10value = 11;
            dcard10suit = 4;
            dcardname10 = "Jack of Clubs";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 44){
            dcard10value = 11;
            dcard10suit = 3;
            dcardname10 = "Jack of Diamonds";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 45){
            dcard10value = 12;
            dcard10suit = 2;
            dcardname10 = "Queen of Spades";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 46) {
            dcard10value = 12;
            dcard10suit = 1;
            dcardname10 = "Queen of Hearts";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 47){
            dcard10value = 12;
            dcard10suit = 4;
            dcardname10 = "Queen of Clubs";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 48){
            dcard10value = 12;
            dcard10suit = 3;
            dcardname10 = "Queen of Diamonds";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 49){
            dcard10value = 13;
            dcard10suit = 2;
            dcardname10 = "King of Spades";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 50){
            dcard10value = 13;
            dcard10suit = 1;
            dcardname10 = "King of Hearts";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 51){
            dcard10value = 13;
            dcard10suit = 4;
            dcardname10 = "King of Clubs";
            cout << "5. " << dcardname10 << endl;
        }
        else if (dcard10 == 52){
            dcard10value = 13;
            dcard10suit = 3;
            dcardname10 = "King of Diamonds";
            cout << "5. " << dcardname10 << endl;
        }
        //determining dealer hand value
        int dhand[5] = { dcard6value, dcard7value, dcard8value, dcard9value, dcard10value };
        for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(dhand[i]>dhand[j])
                {
                    temp  = dhand[i];
                    dhand[i] = dhand[j];
                    dhand[j] = temp;
                }
            }
        }
        if (dcard6value == dcard7value || dcard6value == dcard8value || dcard6value == dcard9value || dcard6value == dcard10value || dcard7value == dcard8value || dcard7value == dcard9value || dcard7value == dcard10value || dcard8value == dcard9value || dcard8value == dcard10value || dcard9value == dcard10value) {
            if (dcard6value == dcard7value == dcard8value || dcard6value == dcard7value == dcard9value || dcard6value == dcard7value == dcard10value || dcard6value == dcard8value == dcard9value || dcard6value == dcard8value == dcard10value || dcard6value == dcard9value == dcard10value || dcard7value == dcard8value == dcard9value || dcard7value == dcard8value == dcard10value || dcard8value == dcard9value == dcard10value) {
                if (dcard6value == dcard7value == dcard8value == dcard9value || dcard6value == dcard7value == dcard8value == dcard10value || dcard6value == dcard8value == dcard9value ==dcard10value || dcard6value == dcard7value == dcard9value == dcard10value || dcard7value == dcard8value == dcard9value == dcard10value) {
                    cout << "I have 4 of a kind" << endl;
                    dscore = 8;
                }
                else {
                    if ((dcard6value == dcard7value == dcard8value && dcard9value == dcard10value) || (dcard6value == dcard7value == dcard9value && dcard8value == dcard10value) || (dcard6value == dcard7value == dcard10value && dcard8value == dcard9value) || (dcard6value == dcard8value == dcard9value && dcard7value == dcard10value) || (dcard6value == dcard8value == dcard10value && dcard7value == dcard9value) || (dcard6value == dcard9value == dcard10value && dcard7value == dcard8value) || (dcard7value == dcard8value == dcard9value && dcard6value == dcard10value) || (dcard7value == dcard8value == dcard10value && dcard6value == dcard9value) || (dcard8value == dcard9value == dcard10value && dcard6value == dcard7value)) {
                        cout << "I have a full house!" << endl;
                        dscore = 7;
                    }
                    else{
                        cout << "I have 3 of a kind" << endl;
                        dscore = 4;
                    }}
            }
            else{
                cout << "I have a pair" << endl;
                dscore = 2;
            }
        }
        else if (dcard6suit == dcard7suit == dcard8suit == dcard9suit == dcard10suit) {
            if (dcard6value == 13 || dcard7value == 13 || dcard8value == 13 || dcard9value == 13 || dcard10value == 13){
                if (dcard6value == 12 || dcard7value == 12 || dcard8value == 12 || dcard9value == 12 || dcard10value == 12) {
                    if (dcard6value == 11 || dcard7value == 11 || dcard8value == 11 || dcard9value == 11 || dcard10value == 11) {
                        if (dcard6value == 10 || dcard7value == 10 || dcard8value == 10 || dcard9value == 10 || dcard10value == 10) {
                            if (dcard6value == 1 || dcard7value == 1 || dcard8value == 1 || dcard9value == 1 || dcard10value == 1) {
                                cout << "ROYAL FLUSH!!!" << endl;
                                dscore = 10;
                            }
                        }
                    }
                }
            }
            else {
                cout << "Flush!" << endl;
                dscore = 6;
            }}
        else if (dhand[0] == (dhand[1] - 1) && dhand[1] == (dhand[2] - 1) && dhand[2] == (dhand[3] - 1) && dhand[3] == (dhand[4] -1)) {
            if(dcard6suit == dcard7suit == dcard8suit == dcard9suit == dcard10suit){
                cout << "Straight Flush!" << endl;
                dscore = 9;
            }
            else {
                cout << "Straight!" << endl;
                dscore = 5;
            }
        }
        else {
            cout << "I have a high card" << endl;
            dscore = 1;
        }
        
        //compare
        
        if(dscore > rscore){
            cout << " " << endl;
            cout << "you lost :(" << endl;
            score = score - 1;
            cout << "Your score is " << score << endl;
        }
        else if(dscore < rscore){
            cout << " " << endl;
            cout << "You won!" << endl;
            score = score + 1;
            cout << "Your score is " << score << endl;
        }
        else if(dscore == rscore) {
            cout << " " << endl;
            cout << "We tied!" << endl;
            cout << "Your score is " << score << endl;
        }
        
        
        
        
   }//end of 'play'
        
    //rules
    else if(choice1 == 2){
        cout << " " << endl;
        cout << "**********" << endl;
        cout << "The rules are simple" << endl;
        cout << "The dealer shuffles the deck, dealing you 5 cards" << endl;
        cout << "The dealer also gets 5 cards" << endl;
        cout << "Look at your cards" << endl;
        cout << "Exchange any 3 cards" << endl;
        cout << "If your hand is better than the dealers you win 1 point!" << endl;
        cout << "See if you can beat the odds!" << endl;
        cout << "**********" << endl;
        cout << " " << endl;
    }
    else if(choice1 == 3){
        cout << "Thanks for playing!" << endl;
    }
    }
    return 0;
}

