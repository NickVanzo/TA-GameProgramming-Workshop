#include <iostream>
#include "./include/Player.h"

/**
 * In this section of the workshop we'll go hover these questions:
 *  - how to define a new class?
 *  - how to access its variables?
 *  - how and why do we divide a class in a .h and a .cpp file?
 */
int main() {
    Player player1("Joel", 10);
    Player player2("Jack", 5);

    player1.introduce();
    player2.introduce();

    std::cout << "First GameObject: " << player1.GetObjectName() << std::endl;
    std::cout << "Second GameObject: " << player2.GetObjectName() << std::endl;

    return 0;
}