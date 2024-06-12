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
    std::string key;
    std::cin >> op >> key;

    if (op == 0)
    {
      int x;
      std::cin >> x;
      m[key] = x;
    }
    else if (op == 1)
    {
      if (m.find(key) != m.end())
      {
        std::cout << m[key] << std::endl;
      }
    }
  }
  return 0;
}
