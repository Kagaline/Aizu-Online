#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int binary_search(std::vector<int> array_, int key)
{
  int l = 0;
  int r = array_.size();

  while (l < r)
  {
    int m = (l + r) / 2;

    std::cout << " " << array_.at(m);
    if (array_.at(m) == key)
    {
      std::cout << std::endl;
      return m;
    }
    if (array_.at(m) < key)
    {
      l = m + 1;
    }
    else
    {
      r = m;
    }
  }

  std::cout << std::endl;
  return -1;
}

int linear_search(std::vector<int> array_, int key)
{
  int length = array_.size();
  for (int i = 0; i < length; i++)
  {
    std::cout << " " << array_.at(i);
    if (array_.at(i) == key)
    {
      std::cout << std::endl;
      return i;
    }
  }
  std::cout << std::endl;
  return -1;
}

int main(void)
{
  int n;
  std::cin >> n;

  std::vector<int> vec;
  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    vec.push_back(x);
  }

  int key;
  std::cin >> key;

  linear_search(vec, key);
  binary_search(vec, key);

  return 0;
}
