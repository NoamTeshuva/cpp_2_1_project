#include "player.hpp" 

 using namespace ariel;


Player::Player(){};
Player::Player (string nameP)
{
this->nameP = nameP;
}
int Player::stacksize(){return 0;}

int Player::cardesTaken(){return 0;};