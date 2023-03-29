#include "game.hpp"
#include "player.hpp"

using namespace ariel;


Game :: Game (Player player1, Player player2 )
{
    this->player1=player1;
    this->player2=player2;

}
void Game::playTurn(){};
void Game::printLastTurn(){};
void Game::playAll(){};
void Game::printWiner(){};
void Game::printStats(){};
void Game::printLog(){};
