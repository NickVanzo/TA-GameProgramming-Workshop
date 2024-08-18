#include "../include/Player.h"
#include <iostream>

Player::Player(const std::string& name, int level)
    : GameObject("Player" + name), name(name), level(level), health(100.0) {}

void Player::introduce() {
    std::cout << "Name of player: " << name << " - Level: " << level << " - HP " << health << " health points." << std::endl;
}