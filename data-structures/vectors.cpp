#include <iostream>
#include <vector>

void vectorExamples()
{
  std::vector<int> ids;

  for (int i = 1; i <= 5; i++)
    ids.push_back(i);

  for (auto i = ids.begin(); i != ids.end(); ++i)
    std::cout << *i << " " << std::endl;

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

/**
 * This workshop section  shows how to use basic data structures
 */
int main()
{
  vectorExamples();
  return 0;
}
