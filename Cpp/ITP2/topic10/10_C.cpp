#include <algorithm>
#include <bitset>
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
  std::bitset<64> bsf(0);

  int q;
  std::cin >> q;
  for (int i = 0; i < q; i++)
  {
    int op;
    std::cin >> op;

    if (op == 0)  // test.
    {
      int i;
      std::cin >> i;
      std::cout << bsf.test(i) << std::endl;
    }
    else if (op == 1)  // set.
    {
      int i;
      std::cin >> i;
      bsf.set(i, 1);
    }
    else if (op == 2)  // clear.
    {
      int i;
      std::cin >> i;
      bsf.reset(i);
    }
    else if (op == 3)  // flip.
    {
      int i;
      std::cin >> i;
      bsf.flip(i);
    }
    else if (op == 4)
    {
      std::cout << bsf.all() << std::endl;
    }
    else if (op == 5)
    {
      std::cout << bsf.any() << std::endl;
    }
    else if (op == 6)
    {
      std::cout << bsf.none() << std::endl;
    }
    else if (op == 7)
    {
      std::cout << bsf.count() << std::endl;
    }
    else if (op == 8)
    {
      std::cout << bsf.to_ulong() << std::endl;
    }
  }

  return 0;
}
