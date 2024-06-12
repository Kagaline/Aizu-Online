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
  std::multimap<std::string, int> multm;

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
      multm.insert(std::pair<std::string, int>{key, x});
    }
    else if (op == 1)
    {
      std::string key;
      std::cin >> key;
      for (auto itr = multm.lower_bound(key); itr != multm.upper_bound(key); itr++)
      {
        std::cout << (*itr).second << std::endl;
      }
    }
    else if (op == 2)
    {
      std::string key;
      std::cin >> key;
      multm.erase(key);
    }
    else if (op == 3)
    {
      std::string lower, upper;
      std::cin >> lower >> upper;
      for (auto itr = multm.lower_bound(lower); itr != multm.upper_bound(upper); itr++)
      {
        std::cout << (*itr).first << " " << (*itr).second << std::endl;
      }
    }
  }

  return 0;
}
