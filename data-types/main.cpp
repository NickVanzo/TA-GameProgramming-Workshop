#include <iostream>

/**
 * This workshop section will walk you through the main data types you will find
 * in C++
 */
int main()
{
    /**
     * Integers represent whole numbers.
     * - int: Default integer type, usually 4 bytes.
     * - short int: Smaller integer, typically 2 bytes.
     * - long int: Larger integer, typically 4 or 8 bytes.
     * - long long int: Very large integer, typically 8 bytes.
     */
    int age = 30;
    short int shortAge = 25;
    long int population = 1000000;
    long long int bigNumber = 123456789012345;

    std::cout << "My age is: " << age << std::endl;
    std::cout << "Short age: " << shortAge << std::endl;
    std::cout << "Population: " << population << std::endl;
    std::cout << "Big number: " << bigNumber << std::endl;

    /**
     * Floating-point numbers represent real numbers with decimal points.
     * - float: Single-precision floating-point, typically 4 bytes.
     * - double: Double-precision floating-point, typically 8 bytes.
     * - long double: Extended precision floating-point, typically 10 or 16 bytes.
     */
    float height = 1.75;
    double weight = 70.5;
    long double preciseMeasurement = 3.14159265358979323846;

    std::cout << "My height is: " << height << std::endl;
    std::cout << "My weight is: " << weight << std::endl;
    std::cout << "Precise measurement: " << preciseMeasurement << std::endl;

    /**
     * Characters represent single characters.
     */
    char initial = 'A';

    std::cout << "My initial is: " << initial << std::endl;

    /**
     * Booleans represent true or false values.
     */
    bool isStudent = true;

    std::cout << "Am I a student? " << isStudent << std::endl;

    /**
     * Strings are sequences of characters.
     */
    std::string name = "Slam Shady";

    std::cout << "My name is: " << name << std::endl;

    /**
     * Casts are used to convert one data type to another.
     */
    int x = 3.14;
    int y = static_cast<double>(3.14);

    std::cout << "Implicit cast: " << x << std::endl;
    std::cout << "Explicit cast: " << y << std::endl;

    /**
     * Example of an enum
     */
    enum Color
    {
        RED,
        GREEN,
        BLUE
    };
    Color c = GREEN;
    std::cout << c << std::endl;

    //Scoped enums provide stronger type safety and clarity
    enum class Direction
    {
        NORTH,
        SOUTH,
        EAST,
        WEST
    };
    Direction d = Direction::EAST;
    // Error: cannot implicitly convert 'Direction' to 'int'
    // std::cout << d << std::endl;
    

    return 0;
}