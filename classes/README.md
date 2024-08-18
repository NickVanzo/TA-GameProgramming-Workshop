# C++ Basics Workshop: Understanding Classes

Welcome to the C++ Basics Workshop! This repository contains example code and explanations to help you understand the fundamental concepts of classes in C++. By the end of this workshop, you will be familiar with how to define classes, use them, and follow best practices for organizing your class-related code.

## Workshop Overview

In this workshop, we'll cover the following topics:

- **What is a Class?**  
  Learn what classes are and why they are used in object-oriented programming.

- **Defining a Class**  
  Understand how to define a class, including its attributes and methods.

- **Accessing Class Variables**  
  Learn how to access and manipulate class variables from within and outside the class.

- **Class Structure: Header (.h) and Implementation (.cpp) Files**  
  Implement a class by separating the class declaration (header file) from its implementation (source file)

- **Inheritance**
  See how to inherit some logic from a parent class


## Code Explanation

Let's walk through the code provided in this repository.

### Main File (`main.cpp`)

This file contains the main function that drives the execution of the program. Here, we create instances of the `Player` class and call the `introduce` method to display the player's details.

```cpp
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
```

### Compile and execute the code (`main.cpp`)

```bash
g++ main.cpp ./src/Player.cpp ./src/GameObject.cpp -o mygame
./mygame
```