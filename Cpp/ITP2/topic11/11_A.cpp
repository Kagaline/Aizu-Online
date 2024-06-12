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

  for (int i = 0; i < std::pow(2, n); i++)
  {
    std::cout << i << ":";
    std::bitset<18> bs(i);
    for (int idx = 0; idx < 18; idx++)
    {
      if (bs.test(idx))
      {
        std::cout << " " << idx;
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
