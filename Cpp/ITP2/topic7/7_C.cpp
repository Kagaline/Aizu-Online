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
  std::set<int> s;

  int q;
  std::cin >> q;

  for (int i = 0; i < q; i++)
  {
    int op;
    std::cin >> op;

    if (op == 0)
    {
      int x;
      std::cin >> x;
      s.insert(x);
      std::cout << s.size() << std::endl;
    }
    else if (op == 1)
    {
      int x;
      std::cin >> x;
      std::cout << (s.find(x) != s.end()) << std::endl;
    }
    else if (op == 2)
    {
      int x;
      std::cin >> x;
      s.erase(x);
    }
    else if (op == 3)
    {
      int lower, upper;
      std::cin >> lower >> upper;
      for (auto itr = s.lower_bound(lower); itr != s.upper_bound(upper); itr++)
      {
        std::cout << *itr << std::endl;
      }
    }
  }

  return 0;
}
