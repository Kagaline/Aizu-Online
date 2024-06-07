#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int gcd(int x, int y)
{
  if (x < y)
  {
    std::swap(x, y);
  }

  while (y > 0)
  {
    int r = x % y;
    x = y;
    y = r;
  }

  return x;
}

int main(void)
{
  int x, y;
  std::cin >> x >> y;

  std::cout << gcd(x, y) << std::endl;
  return 0;
}
