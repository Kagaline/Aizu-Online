#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

int main(void)
{
  char c;
  std::cin >> c;

  if ('0' <= c && c <= '9')
  {
    std::cout << "digit" << std::endl;
  }
  else if ('a' <= c && c <= 'z')
  {
    std::cout << "lower" << std::endl;
  }
  else if ('A' <= c && c <= 'Z')
  {
    std::cout << "upper" << std::endl;
  }
  else
  {
    std::cout << "other" << std::endl;
  }

  return 0;
}
