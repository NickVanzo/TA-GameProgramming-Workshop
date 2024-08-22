#include <iostream>
#include <unordered_map>

void unorderedMapExamples()
{
  std::unordered_map<int, std::string> ids;

  ids[1] = "one";
  ids[2] = "two";
  ids[3] = "three";
  ids[4] = "four";
  ids[5] = "five";

  std::cout << "Size : " << ids.size() << std::endl;

  if (ids.empty() == false)
    std::cout << "Unordered map is not empty" << std::endl;
  else
    std::cout << "Unordered map is empty" << std::endl;

  // Accessing elements
  std::cout << "Element at key 2 : " << ids[2] << std::endl;
}

/**
 * This workshop section shows how to use basic data structures
 */
int main()
{
  unorderedMapExamples();
  return 0;
}
