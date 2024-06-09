#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main(void)
{
  int n;
  std::cin >> n;

  std::vector<int> vec(n, 0);
  for (auto &x : vec)
  {
    std::cin >> x;
  }

  int l, r;
  std::cin >> l >> r;
  std::swap(vec.at(l), vec.at(r));

  for (auto itr = vec.begin(); itr != vec.end(); itr++)
  {
    std::cout << *itr;
    if (itr != vec.end() - 1)
    {
      std::cout << " ";
    }
  }
  std::cout << std::endl;

  return 0;
}
