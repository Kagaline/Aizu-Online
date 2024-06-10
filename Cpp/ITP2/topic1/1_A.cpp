#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main(void)
{
  std::vector<int> vec;

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
      vec.push_back(x);
    }
    else if (op == 1)
    {
      int p;
      std::cin >> p;
      std::cout << vec.at(p) << std::endl;
    }
    else if (op == 2)
    {
      vec.pop_back();
    }
  }

  return 0;
}
