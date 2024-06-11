#include <algorithm>
#include <cctype>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
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

  std::vector<int> prev_vec = vec;
  std::vector<int> next_vec = vec;

  // 前の順列.
  if (std::prev_permutation(prev_vec.begin(), prev_vec.end()))
  {
    for (auto itr = prev_vec.begin(); itr != prev_vec.end(); itr++)
    {
      std::cout << *itr;
      if (itr != prev_vec.end() - 1)
      {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }

  // 与えられた数列.
  for (auto itr = vec.begin(); itr != vec.end(); itr++)
  {
    std::cout << *itr;
    if (itr != vec.end() - 1)
    {
      std::cout << " ";
    }
  }
  std::cout << std::endl;

  // 次の順列.
  if (std::next_permutation(next_vec.begin(), next_vec.end()))
  {
    for (auto itr = next_vec.begin(); itr != next_vec.end(); itr++)
    {
      std::cout << *itr;
      if (itr != next_vec.end() - 1)
      {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
  return 0;
}
