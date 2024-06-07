#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  int a = 10;
  int b = 20;
  std::cout << a << " " << b << std::endl;

  // swap.
  int tmp = a;
  a = b;
  b = tmp;

  std::cout << a << " " << b << std::endl;

  return 0;
}
