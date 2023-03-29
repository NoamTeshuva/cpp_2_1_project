#pragma once


#include "player.hpp"
namespace ariel{
class Game{

private:
Player player1;
Player player2;
public:
    Game(Player player1, Player player2); //constructor

void playTurn();
void printLastTurn();
void playAll();
void printWiner();
void printStats();
void printLog();

};
}



 