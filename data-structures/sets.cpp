#include <iostream>
#include <set>

void setExamples()
{
  std::set<int> ids;

  for (int i = 1; i <= 5; i++)
    ids.insert(i);

  for (auto i = ids.begin(); i != ids.end(); ++i)
    std::cout << *i << " " << std::endl;

  std::cout << "Size : " << ids.size() << std::endl;

  if (ids.empty() == false)
    std::cout << "Set is not empty" << std::endl;
  else
    std::cout << "Set is empty" << std::endl;

  // Set does not support direct access to elements like vectors.
  // For demonstration purposes, we'll just show the first and last elements using iterators.
  if (!ids.empty())
  {
    std::cout << "First element : " << *ids.begin() << std::endl;
    std::cout << "Last element : " << *ids.rbegin() << std::endl;
  }
}

/**
 * This workshop section shows how to use basic data structures
 */
int main()
{
  setExamples();
  return 0;
}
