#include <algorithm>
#include <cctype>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main(void)
{
  std::deque<int> deq;

  int q;
  std::cin >> q;

  for (int i = 0; i < q; i++)
  {
    int op;
    std::cin >> op;
    if (op == 0)
    {
      int d, x;
      std::cin >> d >> x;
      if (d == 0)
      {
        deq.push_front(x);
      }
      else if (d == 1)
      {
        deq.push_back(x);
      }
    }
    else if (op == 1)
    {
      int p;
      std::cin >> p;
      std::cout << deq.at(p) << std::endl;
    }
    else if (op == 2)
    {
      int d;
      std::cin >> d;
      if (d == 0)
      {
        deq.pop_front();
      }
      else if (d == 1)
      {
        deq.pop_back();
      }
    }
  }
  return 0;
}
