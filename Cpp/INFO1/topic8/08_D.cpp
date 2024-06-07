#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  while (true)
  {
    int a;
    std::cin >> a;

    if (a == 0)
    {
      break;
    }

    if (a > 0)
    {
      std::cout << a << std::endl;
    }
  }

  return 0;
}
