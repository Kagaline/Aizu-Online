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

  std::vector<int> vec;

  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;

    vec.push_back(x);
  }

  int q;
  std::cin >> q;
  for (int i = 0; i < q; i++)
  {
    int op, b, e;
    std::cin >> op >> b >> e;

    if (op == 0)
    {
      auto minimum_itr = std::min_element(vec.begin() + b, vec.begin() + e);
      std::cout << *minimum_itr << std::endl;
    }

    else if (op == 1)
    {
      auto maximum_itr = std::max_element(vec.begin() + b, vec.begin() + e);
      std::cout << *maximum_itr << std::endl;
    }
  }

  return 0;
}
