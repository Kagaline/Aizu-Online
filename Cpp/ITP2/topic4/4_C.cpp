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

  int q;
  std::cin >> q;
  for (int i = 0; i < q; i++)
  {
    int b, e, t;
    std::cin >> b >> e >> t;

    std::swap_ranges(vec.begin() + b, vec.begin() + e, vec.begin() + t);
  }

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
