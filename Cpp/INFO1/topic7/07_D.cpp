#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  int x;
  std::cin >> x;

  if (x >= 80 && x <= 100)
  {
    std::cout << "A" << std::endl;
  }
  else if (x >= 65)
  {
    std::cout << "B" << std::endl;
  }
  else if (x >= 50)
  {
    std::cout << "C" << std::endl;
  }
  else if (x >= 35)
  {
    std::cout << "D" << std::endl;
  }
  else if (x >= 0)
  {
    std::cout << "F" << std::endl;
  }

  return 0;
}
