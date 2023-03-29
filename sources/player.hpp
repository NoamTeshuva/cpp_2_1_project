#pragma once
#include <stack>
#include <string> 
using namespace std;


namespace ariel{
class Player  {
private:
string nameP;
public: 
    Player ();
     Player  (string nameP);
    // std::string name;
int stacksize();
int cardesTaken();
};

}

