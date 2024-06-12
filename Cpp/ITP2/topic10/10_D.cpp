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
  // target bitset.
  std::bitset<64> bsf(0);

  // set masks/
  int n;
  std::cin >> n;
  std::vector<std::bitset<64>> masks(n, std::bitset<64>(0));
  for (auto &x : masks)
  {
    int k;
    std::cin >> k;
    for (int i = 0; i < k; i++)
    {
      int j;
      std::cin >> j;
      x.set(j, 1);
    }
  }

  // queries.
  int q;
  std::cin >> q;
  for (int i = 0; i < q; i++)
  {
    int op, m;
    std::cin >> op >> m;

    if (op == 0)  // test.
    {
      int b = m;
      std::cout << bsf.test(b) << std::endl;
    }
    else if (op == 1)  // set.
    {
      bsf |= masks.at(m);
    }
    else if (op == 2)  // clear.
    {
      bsf &= ~(masks.at(m));
    }
    else if (op == 3)  // flip.
    {
      bsf ^= masks.at(m);
    }
    else if (op == 4)  // all.
    {
      std::cout << ((bsf & masks.at(m)) == masks.at(m)) << std::endl;
    }
    else if (op == 5)  // any.
    {
      std::cout << (bsf & masks.at(m)).any() << std::endl;
    }
    else if (op == 6)  // none.
    {
      std::cout << (bsf & masks.at(m)).none() << std::endl;
    }
    else if (op == 7)  // count.
    {
      std::cout << (bsf & masks.at(m)).count() << std::endl;
    }
    else if (op == 8)  // val.
    {
      std::cout << (bsf & masks.at(m)).to_ulong() << std::endl;
    }
  }

  return 0;
}
