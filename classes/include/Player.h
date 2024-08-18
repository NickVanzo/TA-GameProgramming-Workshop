#pragma once
#include <string>

class Player
{
public:
    Player(const std::string& name, int level, int health); 

    std::string name;
    int level;
    int health;

    void introduce();
};