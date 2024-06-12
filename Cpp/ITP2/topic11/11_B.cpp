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
  int n;
  std::cin >> n;

  std::bitset<18> mask(0);
  int k;
  std::cin >> k;
  for (int i = 0; i < k; i++)
  {
    int x;
    std::cin >> x;
    mask.set(x, 1);
  }

  for (int i = 0; i < std::pow(2, n); i++)
  {
    std::bitset<18> bs(i);
    if ((bs & mask) == mask)
    {
      std::cout << i << ":";
      for (int idx = 0; idx < 18; idx++)
      {
        if (bs.test(idx))
        {
          std::cout << " " << idx;
        }
      }
      std::cout << std::endl;
    }
  }

  return 0;
}
