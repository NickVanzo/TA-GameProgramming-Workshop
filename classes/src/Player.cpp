#include "../include/Player.h"
#include <iostream>

Player::Player(const std::string& name, int level, int health)
    : name(name), level(level), health(health) {}

void Player::introduce() {
    std::cout << "Name of player: " << name << " - Level: " << level << " - HP " << health << " health points." << std::endl;
}