To Run:\
Download and execute poker.exe\
You can use ./executables/poker.exe to run in the command line\
Use ./executables/test.exe to run the test cases

Build Commands\
Main Application: g++ -o executables/poker.exe src/index.cpp include/card/card.cpp include/hand/hand.cpp include/player/player.cpp include/deck/deck.cpp\
Test case value hand detection: g++ -o executables/test.exe tests/test.cpp include/card/card.cpp include/hand/hand.cpp include/player/player.cpp include/deck/deck.cpp\
Test case deck: g++ -o executables/testDeck.exe tests/testDeck.cpp include/card/card.cpp include/hand/hand.cpp include/player/player.cpp include/deck/deck.cpp
