#include <algorithm>
#include <cctype>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

int main(void)
{
  std::map<std::string, int> m;

  int q;
  std::cin >> q;
  for (int i = 0; i < q; i++)
  {
    int op;
    std::cin >> op;

    if (op == 0)
    {
      std::string key;
      int x;
      std::cin >> key >> x;
      m[key] = x;
    }
    else if (op == 1)
    {
      std::string key;
      std::cin >> key;
      if (m.find(key) != m.end())
      {
        std::cout << m[key] << std::endl;
      }
      else
      {
        std::cout << 0 << std::endl;
      }
    }
    else if (op == 2)
    {
      std::string key;
      std::cin >> key;
      m.erase(key);
    }
    else if (op == 3)
    {
      std::string lower, upper;
      std::cin >> lower >> upper;
      for (auto itr = m.lower_bound(lower); itr != m.upper_bound(upper); itr++)
      {
        std::cout << (*itr).first << " " << (*itr).second << std::endl;
      }
    }
  }
  return 0;
}
