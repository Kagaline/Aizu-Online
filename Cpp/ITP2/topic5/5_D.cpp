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
  for (int i = 1; i <= n; i++)
  {
    vec.push_back(i);
  }

  do
  {
    for (auto itr = vec.begin(); itr != vec.end(); itr++)
    {
      std::cout << *itr;
      if (itr != vec.end() - 1)
      {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  } while (std::next_permutation(vec.begin(), vec.end()));

  return 0;
}
