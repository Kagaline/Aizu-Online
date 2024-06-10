#include <algorithm>
#include <cctype>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main(void)
{
  int n, q;
  std::cin >> n >> q;

  std::vector<std::vector<int>> vec(n, std::vector<int>());

  for (int i = 0; i < q; i++)
  {
    int op;
    std::cin >> op;

    if (op == 0)
    {
      int t, x;
      std::cin >> t >> x;
      vec.at(t).push_back(x);
    }
    else if (op == 1)
    {
      int t;
      std::cin >> t;
      for (auto itr = vec.at(t).begin(); itr != vec.at(t).end(); itr++)
      {
        std::cout << *itr;
        if (itr != vec.at(t).end() - 1)
        {
          std::cout << " ";
        }
      }
      std::cout << std::endl;
    }
    else if (op == 2)
    {
      int t;
      std::cin >> t;
      vec.at(t).clear();
    }
  }

  return 0;
}
