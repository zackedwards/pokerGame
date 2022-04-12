To Run:\
Download and execute poker.exe\
You can use ./executables/poker.exe to run in the command line\
Use ./executables/test.exe to run the test cases



Build Commands\
Main Application: g++ -o executables/poker.exe src/index.cpp include/card/card.cpp include/hand/hand.cpp include/player/player.cpp\
Test cases: g++ -o executables/test.exe tests/test.cpp include/card/card.cpp include/hand/hand.cpp include/player/player.cpp
