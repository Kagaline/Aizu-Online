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
  int n, k;
  std::cin >> n >> k;

  // check in all set U.
  const int pow_2_of_n = 1 << n;
  for (int i = 0; i < pow_2_of_n; i++)
  {
    std::bitset<28> bs(i);
    if (bs.count() == k)
    {
      std::cout << bs.to_ullong() << ":";
      for (int idx = 0; idx < 28; idx++)
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
