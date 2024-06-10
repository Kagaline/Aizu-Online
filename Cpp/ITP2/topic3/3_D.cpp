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
  std::vector<int> vec_A;
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    vec_A.push_back(x);
  }

  std::vector<int> vec_B;
  int m;
  std::cin >> m;
  for (int i = 0; i < m; i++)
  {
    int x;
    std::cin >> x;
    vec_B.push_back(x);
  }

  for (int i = 0; i < std::min(n, m); i++)
  {
    if (vec_A.at(i) != vec_B.at(i))
    {
      if (vec_A.at(i) < vec_B.at(i))
      {
        std::cout << 1 << std::endl;
        return 0;
      }
      else
      {
        std::cout << 0 << std::endl;
        return 0;
      }
    }
  }

  if (n < m)
  {
    std::cout << 1 << std::endl;
    return 0;
  }
  else
  {
    std::cout << 0 << std::endl;
    return 0;
  }
  return 0;
}
