#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  int a;
  std::cin >> a;

  std::cout << ((a == 2) || (a == 3) || (a == 5) || (a == 7)) << std::endl;

  return 0;
}
