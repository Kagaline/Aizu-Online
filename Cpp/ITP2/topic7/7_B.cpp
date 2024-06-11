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
  std::set<int> set_;

  int q;
  std::cin >> q;

  for (int i = 0; i < q; i++)
  {
    int op, x;
    std::cin >> op >> x;

    if (op == 0)
    {
      set_.insert(x);
      std::cout << set_.size() << std::endl;
    }
    else if (op == 1)
    {
      std::cout << (set_.find(x) != set_.end()) << std::endl;
    }
    else if (op == 2)
    {
      set_.erase(x);
    }
  }

  return 0;
}
