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

  std::vector<int> vec(n, 0);
  for (auto &x : vec)
  {
    std::cin >> x;
  }

  /* unique(s.begin(), s.end())は
    aabbbcddaaa ⇒ abcda?????? (? はゴミ)
    とし、最初の ? を指すポインタを返す. */
  vec.erase(std::unique(vec.begin(), vec.end()), vec.end());

  for (auto itr = vec.begin(); itr != vec.end(); itr++)
  {
    std::cout << *itr;
    if (itr != vec.end() - 1)
    {
      std::cout << " ";
    }
  }
  std::cout << std::endl;

  return 0;
}
