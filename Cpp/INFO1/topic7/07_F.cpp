#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  int a, b, c;
  std::cin >> a >> b >> c;

  if (a <= b && a <= c)
  {
    std::cout << a << std::endl;
  }
  else if (b <= a && b <= c)
  {
    std::cout << b << std::endl;
  }
  else if (c <= a && c <= b)
  {
    std::cout << c << std::endl;
  }

  return 0;
}
