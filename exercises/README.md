# C++ Exercises

## Task

The goal of these exercises is to apply the concepts seen during the workshop. Specifically, you'll work with classes, data types, and data structures to create and manipulate objects in the context of game programming. By the end of these exercises, you'll have a better understanding of object-oriented programming and how to design and implement custom classes that can be extended and used in a simple game-like environment.

## Exercises

### 1. Create the `GameObject` Base Class

**Objective:**  
Create a base class called `GameObject` that will serve as the foundation for other game-related objects.

**Instructions:**

- Define a class `GameObject` with the following members:

  - A private member variable `std::string name` to store the name of the object.
  - A private member variable `int id` to store a unique identifier for each object.
  - A public constructor that takes `std::string name` and `int id` as parameters and initializes the respective member variables.
  - A public method `std::string GetName()` that returns the name of the object.
  - A public method `int GetId()` that returns the ID of the object.
  - A virtual method `void Update()` that prints the object's name and ID.

  ### 2. Inherit from `GameObject` to Create Specific Game Objects

**Objective:**  
Create derived classes that inherit from `GameObject` to represent specific game entities, such as a player or an enemy.

**Instructions:**

- **Create a class `Player` that inherits from `GameObject`:**

  - Add a private member variable `int health` to represent the player's health.
  - Add a constructor that initializes the player's name, ID, and health.
  - Override the `Update()` method to print the player's name, ID, and health.

- **Create a class `Enemy` that inherits from `GameObject`:**
  - Add a private member variable `int damage` to represent the enemy's attack damage.
  - Add a constructor that initializes the enemy's name, ID, and damage.
  - Override the `Update()` method to print the enemy's name, ID, and damage.

### 3. Create a Simple Game Loop

**Objective:**  
Simulate a basic game loop that updates all game objects.

**Instructions:**

- Create a `std::vector<GameObject*>` to store instances of `Player` and `Enemy`.
- Add several `Player` and `Enemy` objects to the vector.
- Create a loop that iterates through the vector and calls the `Update()` method on each object.

### 4. Enhance the `GameObject` Class with Additional Functionality

**Objective:**  
Add more functionality to the `GameObject` class and its derived classes.

**Instructions:**

- Add a method `void Move(int x, int y)` to `GameObject` that simulates moving the object to a new position.

  - The position should be represented by two private member variables `int posX` and `int posY`.
  - Initialize these variables in the constructor and update them in the `Move` method.
  - Modify the `Update()` method to also print the object's position.

- Modify the `Player` and `Enemy` classes to use this new `Move` method.
