#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int linear_search(std::vector<int> array_, int key)
{
  int length = array_.size();
  for (int i = 0; i < length; i++)
  {
    if (array_.at(i) == key)
    {
      return i;
    }
  }
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

  int q;
  std::cin >> q;
  for (int i = 0; i < q; ++i)
  {
    int key;
    std::cin >> key;

    if (linear_search(vec, key) != -1)
    {
      std::cout << "Yes" << std::endl;
    }
    else
    {
      std::cout << "No" << std::endl;
    }
  }

  return 0;
}