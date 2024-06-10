#include <algorithm>
#include <cctype>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

int main(void)
{
  int n, q;
  std::cin >> n >> q;

  std::vector<std::stack<int>> stks(n, std::stack<int>());

  for (int i = 0; i < q; i++)
  {
    int op;
    std::cin >> op;

    if (op == 0)
    {
      int t, x;
      std::cin >> t >> x;

      stks.at(t).push(x);
    }
    else if (op == 1)
    {
      int t;
      std::cin >> t;

      if (!stks.at(t).empty())
      {
        std::cout << stks.at(t).top() << std::endl;
      }
    }
    else if (op == 2)
    {
      int t;
      std::cin >> t;
      if (!stks.at(t).empty())
      {
        stks.at(t).pop();
      }
    }
  }

  return 0;
}
