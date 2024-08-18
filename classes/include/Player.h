#pragma once
#include "./GameObject.h"
#include <string>

class Player : public GameObject
{
public:
    Player(const std::string& name, int level); 

    std::string name;
    int level;
    int health;

    void introduce();
};