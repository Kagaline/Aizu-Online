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

    std::cout << "[" << l << ", " << r << ")" << std::endl;

    if (array_.at(m) == key)
    {
      break;
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

  int result = binary_search(vec, key);

  return 0;
}
