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
  int n, q;
  std::cin >> n >> q;

  std::vector<std::queue<int>> ques(n, std::queue<int>());

  for (int i = 0; i < q; i++)
  {
    int op;
    std::cin >> op;

    if (op == 0)
    {
      int t, x;
      std::cin >> t >> x;

      ques.at(t).push(x);
    }
    else if (op == 1)
    {
      int t;
      std::cin >> t;

      if (!ques.at(t).empty())
      {
        std::cout << ques.at(t).front() << std::endl;
      }
    }
    else if (op == 2)
    {
      int t;
      std::cin >> t;
      if (!ques.at(t).empty())
      {
        ques.at(t).pop();
      }
    }
  }

  return 0;
}
