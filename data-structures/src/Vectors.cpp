#include <iostream>
#include <vector>
#include "../include/GameObject.h"

void vectorExamples()
{
  std::vector<int> ids;

  for (int i = 1; i <= 5; i++)
    ids.push_back(i);

  std::cout << "Size : " << ids.size();
  std::cout << "\nCapacity : " << ids.capacity();
  std::cout << "\nMax_Size : " << ids.max_size();

  ids.resize(4);

  std::cout << "\nSize : " << ids.size();

  if (ids.empty() == false)
    std::cout << "\nVector is not empty" << std::endl;
  else
    std::cout << "\nVector is empty" << std::endl;

  std::cout << "\nReference operator [g] : g1[2] = " << ids[2];
  std::cout << "\nat : g1.at(3) = " << ids.at(3);
  std::cout << "\nfront() : g1.front() = " << ids.front();
  std::cout << "\nback() : g1.back() = " << ids.back();
}

void vectorWithCustomClass() {
  std::vector<GameObject> objects;
  for(int i = 0; i < 10; i++) {
    //Create a new GameObject and push it inside the "objects" vector
    GameObject obj("Object#" + std::to_string(i));
    objects.push_back(obj);
  }

  for(GameObject o : objects) {
    std::cout << o.GetObjectName() << std::endl;
  }
}

/**
 * This workshop section  shows how to use basic data structures
 */
int main()
{
  // vectorExamples();
  vectorWithCustomClass();
  return 0;
}
