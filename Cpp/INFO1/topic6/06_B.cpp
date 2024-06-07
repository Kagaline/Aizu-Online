#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;

  std::cout << ((a == b) && (c == d)) << std::endl;

  return 0;
}
