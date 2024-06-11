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
  int q;
  std::cin >> q;

  std::set<int> s;

  for (int i = 0; i < q; i++)
  {
    int op, x;
    std::cin >> op >> x;

    if (op == 0)
    {
      s.insert(x);
      std::cout << s.size() << std::endl;
    }
    else if (op == 1)
    {
      std::cout << (s.find(x) != s.end()) << std::endl;
    }
  }

  return 0;
}
