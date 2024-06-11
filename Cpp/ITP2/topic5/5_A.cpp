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

  std::vector<std::pair<int, int>> points(n);
  for (auto &x : points)
  {
    std::cin >> x.first >> x.second;
  }

  std::sort(points.begin(), points.end());

  for (auto itr = points.begin(); itr != points.end(); itr++)
  {
    std::cout << (*itr).first << " " << (*itr).second << std::endl;
  }

  return 0;
}
