#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  int n;
  std::cin >> n;

  int maxv = -1000000000;

  int x;
  std::cin >> x;

  int minv = x;
  for (int i = 1; i < n; i++)
  {
    std::cin >> x;
    maxv = std::max(maxv, x - minv);
    minv = std::min(minv, x);
  }

  std::cout << maxv << std::endl;
  return 0;
}
