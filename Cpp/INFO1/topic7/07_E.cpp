#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  int a, b;
  std::cin >> a >> b;

  if (a < b)
  {
    std::cout << a << std::endl;
  }
  else
  {
    std::cout << b << std::endl;
  }

  return 0;
}
