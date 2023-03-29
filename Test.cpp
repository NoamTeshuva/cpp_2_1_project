#include <iostream>
#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

#include <stdexcept>
using namespace ariel;



TEST_CASE("insert NULL players") {
    Player* nullP = nullptr;
    Player p1("Alice");
    Player p2("Bob");

    // CHECK_THROWS(Game game(nullP, p2));
    CHECK_NOTHROW(Game game (p1, p2));
    Game game(p1,p1);
    CHECK_THROWS(game.playTurn());
    Game game2(p2,p2);
    CHECK_THROWS(game2.playTurn());

}
TEST_CASE ("checking the methods of game")
{
Player player_check_1 ("Alice");
Player player_check_2 ("Bob");
Game game(player_check_1,player_check_2);
CHECK_THROWS(game.playAll());
CHECK_THROWS(game.printLastTurn());
CHECK_THROWS(game.printLog());
CHECK_THROWS(game.printStats());
CHECK_THROWS(game.printWiner());

}


TEST_CASE ("problems with with the player methods")
{
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);
   
    game.playTurn();
    CHECK(p1.stacksize() == 25);
    CHECK(p2.stacksize() == 25);
    
    bool cardesTakenCheck1=p1.cardesTaken()==0;
    bool cardesTakenCheck2=p1.cardesTaken()==2;
    bool cardesTakenCheck3=p1.cardesTaken()==6;
    bool cardesTakenCheck4=p1.cardesTaken()==10;
    bool cardesTakenCheck5=p1.cardesTaken()==14;
    bool cardesTakenCheck6=p1.cardesTaken()==18;
    bool cardesTakenCheck7=p1.cardesTaken()==22;
    bool cardesTakenCheck8=p1.cardesTaken()==26;
    
    bool cardesTakenCheckAll=(cardesTakenCheck1==true||cardesTakenCheck2||cardesTakenCheck3||cardesTakenCheck4
    ||cardesTakenCheck5||cardesTakenCheck6||cardesTakenCheck7||cardesTakenCheck8);
   
    CHECK(cardesTakenCheckAll==true);

    bool cardesTakenCheck11=p2.cardesTaken()==0;
    bool cardesTakenCheck22=p2.cardesTaken()==2;
    bool cardesTakenCheck33=p2.cardesTaken()==6;
    bool cardesTakenCheck44=p2.cardesTaken()==10;
    bool cardesTakenCheck55=p2.cardesTaken()==14;
    bool cardesTakenCheck66=p2.cardesTaken()==18;
    bool cardesTakenCheck77=p2.cardesTaken()==22;
    bool cardesTakenCheck88=p2.cardesTaken()==26;
    bool cardesTakenCheckAll2=( cardesTakenCheck11==true||cardesTakenCheck22==true||cardesTakenCheck33==true||cardesTakenCheck44==true
    ||cardesTakenCheck55==true||cardesTakenCheck66==true||cardesTakenCheck77==true||cardesTakenCheck88==true);
    CHECK(cardesTakenCheckAll2==true);
   
}

TEST_CASE("problems withe the player methods")
{
Player player_check_1 ("Alice");
Player player_check_2 ("Bob");
CHECK (player_check_1.cardesTaken()==0);
CHECK (player_check_2.cardesTaken()==0);
CHECK (player_check_1.stacksize()==0);
CHECK (player_check_2.stacksize()==0);
}

TEST_CASE("initilazie empty player")
{
Player player_check_1;
CHECK_THROWS(player_check_1.stacksize());
CHECK_THROWS(player_check_1.cardesTaken());
}


TEST_CASE("problems with the game")
{
Player player_check_1 ("Alice");
Player player_check_2 ("Bob");
Game game(player_check_1,player_check_2);
game.playAll();
bool check1 =player_check_1.cardesTaken()>=0;
bool check2 =player_check_2.cardesTaken()>=0;
bool ab=(check1||check2);
CHECK(ab);
bool check11 =player_check_1.stacksize()>=0;
bool check22 =player_check_2.stacksize()>=0;
bool ab2=(check11||check22);
CHECK(ab2);

bool check111 =player_check_1.cardesTaken()<=52;
bool check222 =player_check_2.cardesTaken()<=52;
bool ab22=(check1||check2);
CHECK(ab22);

}



