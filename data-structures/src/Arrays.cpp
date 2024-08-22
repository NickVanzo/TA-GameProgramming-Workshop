#include <iostream>

void arrayExamples()
{
  const int size = 5;
  int ids[size];

  for (int i = 0; i < size; i++)
    ids[i] = i + 1;

  for (int i = 0; i < size; i++)
    std::cout << ids[i] << " " << std::endl;

  std::cout << "Size : " << size << std::endl;

  // Arrays cannot be resized, so no need for resize() or capacity().
  std::cout << "First element : " << ids[0] << std::endl;
  std::cout << "Last element : " << ids[size - 1] << std::endl;
}

/**
 * This workshop section shows how to use basic data structures
 */
int main()
{
  arrayExamples();
  return 0;
}
