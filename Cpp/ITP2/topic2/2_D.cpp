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

  std::vector<std::list<int>> lsts(n, std::list<int>());

  int q;
  std::cin >> q;

  for (int i = 0; i < q; i++)
  {
    int op;
    std::cin >> op;

    // insert.
    if (op == 0)
    {
      int t, x;
      std::cin >> t >> x;

      lsts.at(t).push_back(x);
    }

    // dump.
    else if (op == 1)
    {
      int t;
      std::cin >> t;

      for (auto itr = lsts.at(t).begin(); itr != lsts.at(t).end(); itr++)
      {
        std::cout << *itr;
        if (itr != --lsts.at(t).end())
        {
          std::cout << " ";
        }
      }
      std::cout << std::endl;
    }

    // splice.
    else if (op == 2)
    {
      int s, t;
      std::cin >> s >> t;

      lsts.at(t).splice(lsts.at(t).end(), std::move(lsts.at(s)));
      lsts.at(s).clear();
    }
  }

  return 0;
}
